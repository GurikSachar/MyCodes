#include <bits/stdc++.h>
using namespace std;

void fibocalc(int,int,int);
void getdata();

void getdata()
{
    int n;
    int a = 0;
    int b = 1;
    cout << "Enter the number of terms you want in the Fibonacci series: " << endl;
    cin >> n;
    while(n<=0)
    {
        cout << "Invalid number of terms, enter again" << endl;
        cin >> n;
    }
    fibocalc(n,a,b);
}
void fibocalc(int num, int x, int y)
{
    if(num==1)
        cout << x << endl;
    else
    {
        cout << x << " " << y << " ";
        num -= 2;
        for(int i = 1; i<=num; i++)
            {
                int temp = y;
                y = y+x;
                x = temp;
                cout << y << " ";
            }
    }
}
int main()
{
    getdata();
}