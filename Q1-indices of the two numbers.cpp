#include<bits/stdc++.h>
using namespace std;

pair<int,int> findIndex(vector<int> v,int n,int target){
  unordered_map<int,int> m;
  pair<int,int> res;
  for(int i=0;i<n;i++){
    m.insert({v[i],i});
  }
  for(int i=0;i<n;i++){
    auto x=m.find(target-v[i]);
    if(x!=m.end()){
      res.first=i;
      res.second=x->second;
      return res;
    }
  }
}

int main(){
  vector<int> v={2,7,11,15};
  int target=9;
  int n=v.size();
  pair<int,int> p=findIndex(v,n,target);
  cout<<"Indices are : "<<p.first<<", "<<p.second;
  
 
}
