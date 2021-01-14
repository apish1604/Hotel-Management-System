#include<bits/stdc++.h>
#include "Inventory.h"
using namespace std;
Inventory::Inventory()
{
	item_id = ++counter;
    quantity = 0;
    quantity_used = 0;
}
void Inventory::set_details()
{
    cout<<"Enter item name: ";
    cin>>item_name;
    cout<<"\nEnter details: ";
    cin>>details;
    cout<<"\nEnter total quantity: ";
    cin>>quantity;
}
void Inventory::get_details()
{
	cout<<"Item Id: "<<item_id;
    cout<<"\nItem name: "<<item_name;
    cout<<"\nDetails: "<<details;
    cout<<"\nTotal quantity: "<<quantity;
    cout<<"\nCurrently in use: "<<quantity_used;
}
void Inventory:: edit_details()
    {
        cout<<"Select the details to edit ";
        cout<<"\n1. Name\n2. Details\n3. total qunatity\n4. Quantity in use\nEnter your choice: ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
            {
                cout<<"Enter new name: ";
                cin>>item_name;
                break;
            }
            case 2:
            {
                cout<<"Enter details: ";
                cin>>details;
                break;
            }
            case 3:
            {
                cout<<"Enter total quantiy: ";
                cin>>quantity;
                break;
            }
            case 4:
            {
                cout<<"Enter new quantity in use: ";
                cin>>quantity_used;
                break;
            }
        }
    }
 long long int Inventory::quantity_available()
    {
        return quantity - quantity_used;
    }	