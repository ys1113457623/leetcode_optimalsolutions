class Solution{
    public:
    bool check(vector<ll> A, vector<ll> B, int N) {
        unordered_map<int,int> hmap;
        for(int i=0;i<N;i++){
            hmap[A[i]]++;
        }
        for(int i=0;i<N;i++){
            hmap[B[i]]--;
        }
        for(auto i:hmap){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }
};


//SPACE COMPLEXITY O(N)
//TIME COMPLEXITY O(N)