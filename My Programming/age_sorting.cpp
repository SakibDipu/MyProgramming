#include<iostream>
using namespace std;
int main()
{
	int i,j,n,age[2000000],tmp;
	cin>>n;
	while(n!=0){
		for(i=0; i<n; i++){
			cin>>age[i];
		}
		for(i=0; i<n; i++){
			for(j=i+1; j<n; j++){
				if(age[j]<age[i]){
					tmp = age[j];
					age[j] = age[i];
					age[i] = tmp;
				}
			}
		}
		for(i=0; i<n-1; i++){
			cout<<age[i]<<" ";
		}
		cout<<age[i]<<endl;
		cin>>n;
	}
	return 0;
}
