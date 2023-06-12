#include<iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x){
    if(r < l){
        return -1;
    }
    int mid = l + (r-l)/2;
    if(arr[mid] == x){
        return mid;
    }
    if(arr[mid] > x){
        return binarySearch(arr, l , mid-1, x);
    }
    return binarySearch(arr, mid+1, r, x);
}
int NumberOfOccurences(int arr[], int n, int x){
    int index = binarySearch(arr, 0, n-1, x);
    if(index == -1){
        return 0;
    }

    int count = 1;
    // if element is on left side
    int left = index - 1;
    while(left >= 0 && arr[left] == x){
        count++, left--;
    }
    int right = index+1;
    while(right < n && arr[right] == x){
        count++, right++;
    }

    return count;
}
int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 3;
    cout << NumberOfOccurences(arr, n, x);
    return 0;
}