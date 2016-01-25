 def levelOrder(self,root):
        queue=[]
        if root:
  	         queue=[root]
                
        while len(queue) > 0:
            nd=queue.pop()
            if nd.left:
                queue.insert(0,nd.left)
            if nd.right:
                queue.insert(0,nd.right)
            print nd.data,
            
