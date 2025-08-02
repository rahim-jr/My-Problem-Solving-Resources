/*
    Problem Link : https://www.naukri.com/code360/problems/move-all-negative-numbers-to-beginning-and-positive-to-end_1112620?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTabValue=SUBMISSIONd
*/

// Solution
// Simple sorting solve this 
#include <bits/stdc++.h> 
vector<int> separateNegativeAndPositive(vector<int> &nums){
    sort(nums.begin() , nums.end()) ; 
    return nums ;
}