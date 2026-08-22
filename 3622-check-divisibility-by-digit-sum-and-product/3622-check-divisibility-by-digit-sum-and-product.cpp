class Solution {
public:
    
    
   
    bool checkDivisibility(int n) {

         int sum = 0;
         int mul = 1;
         int nn = n;
  
        
        while(nn > 0){
            int digit = nn % 10;
             
             sum = sum + digit;
             mul = mul * digit;

            nn = nn / 10;

        }
         
        int addition = mul + sum;

        if(n % addition == 0){
            return true;
        }
        else{
            return false;
        }

    }
};