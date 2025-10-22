#include <algorithm> 
#include <vector>
#include <iterator>
#include <functional>
using namespace std;

class Solution {
private:


public:
    vector<int> twoSum(vector<int>& nums, int target) { 
        vector<int> vals = {};

        

       for (int i = 0; i < nums.size() -1; i ++ ){
            for (int j= 1 ; j < nums.size(); j++ ){
                if(nums[j]+ nums[i] == target && i !=j){
                    vals.insert(vals.end(), {i, j} );
                    return vals;
                } 
               
            }
       }

        return vals;
    }
};