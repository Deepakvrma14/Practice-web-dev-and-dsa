
#tree

class Inorder:
    
        def __init__(self, root):
            self.root = root
            self.left = None
            self.right = None

        def insert(self, data):
                if self.root:
                        if data < self.root:
                                if self.left is None:
                                        self.left = Inorder(data)
                                else:
                                        self.left.insert(data)
                        elif data > self.root:
                                if self.right is None:
                                        self.right = Inorder(data)
                                else:
                                        self.right.insert(data)
                else:
                        self.root = data

        def PrintTree(self):
                if self.left:
                        self.left.PrintTree()
                print(self.root)
                if self.right:
                        self.right.PrintTree()

        def inorder(self, root):
                res = []
                if root:
                        res = self.inorder(root.left)
                        res.append(root.root)
                        res = res + self.inorder(root.right)
                return res


    
node = Inorder(10)
node.insert(5)
node.insert(15)

print(node.inorder(node))

