#include<bits/stdc++.h>
using namespace std;

void transpose(int,int,int *);

int main()
{
    int rows1, columns1, rows2, columns2, rows3, columns3, i, j;
    cout << "Enter the number of rows and columns you want in matrix 1: " << endl;
    cin >> rows1 >> columns1;
    int matrix1[rows1][columns1];
    for(i = 0; i<rows1; i++)
    {
        for(j = 0; j<columns1; j++)
        {
            cout << "Enter element of row " << i+1 << " column " << j+1 << ": " << endl;
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter the number of rows and columns you want in matrix 2: " << endl;
    cin >> rows2 >> columns2;
    int matrix2[rows2][columns2];
    for(i = 0; i<rows2; i++)
    {
        for(j = 0; j<columns2; j++)
        {
            cout << "Enter element of row " << i+1 << " column " << j+1 << ": " << endl;
            cin >> matrix2[i][j];
        }
    }
    if(columns1==rows2)
    {
        rows3 = rows1;
        columns3 = columns2;
    }
    else
    {
        cout << "Matrix multiplication not possible" << endl;
        return 0;
    }
    int matrix3[rows3][columns3];
    int ans=0;
    
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            ans=0;
            for(int k=0;k<columns1;k++)
            {
                ans=ans+matrix1[i][k]*matrix2[k][j];
            }
            matrix3[i][j]=ans;
        }
    }

    for(i = 0; i<rows3; i++)
    {
        for(j = 0; j<columns3; j++)
        {
            cout<< matrix3[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
