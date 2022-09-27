#include<iostream>
using namespace std;


void rvereseArray(int arr[], int start, int end)
{
    if (start >= end)
    return;

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Recursive Function calling
    rvereseArray(arr, start + 1, end - 1);
}



int main()
{

int arr1[]={10,20,30,40,50};
int arr2[]={1,2,3,4,5,6,7,8};
int arr3[13];

 for(int i =0 ; i < 5 ; i++)
 {
     arr3[i]=arr1[i];
 }
 for(int i = 5 ; i<13 ; i++)
 {
     arr3[i]=arr2[i-5];
 }
  cout<<"Merged array is :"<<endl;
 for(int i = 0 ; i<13 ; i++)
 {
     cout<<arr3[i]<<" "<<endl;
     //cout<<endl;
 }
  rvereseArray(arr3, 0, 12);
  cout<<"Reversed Array Is : "<<endl;
  for(int i = 0 ; i<13 ; i++)
 {
     cout<<arr3[i]<<" ";
     //cout<<endl;
 }

}







