{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        if(n == 1) return 0;
        priority_queue<long long, vector<long long>, greater<long long>> pq(arr, arr+n);
        long long res = 0;
        
        while(pq.size() != 1){
            long long tmp = pq.top(); pq.pop();
            tmp += pq.top(); pq.pop();
            res += tmp;
            pq.push(tmp);
        }
        return res;
    }
};
