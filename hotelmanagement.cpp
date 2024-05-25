#include <iostream>
using namespace std;

int NoOfNights(int checkin, int checkout){
    int NoOfNights = (checkout - checkin);
    return NoOfNights;
}
int NoOfDays(int checkin, int checkout){
    int NoOfDays = (checkout - checkin + 1);
    return NoOfDays;
}
float CalPrice(int roomprice, int NoOfNights){
    float CalPrice = NoOfNights * roomprice;
    return CalPrice;
}


int main(){
    string GuestName;
    int Checkin,Checkout,RoomPrice,nights,days;
    char RoomType, op;
    float PriceTot;

    while(op != 'e'){
        cout<<"Welcome, What do you want to do? Show all Rooms,Book a Room, Show booking details or exit? "<<endl;
        cout<<"Plese enter a for available rooms, b for booking, s for showing booking details and e for exit: "<<endl;
        cin>>op;

    if(op == 'a'){
        cout<<"The Avaialble rooms are: "<<endl;
        cout<<"Non AC Single room: A: Rs.600"<<endl;
        cout<<"Non AC Double room: B: Rs.750"<<endl;
        cout<<"AC Single room: C Rs.700"<<endl;
        cout<<"AC Double room: D Rs 1000"<<endl;
        cout<<"Non AC Family room: E Rs.1100"<<endl;
        cout<<"AC Deluxe Double room: F Rs.1350"<<endl;

    }


    if(op == 'b'){
        cout<<"Enter your name: "<<endl;
        cin>>GuestName;
        cout<<"What room do you want to book?: "<<endl;
        cin>>RoomType;
        cout<<"Enter Checkin Date: "<<endl;
        cin>>Checkin;
        cout<<"Enter Checkout Date: "<<endl;
        cin>>Checkout;
    }

    if(op == 's'){
        cout<<"*********BOOKING DETAILS***********"<<endl;
        cout<<"Guest Name: "<<GuestName<<endl;
        cout<<"Room selected: "<<RoomType<<endl;
        cout<<"Checkin Date: "<<Checkin<<endl;
        cout<<"Check Out Date: "<<Checkout<<endl;
        cout<<nights<<" nights and "<<days<<" days."<<endl;
        cout<<"Total Room Charge: "<<PriceTot<<endl;
    }

    if(RoomType == 'A'){
        RoomPrice = 600;
    }
    else if(RoomType == 'B'){
        RoomPrice = 750;
    }
    else if(RoomType == 'C'){
        RoomPrice = 700;
    }
    else if(RoomType == 'D'){
        RoomPrice = 1000;
    }
    else if(RoomType == 'E'){
        RoomPrice = 1100;
    }
    else{
        RoomPrice = 1350;
    }

    nights = NoOfNights(Checkin,Checkout);
    days = NoOfDays(Checkin,Checkout);

    PriceTot = CalPrice(RoomPrice,nights);
    

    
    }
    return 0;
}