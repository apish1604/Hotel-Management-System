#include<bits/stdc++.h>
#include<ctime>
#include "Datetime.h"
using namespace std;


// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
string currentDateTime()
{
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);
    return buf;
}

   Datetime:: Datetime()
    {
        string time;
        time = currentDateTime();
        string yy = "", Mm = "", dd = "", hh = "", mm = "", ss = "";
        for(int i=0;i<4;i++)
        yy = yy+time[i];
        for(int i=5;i<7;i++)
        Mm = Mm+time[i];
        for(int i=8;i<10;i++)
        dd = dd+time[i];
        for(int i=11;i<13;i++)
        hh = hh+time[i];
        for(int i=14;i<16;i++)
        mm = mm+time[i];
        for(int i=17;i<19;i++)
        ss = ss+time[i];

        stringstream convertyy(yy);
        YY=0;
        convertyy >> YY;

        stringstream convertMm(Mm);
        MMM=0;
        convertMm >> MMM;

        stringstream convertdd(dd);
        DD=0;
        convertdd >> DD;

        stringstream converthh(hh);
        HH=0;
        converthh >> HH;

        stringstream convertmm(mm);
        MM=0;
        convertmm >> MM;

        stringstream convertss(ss);
        SS=0;
        convertdd >> SS;
    }

    Datetime Datetime:: operator-(Datetime d)
    {
        Datetime temp;
        temp.YY = this->YY - d.YY;
        temp.MMM = this->MMM - d.MMM;
        temp.DD = this->DD - d.DD;
        temp.HH = this->HH - d.HH;
        temp.MM = this->MM - d.MM;
        temp.SS = this->SS - d.SS;
        return temp;
    }
    Datetime Datetime:: operator+(Datetime d)
    {
        Datetime temp;
        temp.YY = this->YY + d.YY;
        temp.MMM = this->MMM + d.MMM;
        temp.DD = this->DD + d.DD;
        temp.HH = this->HH + d.HH;
        temp.MM = this->MM + d.MM;
        temp.SS = this->SS + d.SS;
        return temp;
    }
    void Datetime:: print_DateTime()
    {
        cout<<DD<<"-"<<MMM<<"-"<<YY<<" "<<HH<<":"<<MM<<":"<<SS<<endl;
    }
    Datetime:: ~Datetime()
    {}