{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> v;
        for(int i=0; i<n; i++){
            v.push_back({start[i], end[i]});
        }
        
        sort(v.begin(), v.end());
        int ans = 1;
        int endptr = v[0].second;
        for(int i=1; i<n; i++){
            if(v[i].first > endptr){
                ans++;
                endptr = v[i].second;
            }
            else if(v[i].second < endptr){
                endptr = v[i].second;
            }
        }
        
        return ans;
    }
};
