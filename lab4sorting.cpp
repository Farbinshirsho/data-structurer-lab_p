#include <iostream>

using namespace std;

int main()
{
    int arr_length;
    cout<<"Declare array size"<<endl;
    cin>>arr_length;
    int arr[arr_length];
    int min_i =0;
    int temp=0;
    cout<<"give input"<<endl;

    for(int i=0; i<arr_length;i++){
        cin>>arr[i];
    }
    cout<<endl<<"sorted values"<<endl;

    for(int i=0; i<arr_length; i++){
        min_i = i;

        for(int j=i+1; j<arr_length; j++){
            if(arr[min_i] > arr[j]){
                min_i = j;
            }
        }

        temp = arr[min_i];
        arr[min_i] = arr[i];
        arr[i] = temp;
    }

    for(int i=0; i<arr_length;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}




