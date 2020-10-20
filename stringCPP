
#include<bits/stdc++.h>
#include<cstring>

using namespace std;

bool twoString(string a, string b)
{
  unordered_map<char, int> word;

  for(int i = 0; i < a.size(); i++)
  {
    word[a[i]] = word[a[i]] + 1;
  }

  for(int i = 0; i < b.size(); i++)
  {
    if(word[b[i]] > 0)
    {
      return true;
    }
  }

  return false;

}

int main()
{
  string a;
  string b;

  cin >> a;
  cin >> b;

  if(twoString(a, b))
  {
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}
