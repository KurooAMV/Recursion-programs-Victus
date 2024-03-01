#include<iostream>
using namespace std;
void TOH(int n, char S, char D, char H){
    if(n==0){
        return;
    }
    TOH(n-1,S,H,D);
    cout<<n<<" moved from "<<S<<" to "<<D<<endl;
    TOH(n-1,H,D,S);
}
int main(){
    cout<<"Welcome to Tower of hanoi"<<endl;
    int n;
    char S, D, H;
    cout<<"Enter the number of towers: ";
    cin>>n;
    cout<<"Enter the Character for Source: ";\
    cin>>S;
    cout<<"Enter the Character for Desitnation: ";\
    cin>>D;
    cout<<"Enter the Character for helper: ";\
    cin>>H;

    TOH(n,S,D,H);
    return 0;
}