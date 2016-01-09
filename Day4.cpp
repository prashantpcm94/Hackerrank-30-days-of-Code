class Person{
public:
   int age ;
   Person(int initial_Age);
   void amIOld();
   void yearPasses();
};
Person::Person(int initial_Age){
    if(initial_Age<0){
        age=0;
        cout<<"This person is not valid, setting age to 0.\n";
    } else {
        age=initial_Age;
    }
  // Add some more code to run some checks on initial_Age

}
void Person::amIOld(){
    if(age<13){
        cout<<"You are young.\n";
    } else if (age>=13&&age<18){
        cout<<"You are a teenager.\n";
    } else {
        cout<<"You are old.\n";
    }
    // Do some computations in here and print out the correct statement to the console 

}
    

void Person::yearPasses(){
    age++;
  // Increment the age of the person in here
    
}
