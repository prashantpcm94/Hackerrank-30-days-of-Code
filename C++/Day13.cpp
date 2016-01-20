class MyBook : public Book {
    private:
        int price;
    public:
        MyBook(string t,string a,int x)
            : Book(t,a){price=x;}
        void display(){
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Price: "<<price<<endl;
        }
};
