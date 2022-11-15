#include<iostream>
#include<climits>
using namespace std;

int getMin(int num[] , int n){
    int Min = INT_MAX;
    for(int i=0; i<n; i++){
        if(num[i]<Min){
            Min=num[i];
 }
    }
    // returning min value
    return Min;
}

int getMax(int num[] , int n){
    int Max = INT_MIN;
    for(int i=0; i<n; i++){
        if(num[i]>Max){
           Max = num[i];
        }
    }
    // returning maximum value
}

int main (){
    int size;
    cin>>size;
    int num[100];
    //taking input in array
for (int i=0; i<size; i++){
    cin>>num[i];
}
cout<<"maximum value is "<<getMax(num,size)<<endl;
cout<<"minimum value is "<<getMin(num,size)<<endl;
return 0;
}