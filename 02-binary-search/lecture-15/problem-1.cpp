// Leetcode 69 - Sqrt(x)

// O(sqrt(x)) approach
class Solution {
public:
    int mySqrt(int x) {
        
        int ans = 0;
        for(int i=1; i<=x; i++){
            if(i<=x/i){
                ans = i;
            }
            else
                break;
        }
        return ans;
    }
};

// Problem Encountered:-
// 1. I did i*i<=x in L10, which caused integer overflow

// Binary Search approach
class Solution {
public:
    int mySqrt(int x) {
        
        int ans = 0;
        int start = 1, end = x-1;

        if (x<2) return x;
        while(start<=end){
            int mid = start + (end - start)/2;

            if(mid == x/mid){
                ans = mid;
                break;
            }
            else if(mid<x/mid){
                ans = mid;
                start = mid+1;
            }
            else{
                end = mid -1;
            }
        }
        return ans;
    }
};

// Problems Encountered:-
// 1. Figuring out the case of mid = 0 as x/mid becomes invalid (Soln:- initialise start=1, so mid can never be 0 )
// 2. Figuring out (mid == x/mid) and (mid < x/mid) body statements.

