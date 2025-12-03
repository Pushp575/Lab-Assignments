// Breadth first search -BFS
#include<iostream>
#include<list>
#include<queue>
using namespace std;
class Graph
{	public:
	int V;
	list <int> *l; // creation of a dynamic array 
	public:
		Graph(int V)
		{
			this->V=V;
			l=new list<int> [V]; // new list creation , size=V
		}
		void Edge(int u,int v)
		{
			l[u].push_back(v); // this is basically for linking the u <-> v
			l[v].push_back(u);
		}
		void print()
		{
			for(int i=0;i<V;i++)
			{
				cout<<i<<"->";
				for(int j : l[i])   // this traverses theorugh the entire list at i th index..
				{
					cout<<j<<" ";
				}
				cout<<endl;
			}
		}	
		// BFs
		// for execution of bfs we need :- A queue to store the vertex values , a array to store the marked vertex and finally we print it
	void bfs()
	{
		queue <int> Q;
		char arr[V];
		Q.push(0);// We start initially from the zeroth vertex
		arr[0]='Y';
		while(Q.size()>0)
		{
			int u=Q.front();// u will be the first value in the quee
			
			Q.pop();// pop that value to compare further
			cout<<u<<" ";
			// now we will compare agar neighbour visited nahi hai mark it visited and push in the queus
			
			for(int v:l[u])// v stores all the neighbours of u
			{
				if(arr[v]!='Y')
				{
					{
						arr[v]='Y';
						Q.push(v);
					}
				}
			}
		}
		
	}
	//Dfs ke liye we r creating 2 funciton ; ek mainh oga jisme pura execution portion hoga and ek base jha se hum parameters pass kr re
	//dfs mei basically pehla pura traversal hota nd then jo brancehs hai uspe jate
	void dfs_main(int u,char arr[])
	{
		cout<<u<<" ";
		arr[u]='Y';
		for(int v:l[u])
		{
			if(arr[v]!='Y')
			{
				dfs_main(v,arr);//recursive call k re to backtrace
			}
		}
	}
	void dfs_base()
	{
	    int src=0;
	    char arr[V];
	    dfs_main(src,arr);//passing the parameters
	}
};
int main ()
{
	Graph g(5);
	g.Edge(0,1);
	g.Edge(1,3);
	g.Edge(1,2);
	g.Edge(2,4);
	g.Edge(2,3);
	g.print();
	cout<<"The bfs is:";
	g.bfs();
	cout<<endl<<"the dfs is:";
	g.dfs_base();

}