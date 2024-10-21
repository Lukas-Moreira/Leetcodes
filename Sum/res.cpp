#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

using std::vector;

class Solution {
    private: 
        int res;
        vector<int> result;
    public:
        vector<int> twoSum(vector<int>& nums, int target);
};

vector<int> Solution::twoSum(vector<int>& nums, int target){

    unordered_map<int,int> map;

    for (int i = 0; i < nums.size(); i++){
        res = target - nums[i];

        if(map.find(res) != map.end()){
            result.push_back(map[res]);
            result.push_back(i);
            return result;
        }

        map[nums[i]] = i;
    }

    return result;

}

int main (){

    Solution sol;

    vector<int> array = {2,7,11,15};

    vector<int> result = sol.twoSum(array, 9);

    cout << "{ ";
    for (int i : result){
        cout << i << " ";
    }

    cout << "}" << endl;

    return 0;

}