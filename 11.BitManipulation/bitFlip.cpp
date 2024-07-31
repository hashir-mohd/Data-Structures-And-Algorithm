class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c= start^goal;
        int count = 0;
        while(c!=0){
            c=c&(c-1);
            count++;
        }
        return count;
    }
};