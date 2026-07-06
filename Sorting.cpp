// #include <iostream>
// using namespace std;


// // selection sorting
// void selection_sort(int arr[], int n)
// {
//     for (int i = 0; i <= n - 2; i++)
//     {
//         int min = i;
//         for (int j = i+1; j <= n - 1; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//         }
//         int temp = arr[min];
//         arr[min] = arr[i];
//         arr[i] = temp;
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     selection_sort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// Bubble sorting
// #include<iostream>
// using namespace std;

// void bubble_sort(int arr [],int n){
//     for(int i=0;i<=n-2;i++){
//         for(int j=0;j<=n-2-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }  
//         }
//     }
 
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubble_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


// Bubble sorting optimized code
// #include<iostream>
// using namespace std;

// void bubble_sort(int arr [],int n){
//     for(int i=n-1;i>=1;i--){
//         int didswap =0;
//         for(int j=0;j<=i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 didswap = 1;
//             }  
//         }
//         if(didswap == 0){
//             break;
//         }
//         cout<<"runs"<<endl;
//     }

 
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     bubble_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// test cases me 1 2 3 4 5 lena for sorted and unsorted me  6 5 4 3 2 1 
// 6 value ho gyi arr ki 


// insertion sorting
// #include<iostream>
// using namespace std;

// void insertion_sort(int arr [],int n){

//     for(int i=1;i<n;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             swap(arr[j-1],arr[j]);
//             j--;
//             cout<<"runs"<<endl;
//         }
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     insertion_sort(arr,n);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
