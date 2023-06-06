//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    private:
    bool isSafe(vector<vector<int>> m,int n,int x,int y,vector<vector<int>> visited){
        if(visited[x][y] == 0 && m[x][y] ==1 && (x>0 && x<n) && (y<n && y>0)){
            return true;
        }
        else{
            return false;
        }
    }
    void solve(vector<vector<int>> m,int n,vector<string>  &ans,int x,int y,vector<vector<int>> visited, string path){
        // Rabbit in a Maze
        //base
        if(x==n-1 && y==n-1){
            ans.push_back(path);
            return;
        }

        //rec
        if(isSafe(m,n,x,y,visited)){
            visited[x][y] = 1;
            if(isSafe(m,n,x+1,y,visited)){
                solve(m,n,ans,x+1,y,visited,path+'D');
            }
            if(isSafe(m,n,x,y-1,visited)){
                solve(m,n,ans,x,y-1,visited,path+'L');
            }
            if(isSafe(m,n,x,y+1,visited)){
                solve(m,n,ans,x,y+1,visited,path+'R');
            }
            if(isSafe(m,n,x-1,y,visited)){
                solve(m,n,ans,x-1,y,visited,path+'U');
            }
            visited[x][y] = 0;
        }


        
        
        
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0){
            return ans;
        }
        
        int x = 0;
        int y =0;
        
        vector<vector<int>> visited = m;
        
        for(int i = 0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = 0;
            }
        }
        
        
        string path = "";
        
        solve(m,n,ans,x,y,visited,path);
        sort(ans.begin(),ans.end());
        return ans;
        
        
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends