#ifndef ROOM1_H
#define ROOM1_H
#include "Room.h"
#include<bits/stdc++.h>
using namespace std;
class Suite : public Room
{
    public:
    void set_details();
    void get_details();
    void edit_details();
    long long int return_room_id();
};

class SingleBedroom : public Room
{
    public:
    void set_details();
    void get_details();
    void edit_details();
    long long int return_room_id();
};

class DoubleBedroom : public Room
{
    public:
    void set_details();
    void get_details();
    void edit_details();
    long long int return_room_id();
};
#endif
