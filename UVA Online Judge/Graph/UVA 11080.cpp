#include <bits/stdc++.h>

using namespace std;

vector<int> G[205];
int colorArr[205];
int conta[2];
bool pinta(int src, int V)
{
 
    // Assign first color to source
    colorArr[src] = 1;
    conta[1]++;
 
    // Create a queue (FIFO) of vertex
    // numbers and enqueue source vertex
    // for BFS traversal
    queue <int> q;
    q.push(src);
 
    // Run while there are vertices
    // in queue (Similar to BFS)
    while (!q.empty())
    {
        // Dequeue a vertex from queue ( Refer http://goo.gl/35oz8 )
        int u = q.front();
        q.pop();
 
        // Find all non-colored adjacent vertices
        for (int x = 0; x < G[u].size(); ++x)
        {
            // An edge from u to v exists and
            // destination v is not colored
            int v=G[u][x];
            if (colorArr[v] == -1)
            {
                // Assign alternate color to this adjacent v of u
                colorArr[v] = 1 - colorArr[u];
                conta[colorArr[v]]++;
                q.push(v);
            }
 
            // An edge from u to v exists and destination
            // v is colored with same color as u
            else if (colorArr[v] == colorArr[u])
                return false;
        }
    }
 
    // SE CHEGOU PODE PINTAR COM COR DIFERENTE
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int a=0; a<n; a++)
    {
        int N, M;
        cin>>N>>M;
        for(int i=0; i<N; i++)
        {
            G[i].clear();
            colorArr[i]= - 1;
        }
        bool ain;
        int total=0;
        for(int i=0; i<M; i++)
        {
            int x, y;
            cin>>x>>y;
            G[x].push_back(y);
            G[y].push_back(x);
        }
        for(int i=0; i<N; i++)
        {
            if(colorArr[i]== - 1)
            {
                conta[0]=0;
                conta[1]=0;
                ain=pinta(i, N);
                if(ain==false)
                {
                    break;
                }
                total += max(1, min(conta[0], conta[1]));
            }
        }
        if(ain==false)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<total<<endl;
        }
    }
}
