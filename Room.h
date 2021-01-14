#ifndef ROOM_H
#define ROOM_H
#include<bits/stdc++.h>
using namespace std;

class Room
{

    public:
    static long long int counter;
    long long int price;
    long long int room_no;
    bool availability;
    long long int room_id;
    Room();
    virtual void set_details() = 0;
    virtual void get_details() = 0;
    virtual void edit_details() = 0;
};
#endif
