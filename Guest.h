#include<bits/stdc++.h>
#include "Datetime.h"
#ifndef GUEST_H
#define GUEST_H
using namespace std;
class Guest
{

    static long long int counter;
    string name;
    long long int number_of_companions;
    string verification_type;
    string verification_details;
    long long int total_amount;
    Datetime checkin;
    Datetime checkout;
    int checkout_status;

    public:
    long long int guest_id;
     long long int room_alloted;
     vector< pair<string, int> >facilities_used;

    Guest();
   Guest(string n,long long int c,string a,string b);
    void set_details();
    void allot_room(int room_no);
    void deallot_room();
    void get_details();
    long long get_amount();
    void edit_details();
};
#endif
