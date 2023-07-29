// Problem Statement:
// Take an array with n elements with possibly duplicate elements as the input. 
// The task is to find the index of the last occurrences of the element x in the array and, if it is not present, return -1.


#include <iostream>
using namespace std;

int main() {

    int i,j,n,s=-1,x;
        cin>>n;
    int arr[n];



    for(j=0;j<n;j++){
        cin>>arr[j];
    }

    cin>>x;

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            s=i;
        }

    }
    cout<<s;
    return 0;
}
