#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <bits/stdc++.h>
#include "Menu.h"
#include "Datetime.h"
using namespace std;

class Transaction
{
    long long bill_id;
    vector< pair<long long, long long> >order;
    Datetime time;
    long long Total_amount;
    string payment_method;

    public:
    static long long counter;
    Transaction();
    void NewTransaction();
    void calculate_amount(Menu m);
    void print_bill(Menu m);
};

class Restaurant
{
    string details;
    string owner;
    Menu menu;
    vector<Transaction>transactions;

    public:
    string name;
    Restaurant();
    Restaurant(string ,string ,string );
    void get_bill(long long bill_no);
    void create_new_transaction();
    void set_details();
    void edit_details();
    void get_details();
    void edit_menu();
};


#endif
