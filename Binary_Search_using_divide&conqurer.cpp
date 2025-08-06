#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key) {
    if(start<=end) {
        int mid = (start + end) / 2;
        if(mid == key) {
            return 1;
            
        if(arr[mid] < key) {
            return BinarySearch(arr,mid+1,end,key);
        }
        else {
            return BinarySearch(arr,start,mid-1,key);
        }
    }
    else return 0;
    }
}
