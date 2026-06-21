#include <iostream>
#include <string>

using namespace std;

// void printNmae(){
//     cout<<"John Doe";
// }
// int main(){
//     printNmae();
// }  

// void printName(string name , string name2){
//     cout<<"hey " << name<< " " << "and"<< " " << name2 ; 
// }
// int main(){
//     string name ;
//     cin>>name ;
//     string name2 ;
//     cin>>name2 ;
//     printName(name, name2);
//     return 0;
// } 

// int sum(int num1 , int num2){
//     int num3 = num1 + num2;
//     return num3;
//     // cout<<num1+num2;
    

// }

// int main(){
//     int num1 , num2;
//     cin >> num1 >> num2;

//     // sum(num1 , num2);
//     int res = sum(num1 , num2);
//     cout << res;
//     return 0;
// }



// int maxx(int num1 , int num2)
// {
//     if (num1 >= num2){
//      return num1;
//     }

//     // else {
//     //     return num2; 
//     // }
// return num2; 
// looking for a rerurn line if not found the throws garbage value
// }



// int main(){
//     int num1 , num2;
//     cin >> num1 >> num2;
//     int maximum = maxx(num1, num2);
//     cout << maximum;
//     return 0;
// }


//pass by value 
// void dosomething(int num){
//     cout<<num<<endl;
//     num = num + 5;
//     cout<<num<<endl;
//     num = num + 5;
//     cout<<num<<endl;
// }




// int main(){
//     int num;
//     cin>> num;
//     dosomething(num);
//     cout<<num;
//     return 0;

// }



//pass by value 
// void dosomething(string S){
//     S[0]='t';
//     cout<<S<<endl;

// }
// int main(){
//     string S;
//     cin>>S;
//     dosomething(S);
//     cout<<S;
//     return 0;
// }


// pass by reference 
// void dosomething(string &S){
//     S[0]='t';
//     cout<<S<<endl;

// }
// int main(){
//     string S;
//     cin>>S;
//     dosomething(S);
//     cout<<S;
//     return 0;
// }


// int main(){
//     int arr[5];
//     int i;
//    for(i=0;i<=4;i++){
//     cin>>arr[i];
//     cout<<arr[i]<<" ";
//    }
//    return 0;
// }


// arrays are always passed by reference
// void dosomething(int arr[]){
//     arr[0] += 100;
//     cout<<"value inside function:"<< " "<<arr[0]<<endl;
// }
// int main(){
//     int arr[5];
//     int i;
//    for(i=0;i<=4;i++){
//     cin>>arr[i];
//    }
//    cout<<endl;
//    dosomething(arr);
//    cout<<"value inside int main:"<< " "<<arr[0]<<endl;
//    return 0;
// }