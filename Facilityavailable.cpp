#include "Facilityavailable.h"
#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

void Facilityavailable::add_new_facility()
    {
        Facility new_facility;
        new_facility.set_details();
        facilities.push_back(new_facility);
    }
    void Facilityavailable::edit_facility()
    {
        int id;
        cout<<"Enter the facility_id to edit: ";
        cin>>id;
        facilities[id].edit_details();
    }
    void Facilityavailable::delete_facility()
    {
        int id;
        cout<<"Enter the facility id to delete: ";
        cin>>id;
        facilities.erase(facilities.begin()+id);
    }

    void Facilityavailable::set_details()
    {
        cout<<"Enter facility component name: ";
        cin>>name;
        cout<<"\nEnter facility component details: ";
        cin>>details;
        cout<<"\nEnter owner name: ";
        cin>>owner;
    }
    void Facilityavailable::edit_details()
    {
        cout<<"Select the detail to edit";
        cout<<"\n1. Name\n2. Details\n3. Owner\nEnter your choice:  ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter facility component name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<"Enter facility component details: ";
                cin>>details;
                break;
            }
            case 3:
            {
                cout<<"Enter owner name: ";
                cin>>owner;
                break;
            }
        }
    }

    void Facilityavailable::get_details()
    {
        cout<<"Name: "<<name;
        cout<<"\nDetails: "<<details;
        cout<<"\nOwner: "<<owner;
    }
