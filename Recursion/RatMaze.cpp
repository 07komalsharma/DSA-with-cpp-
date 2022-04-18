#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>> visited,vector<vector<int>> &m){

    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && m[x][y]==1){
       return true; 
    }
    else{
        return false;
    }
}

void solve(vector<vector<int>> &m,int n,vector<string>& ans,int x,
           int y, vector<vector<int>> visited,string path){

        //base case
        if(x==n-1 && y==n-1){        //destination
            ans.push_back(path);
            return;
        }
        visited[x][y] = 1;

    //choices -> D-down , U-up , L-left , R-right
    //down
    int newx = x+1;
    int newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('D');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //left
    newx = x;
    newy = y-1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('L');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }

    //right
    newx = x;
    newy = y+1;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('R');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();
    }
    //up
     newx = x-1;
    newy = y;
    if(isSafe(newx,newy,n,visited,m)){
        path.push_back('U');
        solve(m,n,ans,newx,newy,visited,path);
        path.pop_back();

    }


        visited[x][y] = 1; 
} 

vector<string> findPath(vector<vector<int>> &m,int n){
    vector<string> ans;

    if(m[0][0]==0){
        return ans;  //agr source  coordinate hi zero rhe tb
    }

    int srcx=0;
    int srcy=0;

    vector<vector<int>> visited = m;

    //initialise with 0 visited matrix 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            visited[i][j] = 0;
        }
    }
    string path="";
    solve(m,n,ans,srcx,srcy,visited,path);
    sort(ans.begin(),ans.end());        // returns the list of paths in lexicographically increasing order
    return ans;
}

int main(){
    vector<vector<int> > vect{ { 1, 0, 0, 0 }, 
                               { 1, 1, 0, 1 }, 
                               { 1, 1, 0, 0},
                               { 0, 1, 1, 1}};

   vector<string> answer= findPath(vect,4);
   sort(answer.begin(),answer.end());

   if(answer.size()==0){
       cout<<-1;
   }
   else{
       for(int i=0;i<answer.size();i++){
           cout<<answer[i]<<" ";
       }
       cout<<endl;
   }

}