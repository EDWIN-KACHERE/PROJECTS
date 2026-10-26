#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	string names[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
	int length=sizeof(names)/sizeof(names[0]);
	int count = 0;
	for(int i=0;i<length;i++){
		if(names[i][0]=='B'){
		count++;
		cout<<names[i]<<" ";

		}

	}
	cout<<" "<<endl;
	cout<<count<<endl;
	
        return 0; 
}