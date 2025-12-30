#include<iostream>
using namespace std;
int main()
{
	char startvalue;
	char choiceAgain;
	float onlineshopping(void);
	startlevel:
	cout<<"\t\t\t**********PLEASE PRESS S TO START SHOPPING**********"<<endl;
	start:
	cin>>startvalue;
	if(startvalue=='s'||startvalue=='S')
	{
		float totalamount=onlineshopping();
		cout<<"total billamount is  :"<<totalamount;
		shopAgain:
		cout<<"\nDo you want shopping again y,or n"<<endl; 
		cin>>choiceAgain;
		if(choiceAgain=='y'||choiceAgain=='Y')
		{
		goto startlevel;
		
	    }
			else if(choiceAgain=='n'||choiceAgain=='N')
			{
			cout<<"THANKS FOR SHOPPING "<<endl;
		}
		else
		{
			cout<<"you have enter wrong value pleas type s"<<endl;
			goto shopAgain;
		}
	}
	else
	{
		cout<<"you have entered wrong option,please enter s"<<endl;
		goto start;
	}
}
float onlineshopping()
{
	char choice;
	char item;
	long billamount;
    int	quantity;
    cout<<"welcome to online shopping";
    cout<<"please follow these structure"<<endl;
    cout<<"1. Please Enter   M  To Order redmi mobile"<<endl;
    cout<<"3. Please Enter   R  To Order  realme mobile"<<endl;
    cout<<"4. Please Enter   s  To Order  samsung  mobile"<<endl;
   
    cin>>choice;
       //**************mobile*************
       if(choice=='m'||choice=='M')
       {
       mobilelevel:
       cout<<"\t\t\t**********MOBILE DETAILS**********"<<endl;
       cout<<"1.redmi Note 7           :90000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"2.redmi 6 pro price      :8000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"3.redmi 10 price         :12000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"4.redmi note 9 price     :8000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"5.redmi 11 prime price   :11000"<<endl;
       cout<<"--------------------------------\n"<<endl;
	   cout<<"\t\t\t**********PLEASE ENTER YOUR CHOICE**********\n";
	   cin>>item;       
       if(item=='1')
       {
       	cout<<"enter quantity       :";
       	cin>>quantity;
       	billamount=billamount+quantity*90000;
	   }
	   else if(item=='2')
	   {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*8000;
	    }
	    else if(item=='3')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*12000;
	    }
	    else if(item=='4')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*8000;
	    }
	    else if(item=='5')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*11000;
	    }
	    else
		{
	    	cout<<"you have entered wrong option,please type again"<<endl;
	    	goto mobilelevel;
		}
	}
	
	   else if(choice=='s'||choice=='S')
       {
       mobilelevel1:
      cout<<"\t\t\t**********MOBILE DETAILS**********"<<endl;
       cout<<"1.Samsung Galaxy F14               :10000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"2.Samsung Galaxy A23               :17499"<<endl;
       cout<<"--------------------------------\n";
       cout<<"3.Samsung Galaxy 13               :9699"<<endl;
       cout<<"--------------------------------\n";
       cout<<"4.Samsung Galaxy F04              :7499"<<endl;
       cout<<"--------------------------------\n";
       cout<<"5.Samsung Galaxy M33               :16999"<<endl;
       cout<<"--------------------------------\n"<<endl;
	   cout<<"\t\t\t**********PLEASE ENTER YOUR CHOICE**********\n";
	   cin>>item;       
       if(item=='1')
       {
       	cout<<"enter quantity       :";
       	cin>>quantity;
       	billamount=billamount+quantity*10000;
	   }
	   else if(item=='2')
	   {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*17499;
	    }
	    else if(item=='3')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*9699;
	    }
	    else if(item=='4')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*7499;
	    }
	    else if(item=='5')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*16999;
	    }
	    else
		{
	    	cout<<"you have entered wrong option,please type again"<<endl;
	    	goto mobilelevel1;
		}
	}
	 else if(choice=='R'||choice=='r')
       {
       mobilelevel2:
        cout<<"\t\t\t**********MOBILE DETAILS**********"<<endl;
       cout<<"1.Realme Narzo 50A            :10000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"2.Realme 10                   :15000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"3.Realme 10 pro               :16000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"4.Realmenote C33              :8000"<<endl;
       cout<<"--------------------------------\n";
       cout<<"5.Realme 9                    :14000"<<endl;
       cout<<"--------------------------------\n"<<endl;
	   cout<<"\t\t\t**********PLEASE ENTER YOUR CHOICE**********\n";
	   cin>>item;       
       if(item=='1')
       {
       	cout<<"enter quantity       :";
       	cin>>quantity;
       	billamount=billamount+quantity*10000;
	   }
	   else if(item=='2')
	   {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*15000;
	    }
	    else if(item=='3')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*16000;
	    }
	    else if(item=='4')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*8000;
	    }
	    else if(item=='5')
	    {
	   cout<<"enter quantity"<<endl;
       	cin>>quantity;
       	billamount=billamount+quantity*14000;
	    }
	    else
		{
	    	cout<<"you have entered wrong option,please type again"<<endl;
	    	goto mobilelevel2;
		}
	}
	
	return billamount;
       
   
}
	

