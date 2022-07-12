#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double a,b,c,t1,t2,x1,x2,x3,x4,delta,Cdelta;
	cin>>a>>b>>c;
	if(a!=0)
	{
		if(b && c)
		{
			delta= (b*b)-(4*a*c);
			if(delta <0 )
			{
				cout<<"vo nghiem";
				return 0;
			}
			Cdelta=sqrt(delta);
			t1=(-b-Cdelta)/(2*a);
			t2=(-b+Cdelta)/(2*a);
			if(t1>0 && t2>0)
			{
				x1=sqrt(t1);
				x2=-sqrt(t1);
				x3=sqrt(t2);
				x4=-sqrt(t2);
				if(t1==t2)
				  {
				  	cout<<fixed<<setprecision(3)<<x1<<endl;
				cout<<fixed<<setprecision(3)<<x2<<endl;
				   } 
				else
			{	cout<<fixed<<setprecision(3)<<x1<<endl;
				cout<<fixed<<setprecision(3)<<x2<<endl;
				cout<<fixed<<setprecision(3)<<x3<<endl;
				cout<<fixed<<setprecision(3)<<x4<<endl;
			}
			}else if(t1<0 && t2>0 || t1>0 && t2<0)
			{
				(t1>t2)?cout<<fixed<<setprecision(3)<<sqrt(t1)<<endl<<-sqrt(t1):cout<<fixed<<setprecision(3)<<sqrt(t2)<<endl<<-sqrt(t2);
			}else if(t1<0 && t2<0)
			    cout<<"vo nghiem";
			  
		}else if(!b && c)
		{
			if(a>0 && c>0 || a<0 && c<0)
			    cout<<"vo nghiem";
			else if(a>0 && c<0 || a<0 && c>0)
				cout<<fixed<<setprecision(3)<<pow(-c/a,0.25)<<endl<<-pow(-c/a,0.25);
		}else if(b && !c)
		{
				if(a>0 && b>0 || a<0 && b<0)
				    	cout<<fixed<<setprecision(3)<<0.000;
				else if(a>0 && b<0 || a<0 && b>0)
				       	{
				       		cout<<fixed<<setprecision(3)<<0.000<<endl;
				       		cout<<fixed<<setprecision(3)<<sqrt((-b/a))<<endl<<-sqrt((-b/a));
						 }
				
		}
	}else{
	   if(!b && !c) 
	    cout<<"vo so nghiem";
       else if( b && c) 
	    {
	    if(b>0 && c>0 || b<0 && c<0)
			    cout<<"vo nghiem";
		else if(b>0 && c<0 || b<0 && c>0)
				cout<<fixed<<setprecision(3)<<sqrt((-c/b))<<endl<<-sqrt((-c/b));
		}
	   else if(b!=0 && c==0)
	    cout<<fixed<<setprecision(3)<<0.000;
	    else if(!b && c)
	       cout<<"vo nghiem";
	}
	
}


