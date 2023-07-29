// Problem Statement:
// Write a program to reverse the array.

#include <iostream>
using namespace std;

int main() {

   int n,i,c;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++){
       cin>>arr[i];
   }
   for(i=0;i<=sizeof(arr)/2;i++){
       if(i==(n-1-i) || i>(n-1-i)){
           break;
       }
       c=arr[i];
       arr[i]=arr[n-1-i];
       arr[n-1-i]=c;
   }
   for(i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}