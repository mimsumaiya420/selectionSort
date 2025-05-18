#include<iostream>
using namespace std;


void selection(int arr[],int n){

        for(int i=0;i<n-1;i++){
            int minindex=i;


            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[minindex]){
                    minindex=j;
                }
            }

            if(minindex!=i){
                swap(arr[i],arr[minindex]);
            }
        }




}

void printCode(int arr[],int n){

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }



}


int main(){

    int n;
    cout<<"enter the number of eleemnt: "<<endl;
    cin>>n;
    int arr[n];

     cout<<"enter the array element: "<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }

      cout<<"after sorting: "<<endl;
      selection(arr,n);
      printCode(arr,n);




}
