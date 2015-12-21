#include <bits//stdc++.h>

using namespace std;

#define PI 3.1416
#define MX 1000000
#define INF 99999999
#define pb push_back

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef map<string, int> mp;

int main()
{
    int test, kase = 0;

    cin>>test;
    while(test--){
    stack<string>f, b;
    string s = "http://www.lightoj.com/", command, str;
    b.push(s);
            printf("Case %d:\n", ++kase);
        while(cin>>command && command!="QUIT") {
                if(command == "VISIT") {
                    cin>>str;
                    b.push(str);
                    cout<<b.top()<<endl;
                    while(!f.empty()){
                        f.pop();
                    }
                }
                else if(command == "BACK") {
                    if(b.size() == 1){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        f.push(b.top());
                        b.pop();
                        cout<<b.top()<<endl;
                    }
                }
                else{
                    if(f.empty()){
                        cout<<"Ignored"<<endl;
                    }
                    else{
                        b.push(f.top());
                        cout<<f.top()<<endl;
                        f.pop();
                    }
                }

        }
    }
    return 0;
}

