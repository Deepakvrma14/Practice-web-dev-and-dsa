class node:
    # left skewed tree
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
    def traverse(self):
        if self.left:
            self.left.traverse()
        print(self.data)
        if self.right:
            self.right.traverse()

root = node(1)
root.left = node(2)
root.left.left = node(3)
root.left.left.left = node(4)

root.traverse()