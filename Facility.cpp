#include "Facility.h"
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

Facility::Facility()
    {
        facility_id = ++counter;
    }
    void Facility::set_details()
    {
        cout<<"Enter the facility name: ";
        cin>>name;
        cout<<"\nEnter the facility price (per hour): ";
        cin>>price;
        cout<<"\nEnter the facility details: ";
        cin>>details;
    }
    void Facility::get_details()
    {
        cout<<"Facility name: "<<name;
        cout<<"\nPrice: "<<price;
        cout<<"\nDetails: "<<details;
    }
    int Facility::get_price()
    {
        return price;
    }
    void Facility::edit_details()
    {
        int choice;
        cout<<"Enter the component to edit: \n";
        cout<<"1. Name\n2. Price\n3. Details\nEnter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                cout<<"\nEnter new name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<"\nEnter new price: ";
                cin>>price;
                break;
            }
            case 3:
            {
                cout<<"\nEnter the details: ";
                cin>>details;
                break;
            }
        }
    }