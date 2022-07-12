#include<iostream>
using namespace std;

  void ngay(int &d,int &m,int &y)
   {
   	d=d+1;
  if(y%4==0 || y%100==0)
  {
  	switch (m){
  		case 2:
  			{
  				if(d>29)
  				  {
  				  	d=1;
  				  	m++;
					}
			  }
			  break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		   {
		         if(d>31)
		          {
  				  	d=1;
  				  	m++;
					}
	        	}
	          break;
	    case 4:
	    case 6:
	    case 9:
	    case 11:
	    	{
	    		if(d>30)
	    		  {
  				  	d=1;
  				  	m++;
					}
			}
			  break;
	  }
  }else{
  		switch (m){
  		case 2:
  			{
  				if(d>28)
  				 {
  				  	d=1;
  				  	m++;
					}
			  }
			  break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		   {
		         if(d>31)
		           {
  				  	d=1;
  				  	m++;
					}
	        	}
	          break;
	    case 4:
	    case 6:
	    case 9:
	    case 11:
	    	{
	    		if(d>30)
	    		 {
  				  	d=1;
  				  	m++;
					}
			}
			  break;
}
}
   if(m==13)
     {
     	m=1;
     	y=y+1;
	 }
    cout<<d<<"/"<<m<<"/"<<y<<endl;
   }
int main()
{
  int d,m,y;
  char x='/' ;
  cin >>d>>x>>m>>x>>y;
  int n;cin>>n;
  while(n--)
     ngay(d,m,y);
}

