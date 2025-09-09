#include <iostream>
using namespace std;

class Teacher{
private:
    double salary;

public:
    //properties / attributes 
    string name;
    string dep;
    string sub;

    

    //method / member function

    void department(string department){
        dep=department;
    }

    //setter
    void setSalary(double s){
        salary =s;
    }
    //getter
    double getSalary(){
       return salary;
    }





};
int main(){
    Teacher t1;
    t1.name="Kratik";
    // t1.salary=25000;
    t1.dep="information technology";
    
    cout<<t1.name<<endl;
    cout<<t1.dep<<endl;
    return 0;

}