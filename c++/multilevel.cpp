#include<iostream>
using namespace std;

class Person{
    public:
     string name;
     int age;

     void setpersoDetails(string n, int a){
        name =n;
        age=a;
     }

     void showpersondetails(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
     }

};

class Academics{
    public:
     int studentid;
     float marks;

    void setacademicsDetails(int id, float m){
            studentid=id;
            marks=m;
        }
    void showacademicsDetails(){
        cout<<"Student ID: "<<studentid<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};
class Student: public Person, public Academics{
    public:
     void showStudentDetails(){
         cout<<"======Student Details======"<<endl;
        showpersondetails();
        showacademicsDetails();
     }
};

int main(){
    Student s;
    s.setpersoDetails("John", 20);
    s.setacademicsDetails(101, 85.5);
    s.showStudentDetails();
    return 0;
}