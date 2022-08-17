#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter Size of arr :"<<endl;
    cin>>size;
    int myarr[size];
    cout<<"Enter the number elements of arr :"<<endl;
    for(int i=0;i<size;i++){
        cin>>myarr[i];
    }
    cout<<"Without shifting array :";
    for(int i=0;i<size;i++){
        cout<<myarr[i]<<endl;
       
    }
    myarr[size]=myarr[0];

    for(int i=0;i<size;i++){
        myarr[i]=myarr[i+1];
        
    }
    cout<<"After shifting array :"<<endl;
    for(int i=0;i<size;i++){
        cout<<myarr[i]<<endl;
        
    }

    return 0;

}