/* 
Half Array Right To Left Print  Than Half Array Left To Right Print
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];

}
for(int i=n/2;i>=0;i--){
    cout<<arr[i]<<"     ";

}
for(int i=n/2;i<n;i++){
    cout<<arr[i]<<"     ";
}
}
