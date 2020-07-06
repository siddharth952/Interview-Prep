class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int size = nums.size();
        if(size < 2) return 0;
        int ans = 0;
        //int *zeroOne = new int[2]; HEAP
        int zeroOne[2]; // STACK Faster and no delete
        
        
        while(true){
            int zeroCount = 0;
            zeroOne[0] = 0;
            zeroOne[1] = 0;
            
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 0) zeroCount++;
                
                zeroOne[nums[i] % 2]++; // LSB Has 0 or 1 And count them
                nums[i] = nums[i] >> 1; // Right Shift
            }
            ans += zeroOne[0] * zeroOne[1]; // Total possibilities = Num of 1s * 0s 
            if(zeroCount == nums.size()) return ans; // Exhausted 
        }
        
        
    }
};
