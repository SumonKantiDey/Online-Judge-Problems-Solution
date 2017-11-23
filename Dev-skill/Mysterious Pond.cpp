#include<bits/stdc++.h>
using namespace std;
 vector<pair<int,string> >vc;
int main()
{
    int a,num,m,tt;
    string str;

    cin>>tt;
    //cout<<endl;
    while(tt--){
    cin>>a;
    for(int i=0; i<a; i++){
            cin>>str>>num;
        vc.push_back(make_pair(num,str));
    }
        sort(vc.begin(),vc.end());
        cout<<vc[a-1].second<<" "<<vc[0].second<<endl;
        vc.clear();

    }

}
