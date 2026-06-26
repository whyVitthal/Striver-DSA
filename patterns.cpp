#include <iostream>
using namespace std;

void print1(int n)
// yha se online compiler me code krna ho 
{
    int i,j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}
void print2(int n)
{
    int i,j;
    for (i = 0; i <n; i++)
    {
        for (j = 0; j <=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n){
    int i,j;
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=i; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }
}
void print4(int n){
    int i,j;
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=i; j++)
        {
            cout <<i<<" ";
        }
        cout << endl;
    }
}
void print5(int n){
    int i,j;
    for (i = 0; i <=n; i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           cout<<" "; //space print krne k liye
       }
       for(j=0;j<2*i+1;j++)
       {
           cout<<"*"; //star print krne k liye
       }
       for(j=0;j<n-i-1;j++)
       {
           cout<<" "; //space print krne k liye
       }
         cout<<endl;
    }
}
void print9(int n){

    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<i;j++)
       {
           cout<<" "; //space print krne k liye
       }
       for(j=0;j<2*n-2*i-1;j++)
       {
           cout<<"*"; //star print krne k liye
       }
       for(j=0;j<i;j++)
       {
           cout<<" "; //space print krne k liye
       }
         cout<<endl;
    }
  
}

//for pattern 9 in sde sheet comcine both of them

void print10(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
        
    }




}

// backend of an online compiler 
int main()
{  
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {   
    int n;
    cin>>n;
    // print8(n);
    // print9(n);
    print10(n);
    }
    return 0;
}

// testcase:
// Input: 2 
// 3
// 5
// so 2 batata hai ki patterb 2 times print hoga phle 3 phr 5 ke liye patterns print honge 

// output :
// ***
// ***
// ***
// *****
// *****
// *****
// *****
// *****