#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key){
    int mid;
    while(start<=end){
        mid=(start + end) / 2;
        if(arr[mid]==key){
            return 1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end=mid-1;
        }

    
    }
    return 0;
}