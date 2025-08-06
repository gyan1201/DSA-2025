#include<iostream>
using namespace std;
#include<vector>

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start, mid, end;
        start = 0;
        end = n-1;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else start = mid+1;
        }
        return start;
    }
};