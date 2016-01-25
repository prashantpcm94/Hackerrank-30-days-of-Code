    def getHeight(self,root):
        if root:
            return max(self.getHeight(root.left),self.getHeight(root.right))+1
        else:
            return 0
