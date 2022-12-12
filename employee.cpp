#include<bits/stdc++.h>
using namespace std;

class Employee
{
    private:
        double salary;
        int hours;

    public:
        void getInfo()
        {
            cout << "Enter the salary of the employee: " << endl;
            cin >> salary;
            cout << "Enter the hours of work per day of the employee: " << endl;
            cin >> hours;
        }

        void AddSal()
        {
            if(salary<500.0)
                salary += 10;
        }

        void AddWork()
        {
            if(hours>6)
                salary += 5;
        }

        void Display()
        {
            cout << "Final salary of the employee: " << salary << endl;
        }
};

int main()
{
    Employee Sam;
    Employee Ram;
    Sam.getInfo();
    Sam.AddSal();
    Sam.AddWork();
    Sam.Display();
    Ram.getInfo();
    Ram.AddSal();
    Ram.AddWork();
    Ram.Display();
    return 0;
}