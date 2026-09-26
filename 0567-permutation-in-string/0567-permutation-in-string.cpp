class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int size1 = s1.size();
        int size2 = s2.size();

        if(size1 > size2){
            return false;
        }

        vector<int> freq(26 , 0);

        for(int i = 0; i < size1; i++){
            freq[s1[i] - 'a']++;
        }

        int low = 0;
        int high = size1 - 1;

        vector<int> freq2(26 , 0);

        for(int i = low ; i <= high; i++){
           freq2[s2[i] - 'a']++;
        }

        if(freq == freq2){
            return true;
        }
        
        while(high + 1 < size2){
            low ++;
            high ++;

            freq2[s2[low - 1] - 'a']--;
            freq2[s2[high] - 'a']++;

            if(freq == freq2){
                return true;
            }
        }

        return false;






    }
};