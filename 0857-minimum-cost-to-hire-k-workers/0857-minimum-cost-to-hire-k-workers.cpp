class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
         int n=quality.size();
        double qua_sum=0;
        double ans = INT_MAX;
        
          vector<pair<double,int>> ratios;
        
            for(int i=0;i<n;i++)
        ratios.push_back({wage[i]/(double)quality[i],quality[i]});
        
        sort(ratios.begin(),ratios.end());
        
        priority_queue<int> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(ratios[i].second);
            qua_sum += ratios[i].second;

            if(pq.size()>k)
            {
                qua_sum -= pq.top();
                pq.pop();
            }
            if(pq.size()==k)
            ans = min(ans,qua_sum*ratios[i].first);
        }
        return ans;

    }
};