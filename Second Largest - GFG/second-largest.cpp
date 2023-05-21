//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    
	    unordered_set<int> st;
	
	    
	    for(int i = 0; i<n ; i++){
	        st.insert(arr[i]);
	    }
	    
	    if(st.size() < 2){
	        return -1;
	    }
int max1 = INT_MIN;
int max2 = INT_MIN;

	    for(auto j : st){
	    if(j > max1){
        max2 = max1;
        max1 = j;
    }
    else if(j > max2){
        max2 = j;
    }
	    }


 return max2;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends