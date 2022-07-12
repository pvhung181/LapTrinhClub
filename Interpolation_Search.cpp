#include<iostream>
using namespace std;

  int InterpolationSearch(int arr[], int s , int e , int x)
  {
  	int pos;
  	if(s<=e && x <= arr[e] && x >= arr[s])
  	{
  		pos=e + (((x-arr[e])*(e-s))/(arr[e]-arr[s]));
  		
  	if(arr[pos]==x)
  	   return pos;
  	if(arr[pos]>x)
  	   return InterpolationSearch(arr,s,pos-1,x);
  	if(arr[pos]<x)
  	   return InterpolationSearch(arr,pos+1,e,x);
	  }
	else{
		return -1;
	}
  }

int main ()
{
	int x=16,s;
	cin>>x;
   int arr[]={ 10, 12, 13, 16, 18, 19, 20, 21,
                  22, 23, 24, 33, 35, 42, 47 };
    size_t e=sizeof(arr)/sizeof(arr[3]);
     int index = InterpolationSearch(arr, 0, e - 1, x);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found.";
 
    return 0;
}


