#include<bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    cout << "Enter the sentence: " << endl;
    getline(cin,sentence);
    for(int i = 0; i<sentence.length(); i++)
    {
        if(sentence[i]=='a'||sentence[i]=='e'||sentence[i]=='i'||sentence[i]=='o'||sentence[i]=='u')
            cout << sentence[i] << " is a vowel" << endl;
        else
            cout << sentence[i] << " is a consonant" << endl;
    }
    return 0;
}