#include<iostream>
#include<string>
using namespace std ;
int main()
{	char gread;
    float num = 0 ;
   float a = 4 , b=3 ,c=2 ,d=1 ,f=0 ;
   float sum  = 0   ; 
   float ssum  = 0 , total = 0;  
do
{	cout<<"  Enter the letter gread ( if want exit use x ): " ;
	cin >>  gread;

	if((gread != 'a' )&& (gread != 'b')&& (gread != 'c')&& (gread != 'd')&& (gread != 'f'))
	{
		cout<< " new try input again " <<  endl ;
	}

	if(gread == 'a')
	{ num = num +1; // is count input gread
	   sum += a ;  
	   cout<< sum << endl ;
	   cout<< num<<  endl ;
	   
	}
	if(gread == 'b')
	{     num = num +1;
	   sum += b ;
	   cout<< sum << endl ;
	   cout<< num<<  endl ;
	
	}

	if(gread == 'c')
	{    num = num +1;
	   sum+= c ;
	   cout<< sum<< endl ;
	   cout<< num<<  endl ;
	  
	}
	if(gread == 'd')
	{    num = num +1;
	   sum += d ;
	   cout<< sum<< endl ;
	 cout<< num<<  endl ;    
	}
	if(gread == 'f')
	{    num = num +1;
	  sum += f ; 
	   cout<< sum<< endl ; 
	   cout<< num<<  endl ;
	}
	
	 
		total = sum ; 
		ssum = total /num ;


}
while((gread != 'x') && (gread!= 'X') ) ;
 
	 
  		 cout<< "Total gread point : " <<total << endl ;
		cout<< "gread :" <<ssum << endl ;


  return 0 ;
}

