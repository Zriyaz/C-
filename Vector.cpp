#include <iostream>
#include<vector>
using namespace std;

int main()
{
      int n;
      vector<int> v1;
      for(int i=0;i<5;i++){
        cin>>n;
        v1.push_back(n);
      }
      for(auto i=v1.begin();i!=v1.end();i++)
      cout<< *i<<endl;
      /* Reverse the vector*/

      for(auto i=v1.rbegin();i!=v1.rend();i++)
      cout<<*i<<" ";
      cout<<v1.size();

}