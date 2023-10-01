#include <bits/stdc++.h>
using namespace std;
class quick
{
  public:
   long int *arr;
   long int length;
    //  int count =0;
    
    quick(int l)
    {
        length=l;
    }
    ~quick()
    {
        delete []arr;
    }
    void display()
    {
        for(int i=0; i<length; i++)
        {
            cout<<arr[i]<<"  ";
        }
        cout<<endl;
    }


   void input()
    {

        arr = new long int [length];
        cout<<" ENTER THE VALUE OF THE ARRAY "<<endl;

       for(long int i=0; i<length; i++)
       {
         //arr[i]=30+rand()%970;
         cin>>arr[i];
       }
    }


   int Partition(int start,int last)
   {
       int pivot = arr[last];
       int index = start;
       for(int i=start;i<=last-1;i++)
       {
           if(arr[i]<=pivot)
           {
               swap(arr[i],arr[index]);
               index++;
           }
       }
       swap(arr[index],arr[last]);
       return index;
   }


   void quicksort(int start,int last)
   {
       if(start<last)
       {
           int index=Partition(start,last);
           quicksort(start,index-1);
           quicksort(index+1,last);
       }
   }
};
int main()
{
    int ch=100;
    while(ch--)
    {
       long int n;
       cout<<" SIZE OF THE ARRAY"<<endl;
       //n = rand()%5;
      // cout<<n;
       cin>>n;

        quick q(n);

        q.input();
        cout<<"\n ********UNSORTED ARRAY ************"<<endl;
        q.display();
        q.quicksort(0,n-1);
        cout<<"\n ********* SORTED ARRAY********** "<<endl;
        q.display();
    }
}
