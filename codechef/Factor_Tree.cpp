#include<bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int source,int dest){
    adj[source].push_back(dest);
    adj[dest].push_back(source);
}
const int MAX = 1000001; 
int factor[MAX] = { 0 }; 
  
/*void generatePrimeFactors() 
{ 
    factor[1] = 1; 
    for (int i = 2; i < MAX; i++) 
        factor[i] = i;
    for (int i = 4; i < MAX; i += 2) 
        factor[i] = 2; 
    for (int i = 3; i * i < MAX; i++) { 
        if (factor[i] == i) { 
            for (int j = i * i; j < MAX; j += i) { 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
  
int factors(long long int n) 
{ 
    if (n == 1) 
        return 1; 
    int ans = 1; 
    int dup = factor[n]; 
    int c = 1; 
    
    if(factor[n]==0)
        return 1;
    int j = n / factor[n]; 
    while (j != 1) { 
        if (factor[j] == dup) 
            c += 1; 
        else { 
            dup = factor[j]; 
            ans = ans * (c + 1); 
            c = 1; 
        }  
        j = j / factor[j]; 
    } 
    ans = ans * (c + 1); 
    return ans; 
} */
int factors(int n){
    int count=0;
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            // If divisors are equal, print only one 
            if (n/i == i) 
                count++; 
  
            else // Otherwise print both 
                count+=2; 
        } 
    }
    return count; 
}

bool BFS(vector<int> adj[],int source,int dest,int vert,int parent[],int dist[]){
    queue<int>q;        // we are using BFS
    bool visited[vert]; // visited 
    for (int i = 0; i < vert; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        parent[i] = -1; 
    } 
    visited[source]=true;
    dist[source]=0;
    q.push(source);
    while (!q.empty()){
        
        int f=q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(visited[adj[f][i]]==false){
                visited[adj[f][i]]=true;
                dist[adj[f][i]]=dist[f]+1;
                parent[adj[f][i]]=f;
                q.push(adj[f][i]);
                if (adj[f][i] == dest) 
                   return true; 
            }
        }
    }
    return false;
    

}
vector<int> getPath(vector<int> adj[],int source,int dest,int vert){
    int parent[vert],dist[vert];//parent store immediate predecessor,dist stores length of path from source
    vector<int >path;
    if(BFS(adj,source,dest,vert,parent,dist)==false){
        return path;
    }
    
    int last=dest;
    path.push_back(last);
    while(parent[last]!=-1){
        path.push_back(parent[last]);
        last=parent[last];
    }
    return path;
}
int main(){
    int test_cases;
    cin>>test_cases;
    //generatePrimeFactors();
    while(test_cases--){
        vector<int>cost;
        int num,x,y,query,source,dest;
        cin>>num;
        vector<int>adj[num];    //to store graph
        for(int i=0;i<num-1;i++){
            cin>>x;
            cin>>y;            
            add(adj,x-1,y-1);
        }
        for(int i=0;i<num;i++){
            cin>>x;
            cost.push_back(x);

        }
        cin>>query;
        
        while(query--){
            vector<int >path;
            cin>>source>>dest;
            source--;
            dest--;
            if(source!=dest){
                path=getPath(adj,source,dest,num);
            }
            else{
                path.push_back(source);
            }
            long long int total_Cost=1;
            for(int i=0;i<path.size();i++){
                total_Cost*=cost[path[i]];
                
            }
            long int mod=pow(10,9)+7;
            long int count=factors(total_Cost%mod);
            cout<<count<<endl;
        }

    }
}