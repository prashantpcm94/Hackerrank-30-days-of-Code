class Palindrome:
    def __init__(self):
        self.stack=[]
        self.queue=[]
    def pushCharacter(self,ch):
        self.stack.append(ch)
    
    def enqueueCharacter(self,ch):
        self.queue.insert(0,ch)
     
    def popCharacter(self):
        return self.stack.pop()
    def dequeueCharacter(self):
        return self.queue.pop()
        
