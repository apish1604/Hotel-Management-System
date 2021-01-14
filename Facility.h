#ifndef FACILITY_H
#define FACILITY_H
#include <bits/stdc++.h>
using namespace std;
class Facility{
    long long int facility_id;
    static long long int counter;
    string name;
    string details;
    long long int price;
     public:
    Facility();
    void set_details();
    void get_details();
    int get_price();
    void edit_details();
};
#endif
