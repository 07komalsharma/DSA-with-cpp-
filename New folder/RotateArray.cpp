#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

void rotate(int[] nums, int k) {
        int* temp = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            temp[(i + k) % nums.length] = nums[i];
        }
        for (int i = 0; i < nums.length; i++) {
            nums[i] = temp[i];
        }
        return;
}
int main(){
    int arr[4]={1,2,3,4};
    cout<<rotate(arr,3);
    
}
// ...........pendingg..........