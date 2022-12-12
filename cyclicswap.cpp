#include<bits/stdc++.h>
using namespace std;

void swap(int,int *);

int main()
{
    int num;
    cout << "Enter the amount of numbers you want to cyclically swap: " << endl;
    cin >> num;
    int numbers[num];
    for(int i = 0; i<num; i++)
    {
        cout << "Enter a number: " << endl;
        cin >> numbers[i];
    }
    swap(num,numbers);
    return 0;
}

void swap(int n, int *numptr)
{
    int temp = numptr[0];
    for(int i = 0; i<n; i++)
    {
        if(i!=n-1)
            numptr[i] = numptr[i+1];
        else
            numptr[i] = temp;
    }
    for(int i = 0; i<n; i++)
    {
        cout << numptr[i];
    }
}