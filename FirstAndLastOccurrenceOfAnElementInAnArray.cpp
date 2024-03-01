#include<iostream>
using namespace std;

int FirstOcc(int arr[], int n, int i, int key){
    if(i==n){return -1;}
    if(arr[i]==key){return i;}
    return FirstOcc(arr,n,i+1,key);
}

int LastOcc(int arr[], int n, int j, int key){
    if(j==0){return -1;}
    if(arr[j]==key){return j;}
    return LastOcc(arr,n,j-1,key);
}

//int Lastocc(int arr[], int n, int i, int key){
//    int restArray=Lastocc(arr,n,i+1,key);
//    if(restArray!=-1){
//        return restArray;
//    }
//    if(arr[i]==key){
//        return i;
//    }
//    return -1;
//}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searches: ";
    cin>>key;

    cout<<endl;
    
    int i=0, j=n;
    int first=FirstOcc(arr,n,i,key);
    int last=LastOcc(arr,n,j,key);
    // int last=Lastocc(arr,n,i,key);
    
    if(first==-2 && last==-2){cout<<"Element not in the array.";}
    else{
        cout<<"Element present in the array.";
        cout<<"The First occurrence of "<<key<<" is: "<<first<<endl;
        cout<<"The last occurrence of "<<key<<" is: "<<last<<endl;
    }


    return 0;
}