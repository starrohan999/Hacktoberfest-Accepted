//Prims
#include <bits/stdc++.h>
using namespace std;
int V;
int step;
int minKey(int key[], bool mstSet[], int V)
{

    int min = INT_MAX, min_index;
    step++;
    step++;
    for (int v = 0; v < V; v++)
    {
        step++;
        step++;
        if (mstSet[v] == false && key[v] < min)
        {
            step++;
            min = key[v], min_index = v;
        }

    }
    step++;
    return min_index;
}
int main()
{
    int V;
    cout << "Enter the no.of Vertices\n";
    cin >> V;
    int i, j;
    int graph[V][V];
    for (i = 0; i < V; i++)
    {
        for (j = i; j < V; j++)
        {
            if (i == j)
                graph[i][j] = 0;
            else
            {
                cout << "Enter the value of weighted edge between" << i + 1 << "and" << j + 1 << "\n";
                cin >> graph[i][j];
                graph[j][i] = graph[i][j];
            }
        }
    }
    int parent[100];
    step++;
    int key[100];
    bool mstSet[100];
    step++;
    step++;
    for (int i = 0; i < V; i++)
    {
        step++;
        step++;
        key[i] = INT_MAX, mstSet[i] = false;
    }
    step++;
    step++;
    key[0] = 0;
    parent[0] = -1;

    step++;
    for (int count = 0; count < V - 1; count++)
    {
    step++;
    step++;
        int u = minKey(key, mstSet, V);
    step++;
        mstSet[u] = true;
    step++;
        for (int v = 0; v < V; v++)
        {
            step++;
            step++;
            if (graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
            {
                step++;
                parent[v] = u, key[v] = graph[u][v];
            }

        }
    }
    cout << "Edge \tWeight\n";
    for (i = 1; i < V; i++)

        cout << parent[i]+1 << " - " << (i+1) << " \t" << graph[i][parent[i]] << " \n";
        cout<<"\n No. of steps: "<<step;
    return 0;
}
