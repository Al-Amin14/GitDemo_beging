#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Hello world<<endl;
    vector<int> a={1,0,1,0,1,1,0,1,0,0};
    int i=0,j=a.size()-1;
    cout<<a.size()<<endl;
    while (i<j)
    {
       if(a[i]==0){
        i++;
       }
       else if(a[j]==1){
        j--;
       }
       else{
        swap(a[i],a[j]);
        i++;
        j--;
       }
    }
    cout<<a.size()<<endl;
    for(auto x: a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}       