#ifndef FACILITYAVAILABLE_H
#define FACILITYAVAILABLE_H
#include "Facility.h"
#include <bits/stdc++.h>
using namespace std;

 class Facilityavailable
{
    string name;
    string details;
    string owner;
    vector<Facility>facilities;
    public:
    void add_new_facility();
    void edit_facility();
    void delete_facility();
    void set_details();
    void edit_details();
    void get_details();

 };
 #endif
