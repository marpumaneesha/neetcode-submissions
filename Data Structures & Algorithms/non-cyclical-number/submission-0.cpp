class Solution {
public:
    int sumsq(int n){
        int sq=0;
        while(n>0){
            int dig=n%10;
            dig=dig*dig;
            sq+=dig;
            n/=10;
        }
        return sq;
    }
    bool isHappy(int n) {
        unordered_set<int> visit;
        while(visit.find(n)==visit.end()){
            visit.insert(n);
            n=sumsq(n);
            if(n==1) return true;
        }
        return false;
    }
};
