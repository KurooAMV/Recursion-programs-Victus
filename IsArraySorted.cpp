#include<iostream>
using namespace std;
bool sorted(int arr[], int n){
    if(n==1){return true;
    }
    bool restArray=sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    if(sorted(arr,n)){
        cout<<"The array is sorted."<<endl;
    }
    else{cout<<"The array is not sorted."<<endl;}
    return 0;
}