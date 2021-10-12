//Dijkstras
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int step;
int findMinVertex(bool *visited, int *distance, int v)
{
    step++;
	int minIndex, minVal = INT_MAX;
    step++;
	for(int i = 0 ; i < v ; i++)
	{
	    step++;
	    step++;
		if(!visited[i] && distance[i] < minVal)
		{
		    step++;
		    step++;
			minVal = distance[i];
			minIndex = i;
		}
	}
    step++;
	return minIndex;
}

int main()
{

	int v, e;
	cout<<"Input total Vertices and edges in the graph"<<endl;
	cin >> v >> e;
	cout << endl;

	int **adj = new int*[v];

	for(int i = 0 ; i < v ; i++)
		adj[i] = new int[v];

	for(int i = 0 ; i < v ; i++)
		for(int j = 0 ; j < v ;j++)
			adj[i][j] = 0;


	for(int i = 0 ; i < e ; i++)
	{   cout<<"Enter extremities of the edge and weight of edge respectively "<<endl;
		int l, r, w;
		cin >> l >> r >> w;
		adj[l][r] = w;
	}

	bool *visited = new bool[v];
	for(int i = 0 ; i < v ; i++)
		visited[i] = false;

	int sv;
	cout << "Enter start vertex: ";
	cin >> sv;

    step++;
	int *distance = new int[v];
	step++;
	distance[sv] = 0;
	step++;
	for(int i = 0 ; i < v ; i++)
    {
        step++;
        step++;
        if(i != sv)
        {
            step++;
            distance[i] = INT_MAX;
        }

    }
    step++;
	for(int j = 0 ; j < v ; j++)
	{
	    step++;
	    step++;
		int curr = findMinVertex(visited, distance, v);
		step++;
		visited[curr] = true;
		step++;
		for(int i = 0 ; i < v ; i++)
        {
            step++;
            if(!visited[i] && adj[curr][i] != 0)
            {
                step++;
                if(distance[i] > distance[curr] + adj[curr][i])
                {
                    step++;
                    distance[i] = distance[curr] + adj[curr][i];
                }

            }

        }

	}

	for(int i = 0 ; i < v ; i++)
	{
		cout << i << " -> " ;
		if(distance[i] == INT_MAX)
			cout << "unreachable" << "\n";
		else
			cout << distance[i] << "\n";

	}
	cout<<"\n No. of steps: "<<step;

	return 0;
}
