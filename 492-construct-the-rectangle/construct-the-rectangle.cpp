class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int > ans,factors;
        for(int i=1;i<=sqrt(area);i++){
            if(area%i==0){
                if(i == area/i) factors.push_back(i);
                else {
                    factors.push_back(i);
                    factors.push_back(area/i);
                }
            }
        }
        sort(factors.begin(),factors.end());
        for(auto i:factors) cout<<i<<" ";
        cout<<endl;
        int n=factors.size();
        if(n%2==0){
            ans.push_back(factors[n/2]);
            ans.push_back(factors[n/2-1]);
        }
        else{
            ans.push_back(factors[n/2]);
            ans.push_back(factors[n/2]);
        }
        return ans;
    }
};