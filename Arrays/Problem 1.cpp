// Problem Statement:
// Take an array with n elements with possibly duplicate elements as the input. 
// The task is to find the index of the first occurrences of the element x in the array and, if it is not present, return -1.


#include <iostream>


using namespace std;

int main() {

    int i,j,n,x,arr[n];

    cin>>n;

    for(j=0;j<n;j++){
        cin>>arr[j];
    }

    cin>>x;

    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout<<i;
            break;
        }

    }
    if(i==n){
        cout<<-1;
    }
    return 0;
}
