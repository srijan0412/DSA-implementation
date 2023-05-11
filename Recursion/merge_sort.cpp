#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while ( left <= mid && right <= high){
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    int k = 0;
    for (int i=low; i<=high; i++){
        arr[i] = temp[k];
        k++;
    }
}

void merge_sort(vector<int> &arr, int low, int high) {
    if (low == high) {
        return;
    }

    int mid = (low + high)/2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid+1, high);
    merge(arr, low, mid, high);
}

int main(){
    vector<int> arr = {4, 1, 5, 2, 3};
    merge_sort(arr, 0, 4);
    for (auto a: arr){
        cout << a << " ";
    }
    cout << endl;
    return 0;
}