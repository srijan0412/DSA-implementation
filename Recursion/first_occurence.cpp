#include <bits/stdc++.h>
using namespace std;

// This function is to find the first occurence of any number from the start of the array 
int first_occurence( int arr[], int n, int key){
    // base case
    if (n==0){
        return -1;
    }
    
    // recursive case
    if (arr[0]==key){
        return 0;
    }

    int subans = first_occurence(arr+1, n-1, key);
    
    if (subans != -1){
        return subans+1;
    }

    return -1;
}

int main(){
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int index = first_occurence(arr, 8, 5);
    if (index != -1){
        cout << index << endl;
    }
    else {
        cout << "Element not found! " << endl;
    }
    return 0;
}