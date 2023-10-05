#include<iostream>
using namespace std;
class A{
public :
    int x=3;
     int  number(int arr[]){
         for (int i=0;i<5;i++){
            if (x==arr[i]){
                cout<<i;
                return 0 ;
            }
         }
     }
};
int main(){
 int size;
 cin>>size;
 int arr[size];
 for(int i=0;i<5;i++){
        cin>>arr[i];
 }
 A obj1;
cout<<obj1.number(arr)<<endl;
return 0;
}
