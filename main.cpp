#include <bits/stdc++.h>
#include <unistd.h>
#include "Hotel.h"
#include "Facility.h"
#include<conio.h>
using namespace std;
long long int Dish::counter=0;
long long int Inventory::counter=0;
long long int Transaction::counter=0;
long long int Facility::counter=0;
long long int Employee::counter=0;
long long int Room::counter=0;
long long int Guest::counter=0;
int main()
{
	Hotel h;
	h.welcomescreen();
	system("cls");
	h.mainscreen();

}
