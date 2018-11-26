#include<iostream>
using namespace std;
int main()
{
    int t,n,age[11],i,j,captain;
    cin>>t;
    for(i=0; i<t; i++){
        cin>>n;
        for(j=0; j<n; j++){
            cin>>age[j];
        }
        captain = (n/2);
        cout<<"Case "<<i+1<<": "<<age[captain]<<endl;
    }
    return 0;
}
