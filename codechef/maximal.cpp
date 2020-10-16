#include <iostream> 
#include <limits.h> 
#include <string.h> 
#include <queue> 

using namespace std; 

#define V 6

bool BFS(int resGraph[V][V], int source, int sink, int parent[]) 
{ 
    bool visited[V]; 
    memset(visited, 0, sizeof(visited)); 
    queue <int> q; 
    q.push(source); 
    visited[source] = true; 
    parent[source] = -1; 
    while (!q.empty()) 
    { 
        int u = q.front(); 
        q.pop(); 
        for (int v=0; v<V; v++) 
        { 
            if (visited[v]==false && resGraph[u][v] > 0) 
            { 
                q.push(v); 
                parent[v] = u; 
                visited[v] = true; 
            } 
        } 
    } 
    return (visited[sink] == true); 
} 

int fordFulkerson(int graph[V][V], int s, int t) 
{ 
    int u, v; 
    int resGraph[V][V]; 
    for (u = 0; u < V; u++) 
        for (v = 0; v < V; v++) 
             resGraph[u][v] = graph[u][v]; 
    int parent[V]; 
    int max_flow = 0; 
    while (BFS(resGraph, s, t, parent)) 
    { 
        int path_flow = INT_MAX; 
        for (v=t; v!=s; v=parent[v])    //minimum flow in path or bottle neck
        { 
            u = parent[v]; 
            path_flow = min(path_flow, resGraph[u][v]); 
        } 
        for (v=t; v != s; v=parent[v])  // update flow of every node on augmenting path
        { 
            u = parent[v]; 
            resGraph[u][v] -= path_flow; 
            resGraph[v][u] += path_flow; 
        } 
  
        // Add path flow to overall flow 
        max_flow += path_flow; 
    } 
    return max_flow; 
} 

int main() 
{ 
    int graph[V][V] = { {0, 23, 15, 0, 0, 0}, 
                        {0, 0, 13, 11, 0, 0}, 
                        {0, 6, 0, 0, 34, 0}, 
                        {0, 0, 9, 0, 0, 76}, 
                        {0, 0, 0, 12, 0, 42}, 
                        {0, 0, 0, 0, 0, 0} 
                      }; 
  
    cout << "The maximum possible flow is " << fordFulkerson(graph, 0, 5); 
  
    return 0; 
} 
