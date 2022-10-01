
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

const int sz=205;

vector<int>adj[sz];
int color[sz];


bool bicolorable(int s) ///BFS
{
    memset(color,-1,sizeof(color));

       color[s]=1;
       queue<int>q;
       q.push(s);

       while(!q.empty())
       {
           int u=q.front();
           q.pop();

           for(auto v:adj[u])
           {
               if(color[v]==-1)
               {
                   if(color[u]==1)
                    color[v]=2;
                   else
                   color[v]=1;
                   q.push(v);
               }

               if(color[u]==color[v])
               {
                   return 0;
               }


           }

       }


    return 1;

}



int main()
{


    int n,e;
    while(cin>>n)
    {
        if(n==0) break;

        for (int i=0; i<sz;i++ ) adj[i].clear();



        cin>>e;

        for (int i=0; i<e;i++ )
        {

            int u,v;
            cin>>u>>v;

              adj[v].push_back(u);
              adj[u].push_back(v);
        }


           if(bicolorable(1))
            cout<< "BICOLORABLE."<<endl;

           else
            cout<< "NOT BICOLORABLE."<<endl;



    }

return 0;
}
