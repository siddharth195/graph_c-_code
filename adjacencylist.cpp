#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> *v,int a ,int b ,int c)
{
    v[a].push_back(make_pair(b,c));

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
    vector<pair<int,int>> v[4];
    add_edge(v,0,3,2);
    add_edge(v,0,2,3);
    add_edge(v,2,3,6);
    add_edge(v,1,3,10);
    add_edge(v,1,3,7);
    print_graph(v);
}
