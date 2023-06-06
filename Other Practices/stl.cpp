#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(1);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    v.push_back(2);
    cout<<v.size()<<endl;

    v.push_back(3);
    cout<<v.size()<<endl;

    cout<<v.capacity();

    v.pop_back();
    cout<<v.size()<<endl;
     
     for (int i:v){

            cout<<i<<" ";
     }
    return 0;
}