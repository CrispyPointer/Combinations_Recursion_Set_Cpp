#include "P1.h"

using namespace std;
vector<int> nums;   //each combination.
vector<int> v;  //temporary vector
vector<vector<int>> combs; //vector of combinations


//Using recursive helper function to find each combinations in the set
void go_find(int offset, int k){
    if(k==0){
        combs.push_back(v);
        return;
    }
    for (int i = offset; i<= nums.size() -k; ++i){
        v.push_back(nums[i]);        //include the first element
        go_find(i+1, k-1);                        //include the remain elements
        v.pop_back();                      //clear the temp vector after finding a combination.
    }
}

vector<vector<int>> combinations(int n, int k){
    combs.clear();
    nums.clear();
    for(int i = 1; i <= n; i++) nums.push_back(i);
    go_find(0,k);
    return combs;
};
