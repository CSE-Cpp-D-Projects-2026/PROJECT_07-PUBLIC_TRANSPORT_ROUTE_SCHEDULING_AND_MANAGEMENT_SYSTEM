#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

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
        cout << "Route " << routeId << endl;
        cout<< source << " -> " << destination<<endl;
          cout<< " | Fare: " << fare << endl;
    }
};

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

    int getScheduleId() { 
        return scheduleId;
     }
    int getRouteId() { 
        return routeId; 
    }
    string getBusNumber() {
         return busNumber; 
        }
    string getDepartureTime() {
         return departureTime;
         }
    int getTotalSeats() {
         return totalSeats;
         }
    int getBookedSeats() {
         return bookedSeats; 
        }

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
        cout << "Schedule " << scheduleId <<endl;
        cout<< " Route " << routeId<<endl;
       cout<< " Bus: " << busNumber << "||  Time: " << departureTime<<endl;
       cout<< " | Available Seats: " << getAvailableSeats() << "/" << totalSeats << endl;
    }
};

class Passenger {
private:
    int ticketId;
    int scheduleId;
    string name;
    int seatNumber;

public:
    Passenger(int tId, int sId, string pName, int seat) {
        ticketId = tId;
        scheduleId = sId;
        name = pName;
        seatNumber = seat;
    }

    int getTicketId() { 
        return ticketId;
     }
    
    int getScheduleId() {
         return scheduleId;
     }
    string getName() {
         return name;
     }
    int getSeatNumber() { 
        return seatNumber;
     }

    void display() {
        cout <<" Ticket <<#" << ticketId <<endl;
        cout<< " Passenger: " << name<<endl; 
        cout<< " Schedule: " << scheduleId <<endl;
        cout<< " Seat: " << seatNumber << endl;
    }
};



int main(){ 
    int choice;
      cout<<"=========================================="<<endl;
      cout<<"TRANSPORT MANAGEMENT SYSTEM"<<endl;
      cout<<"=========================================="<<endl;
      
   do {
      cout<<"1.Add Route"<<endl;
       cout<<"2.Show Routes"<<endl;
       cout<<"3.Add Schedule"<<endl;
       cout<<"4.Show Schedule"<<endl;
       cout<<"5.Passenger Booking"<<endl;
       cout<<"6.Cancel booking "<<endl;
       cout<<"7.Show Reports"<<endl;
       cout<<"8.EXIT"<<endl;
       cout<<"\nEnter your choice"<<endl;
       cin>>choice;

       switch(choice){
        case 1:{
             cout<<"Add Routes"<<endl;
             int id;
            string src, dest;
            double fare;
            cout << "Enter Route ID: "; cin >> id;
            cout << "Enter Source: "; cin >> src;
            cout << "Enter Destination: "; cin >> dest;
            cout << "Enter Fare: "; cin >> fare;
            system.addRoute(id, src, dest, fare);
            }
        break;
        case 2:{
             cout<<"Show Routes Routes"<<endl;
              system.showroutes();    
                   
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
          cout<<"Show passenger Reports"<<endl;
        break;

          case 8:
           cout<<"Exiting...."<<endl;
        break;
        default: 
           cout<<"INVALID"<<endl;
        break;

       }
   }while(choice!=8);
    return 0;
}