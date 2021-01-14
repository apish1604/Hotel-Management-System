#include <bits/stdc++.h>
#include<conio.h>
#include "Menu.h"
using namespace std;
     Dish::Dish()
    {
        dish_id = counter;
        details = "No extra details";
    }
    void Dish::set_details()
    {
        cout<<"ADD new dish to the menu\n";
        cout<<"Dish Name: ";
        cin>>dish_name;

        cout<<"\nPrice: ";
        cin>>price;

        cout<<"\nDetails: ";
        cin>>details;
    }
    void Dish::edit_details()
    {
        cout<<"SELECT the details to EDIT\n";
        cout<<"1. Dish name\n2. Price\n3. Details\nEnter your choice: ";
        int temp;
        cin>>temp;
        switch(temp)
        {
            case 1:
            {
                cout<<"Enter new dish name: ";
                cin>>dish_name;
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
                cout<<"Enter details of the dish: ";
                cin>>details;
                break;
            }
        }
    }
    void Dish::display()
    {
        cout<<"Dish_id: "<<dish_id;
        cout<<"\nName: "<<dish_name;
        cout<<"\nPrice: "<<price;
        cout<<"\nDetails: "<<details;
        cout<<endl;
    }
    double Dish::gett_price()
    {
        return price;
    }
    Dish:: ~Dish(){}


     Menu::Menu()
    {}

    void Menu::Add_new_dish()
    {
        Dish temp;
        temp.set_details();
        dishes.push_back(temp);
    }

    void Menu::Delete_dish()
    {
        cout<<"SELECT a dish to DELETE\n";
        cout<<"Enter the dish_id of the dish: ";
        long long temp;
        cin>>temp;
        dishes.erase(dishes.begin()+temp);
    }

    void Menu::Edit_dish()
    {
        cout<<"SELECT a dish to EDIT\n";
        cout<<"Enter the dish_id of the disk: ";
        long long temp;
        cin>>temp;
        dishes[temp].edit_details();
    }

    void Menu::Display_menu()
    {
        for(long long i=0;i<dishes.size();i++)
        dishes[i].display();
    }

    double Menu::get_price(long long id)
    {
        return dishes[id].gett_price();
    }

    Menu:: ~Menu(){}

