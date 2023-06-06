// Create B tree of order 5 for 10,20,50,60,40,80,100,70,130,90,30,120,140,25,35,160,180.

#include <iostream>
#include <vector>

using namespace std;

class Node {
public:
    int data;
    vector<Node*> children;
    Node(int data) {
        this->data = data;
    }
};

void display(Node* node) {
    string str = to_string(node->data) + " -> ";
    for (Node* child  : node->children) {
        str += to_string(child->data) + ", ";
    }
    str += ".";
    cout << str << endl;
    for(Node* child : node->children){
        display(child);
    }
}

void construct(vector<int>& dlist, Node* node, int i) {
    if (i == dlist.size()) {
        return;
    }
    if (node->children.size() == 0) {
        Node* child = new Node(dlist[i]);
        node->children.push_back(child);
        construct(dlist, node, i + 1);
    } else {
        Node* lastChild = node->children[node->children.size() - 1];
        if (lastChild->children.size() < 5) {
            Node* child = new Node(dlist[i]);
            lastChild->children.push_back(child);
            construct(dlist, node, i + 1);
        } else {
            Node* child = new Node(dlist[i]);
            node->children.push_back(child);
            construct(dlist, node, i + 1);
        }
    }
}

int main() {
    vector<int> dlist = {10, 20, 50, 60, 40, 80, 100, 70, 130, 90, 30, 120, 140, 25, 35, 160, 180};
    Node* root = new Node(dlist[0]);
    construct(dlist, root, 1);
    display(root);
    return 0;
}


