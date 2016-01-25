class Grade(Student): 
    def __init__(self,fname,lname,pno,score):
            Student.__init__(self,fname,lname,pno)
            self.score=score
          
    def calculate(self):
        if self.score<=100 and self.score>=90:
            return "O"
        elif self.score<90 and self.score>=75:
            return "E"
        elif self.score<75 and self.score>=60:
            return "A"
        elif self.score<60 and self.score>=40:
            return "B"
        else:
            return "D"
