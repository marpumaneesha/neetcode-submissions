class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>visited(n,vector<int>(m,-1));
        int dir[4][2]={{0,1},{1,0},{0,-1},{-1,0}};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    visited[i][j]=0;
                    int peri=0;
                    while(!q.empty()){
                        auto[r,c]=q.front();
                        q.pop();
                        for(auto& d:dir){
                            int nr=r+d[0];
                            int nc=c+d[1];
                            if(nr<0||nc<0||nr>=n||nc>=m||grid[nr][nc]==0){
                                peri++;
                            }
                            else if(visited[nr][nc]==-1){
                                visited[nr][nc]=0;
                                q.push({nr,nc});
                            }
                        }
                    }
                    return peri;
                }
            }
        }
        return 0;
    }
};