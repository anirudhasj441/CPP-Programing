#include<iostream>
using namespace std;
struct employee{
    private:
        int id;
        string name;
        float salary;
    public:
        void input(int id,string name,float salary){
            this->id = id;
            this->name = name;
            this->salary = salary;
        }
        void display(){
            cout<<"\nid:"<<id<<"\nname:"<<name<<"\nsalary:"<<salary;
        }
};
int main(){
    // employee anirudha = {1,"Anirudha",15000};
    // employee sushil;
    // sushil.id = 2;
    // sushil.name = "Sushil";
    // sushil.salary = 20000;
    int id;string name;float salary;
    cout<<"id = ";
    cin>>id;
    cout<<"name = ";
    cin>>name;
    cout<<"salary = ";
    cin>>salary;
    employee vinay;
    vinay.input(id,name,salary);
    vinay.display();
}