#ifndef INVENTORY_H
#define INVENTORY_H
#include<bits/stdc++.h>
using namespace std;
class Inventory
{
  	long long int item_id;
    static long long int counter;
    string item_name;
    string details;
    long long int quantity;
    long long int quantity_used;
public:
	Inventory();
	void set_details();
	void get_details();
	void edit_details();
	long long int quantity_available();
};
#endif