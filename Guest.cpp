#include<bits/stdc++.h>
#include "Guest.h"
using namespace std;

 Guest::Guest()
    {
        guest_id = ++counter;
        number_of_companions = 0;
        room_alloted = 1;
        total_amount = 0;
        checkout_status=0;
    }
    Guest::Guest(string n,long long int c,string a,string b)
    {
        name=n;
        number_of_companions=c;
        verification_type=a;
        verification_details=b;
    }
    void Guest::set_details()
    {    ofstream fout;
        fout.open("Guest.txt",ios::out|ios::app);
        cout<<"Enter the guest name: ";
        cin>>name;
        fout<<name<<" ";
        cout<<"\nEnter number of companions with the guest: ";
        cin>>number_of_companions;
        fout<<number_of_companions<<" ";
        cout<<"\nEnter verification type: ";
        cin>>verification_type;
        fout<<verification_type<<" ";
        cout<<"\nEnter verification details: ";
        cin>>verification_details;
        fout<<verification_details<<endl;
    }
    void Guest::allot_room(int room_no)
    {
        room_alloted = room_no;
    }
    void Guest::deallot_room()
    {
        room_alloted = -1;
    }
    void Guest::get_details()
    {
        cout<<"Name: "<<name<<"\nNumber of companions: "<<number_of_companions;
        cout<<"\nVerfication Type: "<<verification_type<<"\nVerfication details: "<<verification_details;
        cout<<"\nRoom alloted: ";
        if(room_alloted == -1)
        cout<<"none";
        else
        cout<<"23";
        cout<<endl;
        cout<<"Facility used        Price"<<endl;
        for(auto i: facilities_used)
        {
            cout<<i.first<<" "<<i.second<<endl;
        }
        cout<<"\nTotal amount: "<<total_amount;
    }
    long long Guest::get_amount()
    {
        checkout_status=1;
        total_amount = 0;
        for(auto i: facilities_used)
        {
            total_amount+= i.second;
        }
        return total_amount;
    }
    void Guest::edit_details()
    {
        cout<<"Select the detail to edit";
        cout<<"\n1. Name\n2. Number of companions\n3. Verification type\n4. verification details\nEnter your choice: ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter new name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<"Enter number of companions:";
                cin>>number_of_companions;
                break;
            }
            case 3:
            {
                cout<<"Enter verification type: ";
                cin>>verification_type;
                break;
            }
            case 4:
            {
                cout<<"Enter verification details: ";
                cin>>verification_details;
                break;
            }
        }
    }
