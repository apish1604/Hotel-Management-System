#include <bits/stdc++.h>
#include<conio.h>
#include "Accomodation.h"
#include "Hotel.h"
using namespace std;

    Hotel::Hotel()
    {
        USERNAME="kapin";
        PASSWORD="kapin";
        REC_PASSWORD="kapin";
        REC_USERNAME="kapin";
         ifstream fin;
        fin.open("Restaurant.txt",ios::in);
        fin.seekg(0,ios::beg);
        while(!fin.eof())
        {

            string a, b, c;
            fin>>a>>b>>c;
            Restaurant temp(a,b,c);
            if(a!="")
            restaurant_component.push_back(temp);
        }
        fin.close();
         fin.open("Employee.txt",ios::in);
        fin.seekg(0,ios::beg);
        while(!fin.eof())
        {
            cout<<"input";
            string a, b, c;
            long long int d;
            fin>>a>>d>>b>>c;
            Employee temp1(a,d,b,c);
            if(a!="")
            employees.push_back(temp1);
            else
                break;
        }
        fin.close();
    }

    void Hotel::add_new_restaurant_component(){
        Restaurant temp;
        temp.set_details();
        restaurant_component.push_back(temp);
        Restaurant t;
    }

    void Hotel::edit_restaurant_component(){
        int id;
        cout<<"Enter the id to edit: ";
        cin>>id;
        restaurant_component[id].edit_details();
    }

    void Hotel::delete_restaurant_component(){
        int id;
        cout<<"Enter the id to delete: ";
        cin>>id;
        restaurant_component.erase(restaurant_component.begin()+id);
    }

    void Hotel::get_restaurant_component_details(){
        cout<<"Enter id: ";
        int id;
        cin>>id;
        restaurant_component[id].get_details();
    }
    void Hotel::add_inventory(){
        Inventory temp;
        temp.set_details();
        ofstream fout;
        fout.open("Inventory.txt",ios::out|ios::app);
        fout.write((char*)&temp,sizeof(temp));
        items.push_back(temp);
        fout.close();
    }
    void Hotel::edit_inventory(){
        int id;
        cout<<"Enter the item id to edit: ";
        cin>>id;
        items[id].edit_details();
    }
    void Hotel::delete_inventory(){
        int id;
        cout<<"Enter the item id to delete: ";
        cin>>id;
        items.erase(items.begin()+id);
    }
    void Hotel::get_inventory_details(){
        cout<<"Enter item id: ";
        int id;
        cin>>id;
        items[id].get_details();
    }
     void Hotel::add_new_facility_component(){
        Facilityavailable temp;
        temp.set_details();
        ofstream fout;
        fout.open("Facilityavailable.txt",ios::out|ios::app);
        fout.write((char*)&temp,sizeof(temp));
        facility_component.push_back(temp);
        fout.close();
    }

    void Hotel::edit_facility_component(){
        int id;
        cout<<"Enter the id to edit: ";
        cin>>id;
        facility_component[id].edit_details();
    }

    void Hotel::delete_facility_component(){
        int id;
        cout<<"Enter the id to delete: ";
        cin>>id;
        facility_component.erase(facility_component.begin()+id);
    }

    void Hotel::get_facility_component_details(){
        cout<<"Enter id: ";
        int id;
        cin>>id;
        facility_component[id].get_details();
    }
     void Hotel::add_employee(){
        Employee temp;
        temp.set_details();
        employees.push_back(temp);
    }
    void Hotel::edit_employee(){
    cout<<"Enter id: ";
	int id;
	cin>>id;
	for(auto i: employees)
	{
		if(i.employee_id == id)
		{
			i.edit_details();
			break;
		}
	}

    }
    void Hotel::delete_employee(){
    cout<<"Enter id: ";
	int id;
	cin>>id;
	for(int i=0;i<employees.size();i++)
	{
		if(employees[id].employee_id == id)
		{
			employees.erase(employees.begin() + i);
			break;
		}
	}
    }
    void Hotel::get_employee_details(){
    cout<<"Enter id: ";
	int id;
	cin>>id;
	for(auto i: employees)
	{
		if(i.employee_id == id)
		{
			i.get_details();
			break;
		}
	}
    }
     void Hotel::get_all_details(){
	for(auto i: employees)
	{
		i.get_details();
	}
}


    void Hotel::add_new_accomodation_component(){
        accomodation_component.set_details();
    }
    void Hotel::get_accomodation_component_details()
    {
        accomodation_component.get_details();
    }

	void Hotel::welcomescreen()
	{
	system("cls");
	cout<<endl<<endl<<endl<<endl;
	cout<<"                           HOTEL MANAGEMENT SYSTEM  "<<endl;
	cout<<"                               OOPS PROJECT"<<endl;
	cout<<"             ____________________________________________________  "<< endl;
	cout<< endl<< endl << endl<< endl;
	cout<<"                   SUBMITTED BY:                 SUBMITTED TO:     "<<endl;
    cout<<"                     Anshul (2018BCS-09)           Dr.Santosh Rathore   "<<endl;
	cout<<"                     Saniya Arora(2018BCS-046)                    "<<endl;
	cout<<"                     Kapin(2018BCS-025)                    "<<endl;
	cout<<  endl << endl;
	cout<<"              Press Enter to continue...." << endl << endl << endl << endl;
	_getch();
	}
	void Hotel::mainscreen()
	{
		//time
		system("cls");

		char choice;
		cout<<  endl << endl << endl<< endl;
	    cout<<"                            MAIN SCREEN\n";
		cout<<"             ____________________________________________________  "<< endl;
		cout<<"                          1.Administrator Login\n";
		cout<<"                          2.Reception Login\n";
		cout<<"                          3.Restaurant Login\n";
		cout<<"\n\n\n";
		cout<<"Enter Choice::   ";
		cin>>choice;
		switch(choice)
		{
			case'1':
				system("cls");
				admin_loginscreen();
				break;
			case '2':
			    system("cls");
                reception_loginscreen();
				break;
			case'3':
			    system("cls");
			    cout<<"                            Restaurants\n";
		         cout<<"             ____________________________________________________  "<< endl;
			    int n=restaurant_component.size();
			    if(n==0)
                    cout<<"Restaurent doesnot exist.";
                else
                {
			       for(int i=0;i<n;i++)
                       cout<<"                          "<<i+1<<". "<<restaurant_component[i].name<<endl;
                   int choice;
                   cout<<"Enter your choice: ";
                   cin>>choice;
                   restaurant_component[choice-1].edit_menu();
                   _getch();
                   system("cls");
                   mainscreen();
                }
				break;
		}
	}
	void Hotel::admin_loginscreen()
	{
		//time
		string username,password;
		cout<<"                          ADMINISTRATOR LOGIN\n";
		cout<<"             ____________________________________________________  "<< endl;
		cout<<endl<<endl<<endl;
		cout<<"                UserName: ";
		cin>>username;
		if(username==USERNAME)
		{
			cout<<"                Password: ";
			char c=_getch();
			password.push_back(c);
			int count=PASSWORD.size();
            count--;
			while(count)
			{
				cout<<"*";

				c=_getch();
				password.push_back(c);
				count--;
			}
			cout<<endl;
			if(password==PASSWORD)
			{
			    _getch();
				adminpage();

			}
			else
			{
				cout<<"You entered wrong password.";
				cout<<password;
				_getch();
				mainscreen();
		    }
		}
		else
		{
			cout<<"Incorrect Username";
			mainscreen();
		}

	}
	void Hotel::reception_loginscreen()
	{
		//time
		string username,password;
		cout<<"                          RECEPTION LOGIN PAGE\n";
		cout<<"             ____________________________________________________  "<< endl;
		cout<<endl<<endl<<endl;
		cout<<"                UserName: ";
		cin>>username;
		if(username==REC_USERNAME)
		{
			cout<<"                Password: ";
			char c=_getch();
			password.push_back(c);
			int count=PASSWORD.size();
            count--;
			while(count)
			{
				cout<<"*";

				c=_getch();
				password.push_back(c);
				count--;
			}
			cout<<endl;
			if(password==REC_PASSWORD)
			{
			    _getch();
				reception_page();

			}
			else
			{
				cout<<"You entered wrong password.";
				cout<<password;
				_getch();
				mainscreen();
		    }
		}
		else
		{
			cout<<"Incorrect Username";
			mainscreen();
		}

	}

	void Hotel::reception_page()
	{
        system("cls");
		cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL NAME "<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl;
		cout<<"\n\t\t1. Add Guest\t\t2. Search Guest\n";
        cout<<"\n\t\t3. Update Guest\t\t4. Delete Guest\n";
        cout<<"\n\t\t5. Generate Bill\t\t6.Facilities used\n";
        cout<<"\n\t\t7. Go Back"<<endl;
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
 		{
 			case 1:
 			    system("cls");
                accomodation_component.add_new_guest();
                system("cls");
                reception_page();
 				break;
 			case 2:
 			    system("cls");
 				accomodation_component.search_guest();
 				_getch();
 				system("cls");
                reception_page();
 				break;
 			case 3:
 			    system("cls");
 				accomodation_component.edit_guest();
 				system("cls");
                reception_page();
 				break;
            case 4:
 			    system("cls");
 				 accomodation_component.delete_guest();
 				system("cls");
                reception_page();
 				break;
            case 5:
 			    system("cls");
 				accomodation_component.generate_bill();
 				 _getch();
 				system("cls");
                reception_page();
 				break;
            case 6:
 			    system("cls");
 				accomodation_component.add_facility_usage();
 				system("cls");
                reception_page();
 				break;
           case 7:
                system("cls");
                 mainscreen();
                 break;
 			default:
				cout<<"wrong choice entered";
 		}
	}

	void Hotel::adminpage()
	{
		system("cls");
		cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL MANAGEMENT SYSTEM "<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl;
		cout<<"\n\t\t\t  1.Accomodation Management"<<endl;
		cout<<"\n\t\t\t  2.Restaurant Management"<<endl;
		cout<<"\n\t\t\t  3.Employee management"<<endl;
		cout<<"\n\t\t\t  4.Facilities Available"<<endl;
		cout<<"\n\t\t\t  5.Inventory Management"<<endl;
		cout<<"\n\t\t\t  6.Go Back"<<endl;
 		cout<<"Enter your choice:: ";
 		int choice;
 		cin>>choice;
 		switch(choice)
 		{
 			case 1:
 			    system("cls");
 				acc_page();
 				system("cls");
 				adminpage();
 				break;
 			case 2:
 			    system("cls");
 				restro_page();
 				system("cls");
 				adminpage();
 				break;
 			case 3:
 			    system("cls");
 				employee_page();
 				system("cls");
 				adminpage();
 				break;
 			case 4:
 			    system("cls");
 				facilityAvail_page();
 				system("cls");
 				adminpage();
 				break;
 			case 5:
 			    system("cls");
 				invent_page();
 				system("cls");
 				adminpage();
 				break;
            case 6:
 			    system("cls");
 				mainscreen();
 				break;
 			default:
				cout<<"wrong choice entered";
 		}
	}
	void Hotel::employee_page()
	{
	    cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tEMPLOYEE MANAGEMENT"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
	    cout<<"1.Add Employee  \t\t\t 2.Get Employee details\n";
        cout<<"3.Edit employee details \t\t\t 4.Delete an employee\n";
       cout<<"5.Get all employee details \t\t\t 6.Go Back\n";
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice)
        {
            case 1:
 			    system("cls");
 				add_employee();
 				system("cls");
 				employee_page();
 				break;
 			case 2:
 			    system("cls");
 				get_employee_details();
 				_getch();
 				system("cls");
 				employee_page();
 				break;
 			case 3:
 			    system("cls");
 				edit_employee();
 				system("cls");
 				employee_page();
 				break;
 			case 4:
 			    system("cls");
 				delete_employee();
 				system("cls");
 				employee_page();
 				break;
            case 5:
 			    system("cls");
 				get_all_details();
 				_getch();
 				system("cls");
 				employee_page();
 				break;
             case 6:
 			    system("cls");
 				adminpage();
 				break;
 			default:
				cout<<"wrong choice entered";
 		}

	}
	void Hotel::acc_page()
	{
		cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL NAME"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
	    cout<<"1.Set Accomodation Details \t\t\t 2.Get Accomodation Details\n";
        cout<<"3.Add new Room \t\t\t 4.Edit Room Details\n";
        cout<<"5.Delete Room \t\t\t 6.Go Back\n";
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
         switch(choice)
 		{
 			case 1:
 			    system("cls");
 				accomodation_component.set_details();
 				system("cls");
 				acc_page();
 				break;
 			case 2:
 			    system("cls");
 				accomodation_component.get_details();
 				_getch();
 				system("cls");
 				acc_page();
 				break;
 			case 3:
 			    system("cls");
 				accomodation_component.add_new_room();
 				system("cls");
 				acc_page();
 				break;
 			case 4:
 			    system("cls");
 				accomodation_component.edit_room_details();
 				break;
            case 5:
 			    system("cls");
 				accomodation_component.delete_room();
 				system("cls");
 				acc_page();
 				break;
             case 6:
 			    system("cls");
 				adminpage();
 				break;
 			default:
				cout<<"wrong choice entered";
 		}
	}
	void Hotel::restro_page()
	{
	    cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tHOTEL NAME"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
        cout<<"\t\t\t1.Add Restaurant \t\t\t 2.Edit Restaurant Component\n";
        cout<<"\t\t\t3.Delete Restaurant Component \t\t\t 4.Get Restaurant Component\n"<<endl;
        cout<<"\t\t\t5. Go Back\n";
        cout<<"Enter your Choice: ";
        int choice;
        cin>>choice;
        switch(choice)
 		{
 			case 1:
 			    system("cls");
 				add_new_restaurant_component();
 				system("cls");
 				restro_page();
 				break;
 			case 2:
 			    system("cls");
 				edit_restaurant_component();
 				system("cls");
 				restro_page();
 				break;
 			case 3:
 			    system("cls");
 				delete_restaurant_component();
 				system("cls");
 				restro_page();
 				break;
 			case 4:
 			    system("cls");
 				get_restaurant_component_details();
 				system("cls");
 				restro_page();
 				break;
            case 5:
 			    system("cls");
 				 adminpage();
 				 break;
 			default:
				cout<<"wrong choice entered";
 		}
	}
	void Hotel::invent_page()
	{
    cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tInventory Management"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
        cout<<"\t\t\t1.Add Items \t\t\t 2.Edit Items\n";
        cout<<"\t\t\t3.Delete Items \t\t\t 4.Get Items\n"<<endl;
        cout<<"\t\t\t5. Go Back\n";
        cout<<"Enter your Choice: ";
        int choice;
        cin>>choice;
        switch(choice)
 		{
 			case 1:
 			    system("cls");
 				add_inventory();
 				system("cls");
 				invent_page();
 				break;
 			case 2:
 			    system("cls");
 				edit_inventory();
 				system("cls");
 				invent_page();
 				break;
 			case 3:
 			    system("cls");
 				delete_inventory();
 				system("cls");
 				invent_page();
 				break;
 			case 4:
 			    system("cls");
 				get_inventory_details();
 				system("cls");
 				invent_page();
 				break;
             case 5:
 			    system("cls");
 				 adminpage();
 				 break;
 			default:
				cout<<"wrong choice entered";
 		}

	}
void Hotel::facilityAvail_page()
{
        cout<<"\n\t\t\t____________________________________"<<endl;
		cout<<"\n\t\t\t\tFacilities Management"<<endl;
		cout<<"\n\t\t\t____________________________________\n"<<endl<<endl;
        cout<<"\t\t\t1.Add New Facility \t\t\t 2.Edit Facility\n";
        cout<<"\t\t\t3.Delete Facility \t\t\t 4.Go Back\n"<<endl;
        cout<<"Enter your Choice: ";
        int choice;
        cin>>choice;
        switch(choice)
 		{
 			case 1:
 			    system("cls");
 				add_new_facility_component();
 				system("cls");
 				facilityAvail_page();
 				break;
 			case 2:
 			    system("cls");
 				edit_facility_component();
 				system("cls");
 				facilityAvail_page();
 				break;
 			case 3:
 			    system("cls");
 				delete_facility_component();
 				system("cls");
 				facilityAvail_page();
 				break;
             case 4:
 			    system("cls");
 				 adminpage();
 				 break;
 			default:
				cout<<"wrong choice entered";
 		}

}
