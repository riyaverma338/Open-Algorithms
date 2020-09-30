#include<bits/stdc++.h>
 using namespace std;
 //#define rep(i,n) for(ll i=0; i<n; i++)
 #define fastio ios_base::sync_with_stdio(0); cin.tie(0);
 #define ll long long
 const ll MX=10000;
 
 ll dist[MX] ;
ll vis[MX];
vector<ll> primes;
vector<ll> graph[MX];
bool isPrime(ll i)
{
    for(ll j=2; j*j<=i; j++)
    {
        if(i%j==0)return false;
    }
    return true;
}
bool isValid(ll a, ll b)
{
    ll cnt=0;
    while(a>0&&b>0)
    {
        if(a%10==b%10)cnt++;
        
        a/=10;
        b/=10;
    }
    if(cnt==1) return true;
    else return false;
}
void buildGraph()
{
    for(ll i=1000; i<10000;i++)
    {
        if(isPrime(i))
        {
            primes.push_back(i);
        }
    }
    
    for(ll i=0; i<primes.size();i++)
    {
        for(ll j=i+1; j<primes.size(); j++)
        {
            if(isValid(primes[i],primes[j]))
            {
                graph[primes[i]].push_back(primes[j]);
                graph[primes[j]].push_back(primes[i]);
            }
        }
    }
}
void bfs(ll src)
{
    dist[src]=1;
    vis[src]=1;
    
    std::queue<ll> q ;
    q.push(src);
    
    while(!q.empty())
    {
        ll curr=q.front();
        q.pop();
         
        for(ll child:graph[curr])
        {
            if(!vis[child])
            {
		vis[curr]=1;
                dist[child]=dist[src]+1;
                q.push(child);
            }
        }
    }
}
 int main()
 {
     fastio;
     ll T;
     cin>>T;
    // if(T<=100){
     while(T>0){
        
         ll Srng,Erng;
         cin>>Srng>>Erng;
         buildGraph();
         for(ll i=1000; i<10000; i++){dist[i]=-1;
             vis[i]=0;
         }
         
         bfs(Srng);
         
        if(dist[Erng]==-1)
            cout<<"Impossible"<<"\n";
        else
            cout<<dist[Erng]<<"\n";
      T--;   
     }
    // }
     return 0;
 }
