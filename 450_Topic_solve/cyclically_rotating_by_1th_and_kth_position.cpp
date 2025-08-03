
/*
    Problem link : https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
*/

//This function is completed
void rotate(int arr[], int n)
{
    int temp , t ; 
    temp = arr[n-1] ;
    for(int i = n-1 ; i >= 0 ; i--){
        arr[i] = arr[i-1] ;
        //printf("%d " ,arr[i]) ;
    }
    //printf("\n") ;
    arr[0] = temp ;
}

// O(N) solution
#include <bits/stdc++.h>
vector<int> rotateArray(vector<int>arr, int k) {
    reverse(arr.begin(),arr.begin() + k) ;
    reverse(arr.begin() + k , arr.end()) ;
    reverse(arr.begin() , arr.end()) ;
    return arr ;
}

// Faster but needs more memory
#include <bits/stdc++.h>
vector<int> rotateArray(vector<int>arr, int k) {
    int n = arr.size() ;
    vector <int> v(n) ;
    k = k % n ;

    for(int i = 0 ; i < n ; i++) {
        // index = (i + k) % n // left side rotation
        int index = (i - k + n) % n ; // right side rotation
        v[index] = arr[i] ;
    }

    return v ;
}
