#include<bits/stdc++.h>
#include "Room1.h"
#include "Room.h"
using namespace std;

    Room::Room()
    {
        room_id = ++counter;
    }


    void Suite::set_details()
    {
    cout<<"Enter Room No of the suite: ";
    cin>>room_no;
    cout<<"\nEnter Price of the suite: ";
    cin>>price;
    availability = true;
    }
    void Suite::get_details()
    {
    cout<<"SUITE BEDROOM"<<endl;
    cout<<"Room No: "<<room_no;
    cout<<"\nPrice: "<<price;
    cout<<"\nAvailability: "<<availability;
    }
    void Suite::edit_details()
    {
    cout<<"EDIT SUITE DETAILS\n";
    cout<<"SELECT the detail to edit: \n";
    cout<<"1.Room No\n2.Price\n3.Availability\nEnter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter new room no: ";
            cin>>room_no;
            break;
        }
    case 2:
        {
            cout<<"Enter new price: ";
            cin>>price;
            break;
        }
    case 3:
        {
            cout<<"Enter availability: ";
            cin>>availability;
            break;
        }
    }
    }
    long long int Suite::return_room_id()
    {
        return room_id;
    }


    void SingleBedroom::set_details(){
    cout<<"Enter Room No of the single bedroom: ";
    cin>>room_no;
    cout<<"\nEnter Price of the single bedroom: ";
    cin>>price;
    availability = true;
    }
    void SingleBedroom::get_details(){
    cout<<"SINGLE BEDROOM"<<endl;
    cout<<"Room No: "<<room_no;
    cout<<"\nPrice: "<<price;
    cout<<"\nAvailability: "<<availability;
    }
    void SingleBedroom::edit_details(){
    cout<<"EDIT SINGLE BEDROOM DETAILS\n";
    cout<<"SELECT the detail to edit: \n";
    cout<<"1.Room No\n2.Price\n3.Availability\nEnter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter new room no: ";
            cin>>room_no;
            break;
        }
    case 2:
        {
            cout<<"Enter new price: ";
            cin>>price;
            break;
        }
    case 3:
        {
            cout<<"Enter availability: ";
            cin>>availability;
            break;
        }
    }
    }
    long long int SingleBedroom::return_room_id()
    {
        return room_id;
    }


    void DoubleBedroom::set_details()
    {
     cout<<"Enter Room No of the double bedroom: ";
    cin>>room_no;
    cout<<"\nEnter Price of the double bedroom: ";
    cin>>price;
    availability = true;
    }
    void DoubleBedroom::get_details(){
     cout<<"DOUBLE BEDROOM"<<endl;
    cout<<"Room No: "<<room_no;
    cout<<"\nPrice: "<<price;
    cout<<"\nAvailability: "<<availability;
    }
    void DoubleBedroom::edit_details(){
    cout<<"EDIT DOUBLE BEDROOM DETAILS\n";
    cout<<"SELECT the detail to edit: \n";
    cout<<"1.Room No\n2.Price\n3.Availability\nEnter your choice: ";
    int choice;
    cin>>choice;
    switch(choice)
    {
    case 1:
        {
            cout<<"Enter new room no: ";
            cin>>room_no;
            break;
        }
    case 2:
        {
            cout<<"Enter new price: ";
            cin>>price;
            break;
        }
    case 3:
        {
            cout<<"Enter availability: ";
            cin>>availability;
            break;
        }
    }
    }
    long long int DoubleBedroom::return_room_id()
    {
        return room_id;
    }
