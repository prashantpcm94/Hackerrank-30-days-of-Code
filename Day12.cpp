class Grade :  public Student{
    private:
         int score;  
    public :
    Grade(string a,string b,int c,int d) 
        :Student(a,b,c){
                score = d;
    }
    char calculate(){
        if(score>=90){
            return 'O';
        } else if(score>=75){
            return 'E';
        } else if(score>=60){
            return 'A';
        } else if(score>=40){
            return 'B';
        } else {
            return 'D';
        }
    }
};
