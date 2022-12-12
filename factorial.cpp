#include<bits/stdc++.h>
using namespace std;

int factorial(int);
void getdata();
void dispdata(int,int);

int main()
{
    getdata();
    return 0;
}

void getdata()
{
    int num; //stores the number whose factorial has to be found
    int fact = 1; //stores the factorial of the number
    cout << "Enter the number whose factorial you want to find: " << endl;
    cin >> num;
    fact = factorial(num);
    dispdata(num,fact);
}

void dispdata(int number, int factorial)
{
    cout << "The number is: " << number << endl;
    cout << "Its factorial is: " << factorial << endl;
}

int factorial(int num)
{
    if(num==1)
        return num;
    else
        return num*factorial(num-1);
}