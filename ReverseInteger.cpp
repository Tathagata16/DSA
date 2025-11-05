class Solution {
public:
    int reverse(int x) {
       long rnum=0;
       while(x!=0){
        
        rnum=(rnum*10) + x%10;

        x/=10;
       } 
       if (rnum>INT_MAX || rnum<INT_MIN) return 0;
       return int(rnum);
    }
};
