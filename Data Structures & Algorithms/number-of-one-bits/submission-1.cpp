class Solution {
public:
    int hammingWeight(uint32_t n) {
        int helper=1;
        int result=0;
        for(int i=0;i<32;i++)
        {
            if((helper & n) !=0){
                result++;
            }
            helper<<=1;
        }
        return result;
    }
};
