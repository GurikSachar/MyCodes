#include<bits/stdc++.h>
#include<string>
using namespace std;

string reverse(int,string);
void getdata();

string reverse(int n,string sentence)
{
    if(n==0)
    {
        cout << sentence[0]; 
        return "0";
    }
    // else
    // { 
        cout << sentence[n];
        reverse(n-1,sentence);
    // }
}

void getdata()
{
    string sentence;
    cout << "Enter the sentence you wish to reverse: " << endl;
    cin >> sentence;
    int length = sentence.length();
    reverse(length-1,sentence);
}

int main()
{
    getdata();
    return 0;
}
