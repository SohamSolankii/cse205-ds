class KthLargest {
public:
    priority_queue<int, vector<int> , greater<int>> q;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(auto i : nums){
            q.push(i);
        }
        
        while(q.size()>kth){
            q.pop();
        }
    }
    
    int add(int val) {
        q.push(val);

        while(q.size()>kth){
            q.pop();
        }
        return q.top();
    }
};