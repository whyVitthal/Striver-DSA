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
    for(i=1;i<=2*n-1;i++){
        int stars = i;
        if ( i > n) {
            stars = 2*n - i;
        }
        for(j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void print11(int n){
    int i,j;
    for(i=1;i<=n;i++){
        int start=1;
        if (i%2==0){
            start = 1;
        } else {
            start = 0;
        }

        for(j=1;j<=i;j++){
            cout<<start<<" ";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout<<endl;
    }
}
void pattern12(int n){
    int i,j;
    for( i=1;i<=n;i++){
    //numbers
    for(j=1;j<=i;j++){
        cout<<j; 
    }
    //spaces
    int spaces = 2*(n-i);
    for(j=1;j<=spaces;j++){
        cout<<" "; 
    }
    //numbers
    for(j=i;j>=1;j--){
        cout<<j; 
    }
    cout<<endl;
    spaces = spaces - 2;
    }
}
void pattern14(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(char ch='A'; ch <='A'+ i;ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern15(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern16(int n){
 int i,j;
 for(i=0;i<n;i++){
    char ch='A'+i;
        for(j=0;j<=i;j++){
            cout<<ch <<" ";
        }
        cout<<endl;
    }
}
void pattern17(int n){
    int i,j;
    for(i=0;i<n;i++)
    {
       for(j=0;j<n-i-1;j++)
       {
           cout<<" "; //space print krne k liye
       } 
       char ch ='A';
       int breakpoint = (2*i+1)/2;
       for(j=0;j<2*i+1;j++)
       {
           cout<<ch<<" "; 
           if(j<breakpoint){
               ch++;
           } else {
               ch--;
           }
       }
       for(j=0;j<n-i-1;j++)
       {
           cout<<" "; //space print krne k liye
       }
         cout<<endl;
    }
}
void pattern18(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
void pattern21(int n){
    int i,j;
 for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    if(i==0 || i==n-1 || j==0 || j==n-1){
        cout<<"*";
    } else {
        cout<<" ";
    }

 }  
 cout<<endl; 
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
    pattern21(n);
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