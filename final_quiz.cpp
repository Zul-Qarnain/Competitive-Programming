#include<iostream>
using namespace std;

class Output{
    string name; float cgpa; float id;
public:
    static int outputId;

    Output(){
        outputId = 5;
        id = outputId;
        cout<<"ID: "<<id<<" default constructor\n";
    }
    Output(string nam, float cg){
        name = nam; cgpa = cg; outputId+=6;
        id = outputId;
        cout<<name<<" New ID: "<<id<<"\nparameterized constructor\n";
    }
    
    ~Output(){
        cout<<"\nFrom deleting Destructor \n";
        cout<<"ID-"<<id<<"; Name- "<<name<<", ";
        cout<<"<<cgpa<<"<<endl;}
    
    void setValues(string nam, float cg){
        name = nam;
        cgpa = cg; } };

int Output::outputId = 1;

int main(){
    Output o1;
    Output o2("RATUL", 4.00);
    Output o3;
    o3.setValues("RAHUL",3.75);
    o1.setValues("ROBIN",3.50);
    return 0;
}
