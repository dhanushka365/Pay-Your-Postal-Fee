#include<iostream>
#include<bits/stdc++.h>//use c header to keep space in output
using namespace std;

int display(int x, int y)//display uswing recursion method
{  int q=x;
  int g=y;
	if(q!=0 )
{
	cout<<"5"<<setw(3);
	return display(q-1,y);//recusive
}
  if(y!=0)
  { cout<<"4"<<setw(3);
   return display(q,y-1);//recursive
  }

}

int recap(int e,int f,int g,int p)
{
	     int b=e;
         int a=f;
         int c=p;
         int x=g;
         
         int k=4*a+5*b +4*c;// strong mathematical induction used to get the equation
		if(k==x)
		{  
		
		return display(b,a+c);
		
		// itterative display method
		/* for(int l=1;l<=b;l++)//this for loop is used to print the value
			{
				cout<<"5\t";
				
			}	
			
			for(int y=1;y<=a+c;y++)
			{
				cout<<"4\t";
				
			}	
			
			*/
		}
		else
			{
	          if( k!=x)
	          { 
			   return recap( b,a ,x,c+1);//function called recursively 

	          }
			}
	
}

int main()
{
	
	int x;
	cout<<"enter number greater than 12:"<<endl;
	cout<<"Input:";
	cin>>x;
	while (!cin)//in this part it check weather the user given input is an integer other wise it will execute the loop again with a error meassage.
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "\n\nIncorrect value.Please try again.. \n";
		cout<<"Input:";
     	cin>>x;
	}
	
	if(x<12)
	{
		
		while(x<12)
		{ cout<<"please enter a value above 12.."<<endl;
			cout<<"Input:";
	        cin>>x;
			
	while (!cin)//in this part it check weather the user given input is an integer other wise it will execute the loop again with a error meassage.
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "\n\nIncorrect value.Please try again.. \n";
		cout<<"Input:";
     	cin>>x;
	}
		}
		
		cout<<"Output:";
	    recap(x%4,(3-x%4),x,0);
	}
		
	else
	{
			
	cout<<"Output:";
	recap(x%4,(3-x%4),x,0);
	
    }
	return 0;
}
