#include<bits/stdc++.h>
using namespace std;

typedef struct distances{
    int feet;
    int inches;
} distanceval;

distanceval addDistance(distances,distances);

int main()
{
    distanceval d1,d2,d3;
    cout << "Enter the feet measurements of the first distance: " << endl;
    cin >> d1.feet;
    cout << "Enter the inch measurements of the first distance: " << endl;
    cin >> d1.inches;
    cout << "Enter the feet measurements of the second distance: " << endl;
    cin >> d2.feet;
    cout << "Enter the inch measurements of the second distance: " << endl;
    cin >> d2.inches;
    d3 = addDistance(d1,d2);
    cout << "Sum of feet measurements is: " << d3.feet << endl;
    cout << "Sum of inch measurements is: " << d3.inches << endl;
    return 0;
}

distanceval addDistance(distances d1, distances d2)
{
    distances d3;
    d3.feet = d1.feet + d2.feet;
    d3.inches = d1.inches + d2.inches;
    if(d3.inches>11)
        d3.inches -= 11;
        d3.feet++;
    return d3;
}