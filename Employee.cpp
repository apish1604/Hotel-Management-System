#include<bits/stdc++.h>
#include "Employee.h"
using namespace std;

    Employee::Employee()
    {
        employee_id == ++counter;
        employed = false;
        employed_at = "";
        cout<<"hello";
    }
    Employee::Employee(string n,long long int p,string v,string o)
    {
        name=n;
        phone_number=p;
        verification_number=v;
        other_details=o;
    }
    void Employee::set_details()
    {
        ofstream fout;
        fout.open("Employee.txt",ios::out|ios::app);
        cout<<"Name; ";
        cin>>name;
        fout<<name<<" ";
        cout<<"\nphone number: ";
        cin>>phone_number;
        fout<<phone_number<<" ";
        cout<<"\nverification number: ";
        cin>>verification_number;
        fout<<verification_number<<" ";
        cout<<"\nOther details: ";
        cin>>other_details;
        fout<<other_details<<endl;
    }
    void Employee::employ(string employed_position)
    {
        employed_at = employed_position;
        employed = true;
    }
    void Employee::unemploy()
    {
        employed_at = "";
        employed = false;
    }
    void Employee::get_details()
    {
        cout<<"ID: "<<employee_id;
        cout<<"\nName: "<<name;
        cout<<"\nPhone number: "<<phone_number;
        cout<<"\nVerification number: "<<verification_number;
        cout<<"\nEmployement status: ";
        if(employed==true)
        {
            cout<<"Employed";
            cout<<"\nEmployed at: "<<employed_at;
        }
        else
        {
            cout<<"unemployed";
        }
        cout<<"\nOther details: "<<other_details;
    }
    void Employee::edit_details()
    {
        cout<<"EDIT EMPLOYEE DETAILS";
        cout<<"\nSelect an option to edit";
        cout<<"\n1. Name\n2. Phone number\n3. Verification number\n4. Other details\nEnter your choice: ";
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
                cout<<"Enter new phone number: ";
                cin>>phone_number;
                break;
            }
            case 3:
            {
                cout<<"Enter new verification number: ";
                cin>>verification_number;
                break;
            }
            case 4:
            {
                cout<<"Enter Other details: ";
                cin>>other_details;
                break;
            }
        }
    }
