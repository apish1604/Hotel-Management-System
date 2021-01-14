#include <bits/stdc++.h>
#include<conio.h>
#include "Accomodation.h"

using namespace std;
Accomodation::Accomodation()
{
    ifstream fin;
     fin.open("Guest.txt",ios::in);
        fin.seekg(0,ios::beg);
        while(!fin.eof())
        {
            cout<<"input";
            string a, b, c;
            long long int d;
            fin>>a>>d>>b>>c;
            Guest temp1(a,d,b,c);
            if(a!="")
            guests.push_back(temp1);
            else
                break;
        }
        fin.close();
}
 void Accomodation::add_new_guest()
    {
        Guest temp;
        temp.set_details();
         cout<<"Enter room no: ";
          int room;
        temp.allot_room(room);
        guests.push_back(temp);

    }
    void Accomodation::edit_guest()
    {
        cout<<"Enter guest id to edit: ";
        int id;
        cin>>id;
        guests[id].edit_details();
    }
    void Accomodation::delete_guest()
    {
        cout<<"Enter guest id to delete: ";
        int id;
        cin>>id;
        guests.erase(guests.begin()+id);
    }

    void Accomodation::set_details()
    {
        cout<<"Enter accomodation component name: ";
        cin>>name;
        cout<<"\nEnter accomodation component details: ";
        cin>>details;
        cout<<"\nEnter owner name: ";
        cin>>owner;
    }
    void Accomodation::edit_details()
    {
        cout<<"Select the detail to edit";
        cout<<"\n1. Name\n2. Details\n3. Owner\nEnter your choice:  ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter accomodation component name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<"Enter accomodation component details: ";
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

    void Accomodation::get_details()
    {
        cout<<"Name: "<<name;
        cout<<"\nDetails: "<<details;
        cout<<"\nOwner: "<<owner;
    }

    void Accomodation::add_new_room()
    {
        cout<<"Select the type of room to add";
        cout<<"\n1. Suite\n2. Single Bedroom\n3. Double Bedroom\nEnter your choice: ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                Suite temp;
                temp.set_details();
                ofstream fout;
                fout.open("Suite.txt",ios::out|ios::app);
                fout.write((char*)&temp,sizeof(temp));
                suites.push_back(temp);
                fout.close();
                break;
            }
            case 2:
            {
                SingleBedroom temp;
                temp.set_details();
                ofstream fout;
                fout.open("SingleBedroom.txt",ios::out|ios::app);
                fout.write((char*)&temp,sizeof(temp));
                singlebedrooms.push_back(temp);
                fout.close();
                break;
            }
            case 3:
            {
                DoubleBedroom temp;
                temp.set_details();
                ofstream fout;
                fout.open("DoubleBedroom.txt",ios::out|ios::app);
                fout.write((char*)&temp,sizeof(temp));
                doublebedrooms.push_back(temp);
                fout.close();
                break;
            }
        }
    }

    void Accomodation::delete_room()
    {
        cout<<"select the type of room to delete ";
        cout<<"\n1. Suite\n2. Single Bedroom\n3. Double Bedroom\nEnter your choice: ";
        int choice;
        cin>>choice;
        cout<<"Enter the room id to delete: ";
        long long int id;
        cin>>id;
        switch(choice)
        {
            case 1:
            {
                for(int i=0;i<suites.size();i++)
                {
                    if(suites[i].return_room_id() == id)
                    {
                        suites.erase(suites.begin()+i);
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                for(int i=0;i<singlebedrooms.size();i++)
                {
                    if(singlebedrooms[i].return_room_id() == id)
                    {
                        singlebedrooms.erase(singlebedrooms.begin()+i);
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                for(int i=0;i<doublebedrooms.size();i++)
                {
                    if(doublebedrooms[i].return_room_id() == id)
                    {
                        doublebedrooms.erase(doublebedrooms.begin()+i);
                        break;
                    }
                }
                break;
            }
        }
    }
    void Accomodation::search_guest()
    {
        cout<<"Enter room.no: ";
        long long int r;
        cin>>r;
        long long int n=guests.size(),i;
        for(i=0;i<n;i++)
            if(guests[i].room_alloted==r)
        {
            guests[i].get_details();
            break;
        }
        if(i==n)
            cout<<"Entered room no is unallocated.";


    }
    void Accomodation::edit_room_details()
    {
        cout<<"Enter room id to edit: ";
        int id;
        cin>>id;
        cout<<"\nSelect the type of room to edit: ";
        cout<<"\n1. Suite\n2. Single bedroom\n3. Double bedroom\nSelect your choice: ";
        int choice;
        switch(choice)
        {
            case 1:
            {
                for(int i=0;i<suites.size();i++)
                {
                    if(suites[i].return_room_id() == id)
                    {
                        suites[i].edit_details();
                        break;
                    }
                }
                break;
            }
            case 2:
            {
                for(int i=0;i<singlebedrooms.size();i++)
                {
                    if(singlebedrooms[i].return_room_id() == id)
                    {
                        singlebedrooms[i].edit_details();
                        break;
                    }
                }
                break;
            }
            case 3:
            {
                for(int i=0;i<doublebedrooms.size();i++)
                {
                    if(doublebedrooms[i].return_room_id() == id)
                    {
                        doublebedrooms[i].edit_details();
                        break;
                    }
                }
                break;
            }
        }
    }
    void Accomodation::generate_bill()
	{
		int temp;
		cout<<"GENERATE BILL\n";
		cout<<"Enter guest id: ";
		cin>>temp;
		for(auto guest: guests)
		{
			if(guest.guest_id == temp)
			{
			    guest.get_amount();
				guest.get_details();
				break;
			}
		}
	}

	void Accomodation::get_guest_details()
	{
		for(auto guest: guests)
		{
			guest.get_details();
		}
	}

	void Accomodation::add_facility_usage()
	{
		cout<<"Enter facility name: ";
		string temp1;
		cin>>temp1;
		cout<<"Enter facility price: ";
		int temp2;
		cin>>temp2;
		cout<<"Enter guest id: ";
		int temp3;
		cin>>temp3;

		guests[temp3].facilities_used.push_back(make_pair(temp1, temp2));
	}


