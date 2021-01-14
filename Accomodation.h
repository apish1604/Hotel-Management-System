#ifndef ACCOMODATION_H
#define ACCOMODATION_H
#include<bits/stdc++.h>
#include "Guest.h"
#include "Room1.h"
using namespace std;

class Accomodation
{
    string name;
    string details;
    string owner;

    vector<Guest>guests;
    vector<Suite>suites;
    vector<SingleBedroom>singlebedrooms;
    vector<DoubleBedroom>doublebedrooms;

    public:
    Accomodation();
    void add_new_guest();
    void edit_guest();
    void delete_guest();
    void search_guest();
    void set_details();
    void edit_details();
    void get_details();
    void add_new_room();
    void delete_room();
    void edit_room_details();
   // void reception(int );
   void add_facility_usage();
   void get_guest_details();
   void generate_bill();

};
#endif
