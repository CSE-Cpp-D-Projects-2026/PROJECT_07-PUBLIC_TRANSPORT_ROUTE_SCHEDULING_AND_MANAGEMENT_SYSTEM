#include<iostream>
using namespace std;
class Car{
    private:
    string brand;
    int speed;
    public:
     void display(){
        cout<<"Brand: "<<brand<<endl;
        cout<<"Speed: "<<speed<<endl;
     }
   Car(){
        brand="BMW";
        speed=200;
     }
     Car(string b,int s){
        brand=b;
        speed=s;
     }

};

int main(){
    Car c1;
    c1.display();
    Car c2("Audi",250);
    c2.display();
    return 0;
}