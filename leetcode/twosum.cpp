class solution {
 public:
vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> m;
        int y;
        for(int i = 0;i<nums.size();i++)
        {
            y = target - nums[i];
            if(m.find(y)!=m.end())
            {
                return {m[y],i};
            }
            m[nums[i]]=i;
        }
        return {-1,-1};
    }
};
      
