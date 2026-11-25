#include<iostream>
using namespace std;

int main(){
    int choice;
      cout<<"=========================================="<<endl;
      cout<<"TRANSPORT MANAGEMENT SYSTEM"<<endl;
      cout<<"=========================================="<<endl;
      
   do {
      cout<<"1.Manage Buses"<<endl;
       cout<<"2.Manage Routes"<<endl;
       cout<<"3.Manage Drivers"<<endl;
       cout<<"4.Manage Schedule"<<endl;
       cout<<"5.Passenger Booking"<<endl;
       cout<<"6.Cancel booking "<<endl;
       cout<<"\nEnter your choice"<<endl;
       cin>>choice;

       switch(choice){
        case 1:
             cout<<"Selected Managing busses"<<endl;
        break;
        case 2:
             cout<<"Seleced Manageing Routes"<<endl;
        break;
        case 3:
         cout<<"Selected Managing drivers"<<endl;
        break;
        case 4:
          cout<<"Selected Managing schedule"<<endl;
        break;
        case 5:
           cout<<"Selected Passenger Bookinn"<<endl;
        break;
        case 6:
           cout<<"Selected cancel booking"<<endl;
        break;
        case 7:
           cout<<"Exiting...."<<endl;
        break;
        default: 
           cout<<"INVALID"<<endl;
        break;

       }
   } while(choice!=7);
    return 0;
}