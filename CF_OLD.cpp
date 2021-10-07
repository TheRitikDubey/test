#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long
#define pb push_back
#define pii pair<int, int>
#define mod 1000000007
int main()
{
  //Add a comment in this code;
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  int cnt=0;
  if(n<3)
  {
    cout<<n<<endl;
    return 0;
  }
  int ans=0;
  for(int i=2;i<n;i++)
  {
    if(arr[i-1] + arr[i-2] == arr[i])
    cnt++;
    else{
      ans=max(cnt,ans);
      cnt=0;
    }
  }
  ans=max(ans,cnt);
  cout<<ans+2<<endl;
  return 0;
}