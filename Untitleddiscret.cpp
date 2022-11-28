#include<iostream>
#include<stdlib.h>
using namespace std;
void union1(int all[10] ){
   
   cout<<"{";
	for(int i=0;i<10;i++){
		
	int flag = 0;
        for (int j =i+1;j<10;j++)
        {
            
            if (all[i] == all[j])
            {
                flag = 1;
                
                  
               break;
            }
            
        }
        if (flag == 0)
            cout<<" "<<all[i];
    }
    cout<<" }"<<endl;
 }
 void intersection(int all[10]){
 	cout<<"{";
    for(int i=0;i<10;i++){
        for (int j =i+1;j<10;j++)
        {
           if (all[i] == all[j] && i != j)
            {
                cout<<" "<<all[i];
                
                
            }
        }
        
 }
 cout<<" }"<<endl;
}
void difference(int a[5],int b[5]){
	cout<<"{";
  for(int i=0;i<5;i++){
  	int flag=0;
  	for(int j=0;j<5;j++){
  		if(a[i]==b[j]){
  			flag=1;
  			break;
		  }
	  }
	  if(flag==0){
	  	cout<<" "<<a[i];
	  }
  }
  cout<<" }"<<endl;
}
void sydifference(int all[10]){
	cout<<"{";
  for(int i=0;i<10;i++){
  	int flag=0;
  	for(int j=0;j<10;j++){
  		if(all[i]==all[j]&&i!=j){
  			flag=1;
  			break;
		  }
	  }
	  if(flag==0){
	  	cout<<" "<<all[i];
	  }
  }
  cout<<" }";
}
int main(){
	int a[5],b[10],all[10];
	cout<<"Enter for set A:"<<endl;
	for(int i=0;i<5;i++){
		cout<<"For element "<<i+1<<":";
		cin>>a[i];
	}
	cout<<"Enter for set A:"<<endl;
	for(int j=0;j<5;j++){
		cout<<"For element "<<j+1<<":";
		cin>>b[j];
	}
    system("CLS");
    cout<<"Set A is:"<<endl<<"{";
    for(int i=0;i<5;i++){
		cout<<" "<<a[i];
	}
	cout<<"}"<<endl;
	cout<<"Set B is:"<<endl<<"{";
	for(int j=0;j<5;j++){
		cout<<" "<<b[j];
	}
	cout<<"}"<<endl;
	for(int i=0;i<5;i++){
		all[i]=a[i];
	}
	for(int j=0;j<5;j++){
		all[j+5]=b[j];
	}
	cout<<"A U B is:"<<endl;
	union1(all);
	cout<<"A n B is:"<<endl;
	intersection(all);
	cout<<"A - B is:"<<endl;
	difference(a,b);
	cout<<"A "<<char(30)<<" B is:"<<endl;
	sydifference(all);
	return 0;
}