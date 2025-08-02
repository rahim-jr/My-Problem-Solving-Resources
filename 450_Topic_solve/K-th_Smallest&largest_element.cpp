/*
	Problem Link : https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1 	
*/
class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        r ++ ; 
        sort(arr , arr+r) ;
        k -- ; 
        int num = arr[k] ; 
        return num ;
    }
};

/*
    Problem link: https://www.naukri.com/code360/problems/kth-smallest-and-largest-element-of-array_1115488?topList=love-babbar-dsa-sheet-problems&utm_source=website&utm_medium=affiliate&utm_campaign=450dsatracker&count=25&page=9&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=SUBMISSION
*/ 
vector<int> kthSmallLarge(vector<int> &arr, int n, int k){
	// Test 
	// N = 4
	// K = 3
	// arr = { 1 2 4 5 } 
	sort(arr.begin() , arr.end()) ;
	return {arr[k - 1] , arr[n - k]} ;
}