class Solution {
public:
    bool isAnagram(string s, string t) {        

        unordered_map<char, int> mp;
        if (s.size() != t.size())
            return false; 

        for(int i=0;i<s.size(); i++){
            ++mp[s[i]];
            --mp[t[i]];
        }

        // for(unordered_map<char,int>::iterator it= mp.begin(); it!=mp.end(); it++){
        //     if(it->second!=0){
        //         return false;
        //     }
        // }

        for(auto& kv:mp){
            if(kv.second != 0)
                return false;
        }
        return true;

       
};


/*
题目解读：
就是给定两个字符串 str1 和 str2，分别统计这两个字符串中每个字符出现的次数，结果分别为 out1 和 out2，
如果out1 和 out2完全相同，则str1和str2护卫字符异位词。

思路：哈希表、字符串遍历
时间复杂度：O(n)


其他解法：
先排序，直接比较字符串
优化：
如果s和t的字符长度都不一样，则不需要后续的判断了

/*
bool isAnagram(string s, string t) {        
    unordered_map<char, int> mp;
    if (s.size() != t.size())
        return false; 

    for(int i=0;i<s.size(); i++){
        ++mp[s[i]];
        --mp[t[i]];
    }

    for(int i=0 ;i <t.size(); i++){
        if(mp.count(t[i]) !=0){
            if(mp[t[i]] == 1) mp.erase(t[i]);
            else mp[t[i]] -= 1;
        }
    }
    if(mp.empty()) return true;
    return false;
}

*/

/*
其他思路：使用sort函数
*/