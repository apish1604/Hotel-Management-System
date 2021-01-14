#ifndef MENU_H
#define MENU_H
#include <bits/stdc++.h>
using namespace std;

class Dish
{
    // Data members
    long long int dish_id;
    string dish_name;
    double price;
    string details;
    // Operational variables
    // Functions
public:
     static long long int counter;
      static long long int increment();
    Dish();
    void set_details();
    void edit_details();
    void display();
    double gett_price();
    ~Dish();

};

class Menu
{
    // Data members
    vector< Dish >dishes;

    // Functions
public:
    Menu();
    void Add_new_dish();
    void Delete_dish();
    void Edit_dish();
    void Display_menu();
    double get_price(long long id);
    ~Menu();
};
#endif
