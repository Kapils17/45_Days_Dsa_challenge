class Solution {
public:
    string largestOddNumber(string num) {
        
    int n = num.length();
    int index = 0;

    for(int i = n-1 ;  i >= 0 ; i--){

         if(num[i] % 2 != 0){
           index = i;
           break;
         } 

         if(i <= 0 && num[i] %2 ==0){
            return "";
         }
        

    }

    string ans = "";

    for(int i = 0; i <= index ; i++){
         ans += num[i];
    }

    return ans;

    }
};