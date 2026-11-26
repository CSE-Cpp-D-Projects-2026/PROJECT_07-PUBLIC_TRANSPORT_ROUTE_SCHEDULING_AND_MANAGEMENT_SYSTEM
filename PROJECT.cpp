#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// 1. Route Class
class Route {
private:
    int routeId;
    string source;
    string destination;
    double fare;

public:
    Route(int id, string src, string dest, double f) {
        routeId = id;
        source = src;
        destination = dest;
        fare = f;
    }

    int getId() { 
        return routeId;
     }
    string getSource() {
         return source;
         }
    string getDestination() {
         return destination;
         }
    double getFare() { 
        return fare;
     }

    void display() {
        cout << "Route " << routeId << ": " << source << " -> " << destination
             << " | Fare: " << fare << endl;
    }
};

// 2. Schedule Class
class Schedule {
private:
    int scheduleId;
    int routeId;
    string busNumber;
    string departureTime;
    int totalSeats;
    int bookedSeats;

public:
    Schedule(int sId, int rId, string bus, string time, int seats, int booked = 0) {
        scheduleId = sId;
        routeId = rId;
        busNumber = bus;
        departureTime = time;
        totalSeats = seats;
        bookedSeats = booked;
    }

    int getScheduleId() { return scheduleId; }
    int getRouteId() { return routeId; }
    string getBusNumber() { return busNumber; }
    string getDepartureTime() { return departureTime; }
    int getTotalSeats() { return totalSeats; }
    int getBookedSeats() { return bookedSeats; }

    int getAvailableSeats() {
        return totalSeats - bookedSeats;
    }

    bool bookSeat() {
        if (bookedSeats < totalSeats) {
            bookedSeats++;
            return true;
        }
        return false;
    }

    void cancelSeat() {
        if (bookedSeats > 0) {
            bookedSeats--;
        }
    }

    void display() {
        cout << "Schedule " << scheduleId << " | Route " << routeId
             << " | Bus: " << busNumber << " | Time: " << departureTime
             << " | Available Seats: " << getAvailableSeats() << "/" << totalSeats << endl;
    }
};


int main(){
      Route R; 
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
       cout<<"7.EXIT"<<endl;
       cout<<"\nEnter your choice"<<endl;
       cin>>choice;

       switch(choice){
        case 1:{
             cout<<"Selected Managing busses"<<endl;
        break;
        case 2:{
             cout<<"Seleced Manageing Routes"<<endl;
            
            int id;
            string src, dest;
            double fare;
            cout << "Enter Route ID: "; 
            cin >> id;
            cout << "Enter Source: "; 
            cin >> src;
            cout << "Enter Destination: "; 
            cin >> dest;
            cout << "Enter Fare: "; 
            cin >> fare;
            routeadd(id, src, dest, fare);      
                   
            }
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
   }while(choice!=7);
    return 0;
}