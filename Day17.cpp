class myexception: public exception
{
    public:
    virtual const char* what() const throw() {
        return "n and p should be non-negative"; // my error message
    }
};
class Calculator{
    int n;
    int p;
    public :
    Calculator(){}
    Calculator(int n,int p){
        this->n=n;
        this->p=p;
    }
    long long power(int n,int p){
        if(n<0||p<0){
            throw myexception();
        }
        long long pow= 1;
        for(int i=1;i<=p;i++){
            pow=pow*n;
        }
        return pow;
    }
};
