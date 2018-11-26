#include<iostream>
using namespace std;
int main()
{
	int arr[15],beg,end,mid,i,item,loc;
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:"<<endl;
	for(i=1; i<=10; i++){
		cin>>arr[i];
	}
	cout<<"ENTER THE ITEM YOU WANT TO FIND:"<<endl;
	cin>>item;
	beg = 1;
	end = 10;
	mid = (beg + end)/2;
	while(beg<=end && arr[mid] != item){
		if(arr[mid]>item){
			end = mid - 1;
		}else if(arr[mid]<item){
			beg = mid + 1;
		}
		mid = (beg + end)/2;
	}
	if(arr[mid] == item){
		loc = mid;
	}else{
		loc = 0;
	}
	cout<<"THE LOCATION OF THE DESIRED ELEMENT:"<<loc<<endl;
	return 0;
}
