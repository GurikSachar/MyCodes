#include<bits/stdc++.h>
using namespace std;

int gdc(int,int *,int,int,int);
void getdata();

int main()
{
    getdata();
    return 0;
}

void getdata()
{
    int n;
    cout << "Enter the amount of numbers whose GCD you want to find: " << endl;
    cin >> n;
    int numbers[n];
    int  flag = 0;
    int gflag = 0;
    int gcdd;
    for(int i = 0; i<n; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> numbers[i];
    }
    gcdd = gdc(1,numbers,n,flag,gflag);
    cout << "Greatest common divisor is: " << gcdd;
}

int gdc(int a,int *np,int n,int flag,int gflag)
{
    for(int i = 0; i<n; i++)
    {
        int numcheck = np[i];
        if(numcheck%a==0)
        {
            np[i] /= a;
            flag++;
        }
        if(a>numcheck)
            gflag++;
    }
    if(flag==n&&gflag<n)
        return a*gdc(a+1,np,n,0,0);
    if(flag<n&&gflag<n)
        return gdc(a+1,np,n,0,0);
    if(gflag==n)
        return 1;
}   