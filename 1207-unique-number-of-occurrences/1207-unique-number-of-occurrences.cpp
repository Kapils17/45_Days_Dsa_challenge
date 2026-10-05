class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
           
        if(arr.size() == 1){
            return true;
        }

        unordered_map<int , int> mp;

        for(int i = 0; i < arr.size(); i++){
            mp[arr[i]]++;
        }

        vector<int> freq;

        for(auto it : mp){
            freq.push_back(it.second);
        }

        sort(freq.begin() , freq.end());

        for(int i = 0; i < freq.size() - 1; i++){
            if(freq[i] == freq[i+1]){
                return false;
            }
        }

        return true;
    }
};