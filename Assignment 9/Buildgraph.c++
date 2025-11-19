// Building a graph 
#include<iostream>
#include<list>
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
				for(int j : l[i])
				{
					cout<<j<<" ";
				}
				cout<<endl;
			}
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
}