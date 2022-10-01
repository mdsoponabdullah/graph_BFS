
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;


const double PI = acos(-1);


#define PB push_back
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (abs(a*b)/gcd(a,b))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int sz=1e4+123;

  vector<int>adj[sz];
  int  state[sz];






  void BFS(int x)
  {

       state[x]=1;

       queue<int>q;
        q.push(x);

       int u ;

       while(!q.empty())
       {
           u=q.front();
           q.pop();
           state[u]=2;
           cout<<u<<" ,";



           for(auto v:adj[u])
           {
               if(!state[v])
               {
                  q.push(v);
                  state[v]=1;
               }

           }

       }




  }



int main()
{


    int node,edge;
    cin>>node>>edge;

    for (int i=0; i<edge;i++ )
    {

        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);



    }

    int x;
    cin>>x;

    BFS(x);

    cout<<endl;




return 0;
}

/*

 5 7
 1 2
 1 4
 2 4
 2 5
 2 3
 5 4
 5 3
1


*/
