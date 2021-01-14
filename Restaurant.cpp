#include <bits/stdc++.h>
#include<conio.h>
#include "Restaurant.h"
#include "Menu.h"
#include "Datetime.h"
using namespace std;

 Transaction::Transaction()
    {
        bill_id=counter;
        Total_amount = 0;
    }
    void Transaction::NewTransaction(){
        cout<<"Please place your order.";
        int c=0;
        while(true)
        {
            pair<long long, long long>temp;
            cout<<"Enter Dish ID: ";
            cin>>temp.first;
            cout<<"\nEnter quantity: ";
            cin>>temp.second;
            order.push_back(temp);
            cout<<"\nEnter payment method: ";
            cin>>payment_method;
            cout<<"Want to enter more dishes, press 1 for yes 0 for no: ";
            cin>>c;
            if(c==1)
            break;
        }
    }
    void Transaction::calculate_amount(Menu m)
    {

        for(long long i=0;i<order.size();i++)
        {
            Total_amount += m.get_price(order[i].first)*order[i].second;
        }
    }

    void Transaction::print_bill(Menu m)
    {
        //calculate_amount(m);
        cout<<"BILL\n";
        cout<<"bill_no: "<<bill_id;
        cout<<"\nTransaction time: ";
        time.print_DateTime();
        cout<<"\nOrder Placed";
        cout<<"Item         price\n";
        for(long long i=0;i<order.size();i++)
        cout<<order[i].first<<" "<<order[i].second<<endl;

        cout<<"\nTotal Amount: "<<Total_amount<<endl;
        cout<<"Payment method: "<<payment_method<<endl;
    }
    Restaurant::Restaurant(){


    }
    Restaurant::Restaurant(string name,string details,string owner)
    {
        this->name=name;
        this->details=details;
        this->owner=owner;
    }
    void Restaurant::get_bill(long long bill_no)
    {
        transactions[bill_no].calculate_amount(menu);
        transactions[bill_no].print_bill(menu);
    }
    void Restaurant::create_new_transaction()
    {
        Transaction temp;
        temp.NewTransaction();
        transactions.push_back(temp);
    }
    void Restaurant::set_details()
    {
        ofstream fout;
        fout.open("Restaurant.txt",ios::out|ios::app);
        cout<<"Enter restaurant name: ";
        cin>>name;
        fout<<name<<" ";
        cout<<"\nEnter restaurant details: ";
        cin>>details;
        fout<<details<<" ";
        cout<<"\nEnter owner name: ";
        cin>>owner;
        fout<<owner<<endl;
        fout.close();
    }

    void Restaurant::edit_details()
    {
        cout<<"Select the detail to edit";
        cout<<"\n1. Name\n2. Details\n3. Owner\nEnter your choice:  ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter restaurant name: ";
                cin>>name;
                break;
            }
            case 2:
            {
                cout<<"Enter restaurant details: ";
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

    void Restaurant::get_details()
    {
        cout<<"Name: "<<name;
        cout<<"\nDetails: "<<details;
        cout<<"\nOwner: "<<owner;
    }
    void Restaurant::edit_menu()
    {
        cout<<"Select the option";
        cout<<"\n1.Add dish\n2. Edit Dish\n3. Delete Dish\n4.Get Price\n 5. Display menu\n 6. Place Order\n7.Get Bill\n 8. GO BACK\nEnter your choice:  ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                system("cls");
               menu.Add_new_dish();
               system("cls");
               edit_menu();
                break;
            }
            case 2:
            {
                 system("cls");
               menu.Edit_dish();
              system("cls");
               edit_menu();
                break;
            }
            case 3:
            {
                 system("cls");
                menu.Delete_dish();
                system("cls");
               edit_menu();
                break;
            }
            case 4:
                 system("cls");
               long long id;
                cout<<"Enter id of dish";
                cin>>id;
                menu.get_price(id);
                system("cls");
               edit_menu();
                break;
            case 5:
                 system("cls");
                menu.Display_menu();
                _getch();
                system("cls");
               edit_menu();
                break;
            case 6:
                 system("cls");
               create_new_transaction();
               break;
            case 7:
               cout<<"Enter bill_id: ";
               int vill;
               cin>>vill;
                get_bill(vill);
                break;
            case 8:
                break;
        }


    }
