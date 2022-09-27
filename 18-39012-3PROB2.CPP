#include<iostream>



using namespace std;



int main()
{
   int arry1[10], arry2[10], common[10];
   int i,j,k=0;
   int size1, size2, x, cont=0;
   cout<<"Enter Size of First Array (max.10): ";
   cin>>size1;
   cout<<"Enter "<<size1<<" Elements for First Array: ";
   for(i=0; i<size1; i++)
      cin>>arry1[i];
   cout<<"Enter Size of Second Array (max.10): ";
   cin>>size2;
   cout<<"Enter "<<size2<<" Elements for Second Array: ";
   for(i=0; i<size2; i++)
      cin>>arry2[i];
   for(i=0; i<size1; i++)
   {
      for(j=0; j<size2; j++)
      {
         if(arry1[i]==arry2[j])
         {
            cont = 0;
            for(x=0; x<k; x++)
            {
               if(arry1[i]==common[x])
                  cont++;
            }
            if(cont==0)
            {
               common[k] = arry1[i];
               k++;
            }
         }
      }
   }
   if(k==0)
      cout<<"No common element!";
   else
   {
      cout<<"\nHere are all "<<k<<" Common elements:\n";
      for(i=0; i<k; i++)
         cout<<common[i]<<" ";
   }
   cout<<endl;
   return 0;
}

