#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<pair<int,int>> *v,int a ,int b ,int c)
{
    v[a].push_back(make_pair(b,c));

}
int bfs(vector<pair<int,int>>*v1)
{int s;
  vector<int> v(4,-1);
  queue<int> q;
  q.push(0);
  v[0]=0;
  while(!q.empty())
  {
      int p=q.front();
      q.pop();
      cout<< p<<"    ";
      v[p]=1;
      for(int i=0;i<v1[p].size();i++)
      {
          if(v[v1[p][i].first]==0)
            s=1;
          if(v[v1[p][i].first]!=1){
            q.push(v1[p][i].first);
            v[v1[p][i].first]=0;
          }

      }
  }
  return s;

}

int main ()
{
    vector<pair<int,int>> v[4];
    add_edge(v,0,3,2);
    add_edge(v,0,1,10);
    add_edge(v,0,2,3);
    add_edge(v,2,3,6);

    add_edge(v,1,3,7);
    int k=bfs(v);
    if(k==1)
        cout<<"THIS GRAPH HAS CYCLE";
    else
        cout<<"THIS GRAPH HAS NO CYCLE";
}
