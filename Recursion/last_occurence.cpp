#include <bits/stdc++.h>
using namespace std;

// This program is to find the last occurence of a particular key in the array
int last_occurence(int arr[], int n, int key){
    
    // base-case
    if (n==0){
        return -1;
    }
    
    // recursive-case
    int subans = last_occurence(arr+1, n-1, key);
    if (subans==-1){
        if (arr[0]==key){
            return 0;
        }
        return -1;
    }
    else {
        return subans+1;
    }
}

int main(){
    int arr[] = {5, 18, 7, 5, 65, 3, 5, 45, 98, 65};
    int x = last_occurence(arr, 10, 5);
    if (x!=-1){
        cout << x << endl;
    }
    else {
        cout << "element not found" << endl;
    }
    return 0;
}