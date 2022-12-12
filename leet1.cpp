#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,target;
    int indice1;
    int indice2;
    cout << "Enter the number of elements in the array: " << endl;
    cin >> n;
    int nums[n];
    for(int i = 0; i<n; i++)
    {
        cout << "Enter element: " << endl;
        cin >> nums[i];
    }
    cout << "Enter the target needed: " << endl;
    cin >> target;
     for(int i = 0; i<n; i++)
    {
        int numtest = nums[i];
        for(int j = i+1; j<n; j++)
        {
            if((numtest+nums[j])==target)
            {
                indice1 = i;
                indice2 = j;
                break;
            }
            else
                continue;
        }
    }
    cout << indice1 << " " << indice2 << endl; 
}