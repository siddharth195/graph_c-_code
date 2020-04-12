#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> *v,int a ,int b ,int c)
{
    v[a].push_back(make_pair(b,c));//ex v[0] array contain (3,2)

}
void print_graph(vector<pair<int,int>> *v)
{
    for(int i=0;i<4;i++)
    {
        cout<<"for"<<i<<"------";
        for(int j=0;j<v[i].size();j++)
        {

            cout<<"("<<v[i][j].first<<","<<v[i][j].second<<")   ";

        }
        cout<<endl;
    }
}

int main ()
{
    vector<pair<int,int>> v[4];//VECTOR ARRAY 
    add_edge(v,0,3,2);//ADDING DIRECTING EDGE 
    add_edge(v,0,2,3);//ADDING DIRECTING EDGE 
    add_edge(v,2,3,6);//ADDING DIRECTING EDGE 
    add_edge(v,1,3,10);//ADDING DIRECTING EDGE 
    add_edge(v,1,3,7);//ADDING DIRECTING EDGE 
    print_graph(v);//PRINTING GRAPH
}
