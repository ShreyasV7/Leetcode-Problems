class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        stack<int> st;
        for(int i = n-1; i >= 0; i--)
        {
            st.push(nums[i]);
        }
        for(int i = n-1; i >= 0; i--)
        {
            while(!st.empty() && st.top() <= nums[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                res[i] = st.top();
            }
            else
            {
                res[i] = -1;
            }
            st.push(nums[i]);
        }
        return res;
    }
};