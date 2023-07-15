/*#include"bits/stdc++.h"
using namespace std;
vector<int>graph;
void bfs(vector<vector<int>>& graph, int startNode) 
{
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false); 
    queue<int> q;                           

    visited[startNode] = true;
    q.push(startNode);

    while (!q.empty()) {
        int currentNode = q.front();
        cout << currentNode << " ";  
        q.pop();

        for (int i = 0; i < graph[currentNode].size(); ++i) {
            int neighborNode = graph[currentNode][i];
            if (!visited[neighborNode]) {
                visited[neighborNode] = true;
                q.push(neighborNode);
            }
        }
    }
}
int main() {
    int numNodes = 6;
    vector<vector<int>> graph(numNodes);

    graph[0] = {1, 2};
    graph[1] = {0, 2, 3, 4};
    graph[2] = {0, 1, 4};
    graph[3] = {1, 4, 5};
    graph[4] = {1, 2, 3, 5};
    graph[5] = {3, 4};

    int startNode;
    cin>>startNode;
    cout << "BFS traversal starting from node " << startNode << ": ";
    bfs(graph, startNode);

    return 0;
}

int main() {
    int v, e;
    cin >> v;
    cin >> e;
    vector<vector<int>>vct(v);
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        vct[x].push_back(y);
        vct[y].push_back(x);
    }
    for(int i=0;i<v;i++)
    {
        cout<<"Vertex "<<i<<": ";
        for(int j=0;j<vct[i].size();j++)
        {
            cout<<vct[i][j]<<" ";
        }
        cout<<endl;
    }
    bool visited[v+1];
    memset(visited,false,v+1);
    bfs(visited,v+1);
}

12016980.nandymandysandycandy.co.in*/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >vec(1001);
void bfs(bool visited[], int size,int start_node)
{
    queue<int> q;
    q.push(start_node);
    visited[start_node] = true;
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int j = 0; j < vec[i].size(); j++)
        {
            if (!visited[vec[i][j]])
            {
                q.push(vec[i][j]);
                visited[vec[i][j]] = true;
            }
        }
        cout << i << " ";
    }
}
int main()
{
    int e, v;
    cin >> e;
    cin >> v;
    int x, y;
    for (int i = 0; i < e; i++)
    {
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }
    bool visited[v + 1];
    memset(visited, false, sizeof(visited));
    cout << "BFS Traversal: ";
    for(int i=0;i<v;i++)
    {
    	if(visited[i]==false)
    	bfs(visited,v,i);
    	
	}
}
