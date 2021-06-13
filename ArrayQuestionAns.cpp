/* 
Half Array Right To Left Print  Than Half Array Left To Right Print
10
1 2 3 4 5 6 7 8 9 10
6     5     4     3     2     1     6     7     8     9     10
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
