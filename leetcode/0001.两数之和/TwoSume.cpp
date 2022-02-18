class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            if( mp.count(target - nums[i])) {
                return vector<int>{i,mp[target-nums[i]]};
            }else{
                mp[nums[i]] = i;
            }
        }
        return vector<int>{};
    }
};

/*
思路：

假设输入n个数据，并指定target为 t
无脑解法：嵌套遍历
存在可能性为：
n(n-1)/2 种可能性需要判断
时间复杂度: O(n^2)

/*
vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec_index;
    for(int i=0; i < nums.size(); i++) {
        for (int j=i+1; j <nums.size(); j++ ){
            if((nums[i] + nums[j]) == target){
                vec_index.push_back(i);
                vec_index.push_back(j);
            }
        }
    }
    return vec_index;
}
*/

/*
更优解：哈希表
C++ 的解法这里需要注意一下，c++哈希表 分为有序和无序的
map：有序，unordered_map无序
按这题来看，unordered_map的效率会高很多

*/