#ifndef HOTEL_H
#define HOTEL_H
#include "Restaurant.h"
#include "Inventory.h"
#include "Facilityavailable.h"
#include "Employee.h"
#include "Accomodation.h"
#include <bits/stdc++.h>
using namespace std;
class Hotel
{
	string USERNAME;
	string PASSWORD;
	string REC_USERNAME;
	string REC_PASSWORD;
    vector<Employee>employees;
    vector<Inventory>items;
    vector<Restaurant>restaurant_component;
    vector<Facilityavailable>facility_component;
    Accomodation accomodation_component;


public:
    Hotel();
    void add_new_restaurant_component();
    void edit_restaurant_component();
    void delete_restaurant_component();
    void get_restaurant_component_details();
    void add_inventory();
    void edit_inventory();
    void delete_inventory();
    void get_inventory_details();
    void add_new_facility_component();
    void edit_facility_component();
    void delete_facility_component();
    void get_facility_component_details();
    void add_employee();
    void edit_employee();
    void delete_employee();
    void get_employee_details();
    void get_all_details();
	void welcomescreen();
	void mainscreen();
	void admin_loginscreen();
	void reception_loginscreen();
	void employee_page();
	void reception_page();
	void adminpage();
	void restro_page();
	void acc_page();
	void invent_page();
	void facilityAvail_page();
	void add_new_accomodation_component();
   // void edit_accomodation_component();
   // void delete_accomodation_component();
    void get_accomodation_component_details();





};
#endif
