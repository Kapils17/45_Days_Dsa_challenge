class Solution {
public:
    bool checkInclusion(string s1, string s2) {
         
    int size1 = s1.length();
    int size2 = s2.length();

    if(size1 > size2){
        return false;
    }

    vector<int> v(26,0);

    for(int i = 0 ; i < size1; i++ ){
        v[s1[i] - 'a']++;
    } 



    int low = 0;
    int high = size1 - 1;

    vector<int> v2(26,0);

    for(int i = low ; i <= high ; i++){
        v2[s2[i] - 'a']++;

    }

    
  if(v == v2){
     return true;
       }

    while(high < size2 - 1){
      
       low ++;
       high ++;



       v2[s2[low - 1] - 'a']--;
       v2[s2[high ]-'a']++;

       
        if(v == v2){
        return true;
       }

      
    }
      

   return false;

    }

    

    
};