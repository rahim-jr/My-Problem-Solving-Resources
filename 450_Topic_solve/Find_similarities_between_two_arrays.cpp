/* 
    Problem Link: https://www.naukri.com/code360/problems/find-similarities-between-two-arrays_1229070?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&leftPanelTabValue=PROBLEM
*/


#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) {
    // Straight forward problem. 
	map <int ,int> count ;
	int ans = 0 ;
	for(int i = 0 ; i < n ; i++) {
		count[arr1[i]] ++ ;
		if(count[arr1[i]] == 2) ans ++ ;
	}       
	for(int i = 0 ; i < m ; i++) {
		count[arr2[i]] ++ ;
		if(count[arr2[i]] == 2) ans ++ ;
	}       
	return {ans , count.size()} ;
}