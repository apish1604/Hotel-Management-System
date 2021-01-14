#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<bits/stdc++.h>
using namespace std;

class Employee
{

    static long long int counter;
    string name;
    long long int phone_number;
    string verification_number;
    bool employed;
    string employed_at;
    string other_details;

    public:
    long long employee_id;
    Employee();
    Employee (string n,long long int p,string v,string o);
    void set_details();
    void employ(string employed_position);
    void unemploy();
    void get_details();
    void edit_details();
};
#endif
