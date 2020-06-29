#include <bits/stdc++.h>
 
using namespace std;
 
class Time
{
    int seconds;
    int hh,mm,ss;
    public:
        void input();
        void convert();
        void output();
};
 
void Time::input()
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";cin >> hh;
    cout << "Minutes? ";cin >> mm;
    cout << "Seconds? ";cin >> ss;
}
 
void Time::convert()
{
    seconds = hh*3600 + mm*60 + ss;
}
 
void Time::output()
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"
                             << setw(2) << setfill('0') << mm << ":"
                             << setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time A; 
     
    A.input();
    A.convert();
    A.output();
     
    return 0;
}
