class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>count(26,0);
        for(char task:tasks){
            count[task-'A']++;
        }
        int maxf=*max_element(count.begin(),count.end());
        int maxcnt=0;
        for(int i:count){
            if(i==maxf) maxcnt++;
        }
        int time=(maxf-1)*(n+1)+maxcnt;
        return max((int)tasks.size(),time);
    }
};
