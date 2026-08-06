class Solution {
public:
    int smallestNumber(int n, int t) {
        


    while(true){

     
    int pro = 1; 
    int no = n;

     while(no > 0){

        int digit = no % 10;
        
        pro = digit * pro;

        no = no / 10;
     }

      if(pro % t == 0){
        return n;
     }

     n++;

    }

    }
};