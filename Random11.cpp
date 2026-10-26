#include<iostream>
#include<random>
using namespace std;
int main(){
 	random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int>range(1,11);
        int randomm=range(gen);
        cout<<"our random number is:" "";
        cout<<randomm<<endl;
	if(randomm==0)
		cout<<"your subscription has expired!!\n";
	else if(randomm==1){
		cout<<"your subscription will expire soon.Renew now!!\n";
		cout<<"Renew now and save 20%\n";
	}
	else if(randomm <= 5){
		cout<<"your subscription expires in"<<" "<<randomm<<" "<<"days"<<endl;
		cout<<"Renew now and save 10%\n";
	}
	else if(randomm <= 10){
		cout<<"your subscription expires in"<<" "<<randomm<<" "<<" "<<"days"<<endl;
		cout<<"Renew now and save 10%\n";
	}
	else{
		cout<<"you have an active subscription\n";

	}
        return 0; 
}