//header files
#include<iostream>
#include<string>
#include<fstream>
#include<cctype>
#include<windows.h>
#include<math.h>
#define N 10
using namespace std;
//Declaration of functions
void registr();
void login();
void BasicCalculations();
void AdvanceCalculations();
void Area();
void GST();
void CI();
void access();
void trignovalue();
void forgot();
class  SimpleInterest//Class for calculating the simple interest 
{
	public:
	   float si;
		SimpleInterest(float r,float pa,int t)
		{
		  si=(r*pa*t)/100;
		  cout<<"Simple interest  of\t"<<t<<"\tyear"<<"at the rate of\t"<<r<<"%\tis\n";
		  cout<<si<<endl;
	    }	
				
};
main()//main 
{   
	system("color 70");
    int choice;
	system("cls");
	cout<<"\t\t\t\tO-----------------------------------------------------------O\n";
    cout<<"\t\t\t                        WELCOME TO ASH CALCULATOR\n";
    cout<<"\tO-----------------------------------------------<>-------------------------------------------------O\n\t\n";
            cout<<"\t\t1.LOGIN"<<"\n\t\n";
            cout<<"\t\t2.REGISTER"<<"\n\t\n";
            cout<<"\t\t3.FORGOT PASSWORD (or) USERNAME"<<"\n\t\n";
            cout<<"\t\t4.Exit"<<"\n\t\n";
	cout<<"\tO-----------------------------------------------<>-------------------------------------------------O\n";
	 while(true)
	 {
            cout<<"\nEnter your choice :";
            cin>>choice;
            if(choice==isalpha(choice))
			{
			     cout<<" Wrong Choice";exit(0);
			}   
			else
            {
                cout<<endl;
                switch(choice)
                {
                    case 1:
                            login();
                            break;
                    case 2:
                            registr();
                            break;
                    case 3:
                            forgot();
                            break;      
                    case 4:
                            cout<<"Thanks for using this Calculator Made by '@Ashmeet Singh'(From Medicaps University)"<<endl;
                            exit(0);
                    default:
                            cout<<"You've made a mistake , Try again..\n"<<endl;
							break;
                }
			}
	 }
}
void access()
{
	system("cls");
      while(true)
	    {
			int ch;//Calculation page Choices
			cout<<"\nO.Basic Calculation's Page ---o\n";
			cout<<"\nO.Statistical & Business Calculation's page ---o\n\t";
			cout<<"\nO.Exit---o\n\t";
			cout<<"\nEnter your choice:-";
			cin>>ch;
			if(ch==1)
			//condition to check the choice is one 
			{          
				BasicCalculations();
			}
			else if(ch==2)
			/*If this condition is true or choice is 2 access the 2 calculation page */
			{ 
			     AdvanceCalculations();
			}
			else if(ch==3)
			{
				main();
			}
			else       
		    {   //Error fix
		    	cout<<"Entered correct choice\n";
		    }
		}
}
void BasicCalculations()//Calculation1
{
	system("cls");
	cout<<"O---------------------------<>-----------------------------O\n";
	cout<<"1.Addition :-"<<"\t\t\t2.Subtraction :-\n\t\n"<<"3.Division :-"<<"\t\t\t4.Multiplication :-\n\t\n"<<"5.Average :-\t"<<"\t\t6.GST at the rate of 18% :-\n\t\n"<<"7.Area :-"<<"\t\t\t8.trignovalue :-\n\t\n"<<"9.Sum:-\t\t"<<"\t\t10.Main Page\n\t\n";
	cout<<"O---------------------------<>-----------------------------O\n";
	while(true)
	{    	
		int choice;
		cout<<"Enter Your Choice For Performing The Calculation->\n";
		cin>>choice;
		if(choice!=10 && choice>10 )
		{
			cout<<"\t-->your Choice is Incorrect  \n";
			cout<<endl<<"\t-->Enter Valid Choice:-\n";
			break;
		}
		else
		{   
			int i,n;
		    long double  a,b,c,d,e;	
			float sum=0.0;   	
		    switch(choice)//switch case for general operation's
		    {                    
		        case 1://Addition
		        	{
						cout<<"Enter Two Number's To ADD\n";
		        		cout<<"Enter first number = ";
		        		cin>>a;
		        		cout<<"Enter second number = ";
		        		cin>>b;
		        		if(a==isalpha(a)|b==isalpha(b))
		        		{
		        			cout<<"You Entred wrong character";exit(0);
		        		}
		        		else
		        		{
		        			cout<<"Answer=\t"<<(a+b)<<endl;
		        		}break;
					}
		        case 2://Subtraction
		        	{
                    	cout<<"Enter Two Number's To Subtract\n";
		        		cout<<"Enter first number = ";
		        		cin>>a;
		        		cout<<"Enter second number = ";
		        		cin>>b;
		        		if(a==isalpha(a)|b==isalpha(b))
		        		{
		        			cout<<"You Entred wrong character";exit(0);
		        		}
		        		else
		        		{
		        			cout<<"Answer = "<<(a-b)<<endl;
		        		}break;
					}
		        case 3://Division
		        	{
						cout<<"Enter The Dividend = ";cin>>a;
		        		if(a==isalpha(a))
		        		{
		        			cout<<"You Entred wrong character";exit(0);
		        		}
		        		else
		        		{   cout<<"Enter the divisor = ";cin>>b;
		        			if(b==isalpha(b))
		        			{
		        				cout<<"You Entred wrong character";exit(0);
		        			}
		        			else{
		        				cout<<"Answer = "<<(a/b)<<endl;
		        			}
		        		}break;
					}
		        case 4://Multiplication
		        	{
						cout<<"Enter first Number =";cin>>a;
		        		if(a==isalpha(a))
		        		{
		        			cout<<"You Entred wrong character";exit(0);
		        		}
		        		else
		        		{   cout<<"Enter second Number =";cin>>b;
		        				if(b==isalpha(b))
		        				{
		        				cout<<"You Entred wrong character";exit(0);
		        				}
		        				else
		        				{
		        					cout<<"Answer = "<<(a*b)<<endl;
		        				}
		        		}break;
					}
		        case 5://Average
				    {
		            	cout<<"Enter how many term's you want to find the Average = ";
		            	cin>>n;
						float arr[n],mean;
		            	if(n==isalpha(n))
		            	{
		            		cout<<"Error";exit(0);
		            	}
		            	else
		            	{
		            		for(int i=0; i<n; ++i)
		            		{
		            			cout<< i+1 << ". Enter number :  ";
		            			cin >> arr[i];
		            			if(arr[i]==isalpha(arr[i]))
		            			{
		            				cout<<"Error";exit(0);
		            			}
		            			else
		            			{
		            				sum += arr[i];
		            			}    
		            		}
		            	}
		                mean= sum / n;
		            	cout<< "Average = " <<mean<<endl;break;
				    }
		        case 6://Gst with rate of 18%
		            {
						double am;//Variable to store amount
                        cout<<"Enter Amount = ";
                        cin>>am;//Taking the INITIANl amount
		        		cout<<"The Amount After Appling GST @ of 18% is = "<<((am*18)/100)<<"\n";
						break;
					}
		        case 7://Area of Circle ,Square,Triangle,rectangle
		            {
				    	    Area();
				    		break;
				    }
		        case 8:trignovalue();break;		 
		        case 9://Sum
				    {
                        cout<<"Enter the numbers of element = ";
                        cin>>n;
						float a[n];
                        for(i=1;i<=n;i++)
                        {
                            cout<<"Enter "<<i<<" Element = ";
                            cin>>a[i];
                            sum+=a[i];
                        }
                        cout<<"This is the sum of all numbers = "<<sum<<endl;
				    	break;
				    }
		        case 10:
				    {  
				        access();
				    	break;
				    }
		        default:cout<<"Enter wrong choice Please Enter correct choice";
				break;
		    }
		}
	}
}
void AdvanceCalculations()//calculation2
{
	system("cls");
	//These are the choice's which user will select to perform the calculation's 
	cout<<"O---------------------------<>-----------------------------O\n";
	cout<<"1.Simpleinterest :-"<<"\t\t2.Mode :-\n\t\n"<<"3.Median:-"<<"\t\t\t4.Standard Deviation :-\n\t\n"<<"5.Mean :-"<<"\t\t\t6.Variance :-\n\t\n"<<"7.Calculate Profit:-"<<"\t\t8.Calculate Loss :-\n\t\n"<<"9.Compound Interest :-"<<"\t\t10.Main Page\n\t\n";
	cout<<"O---------------------------<>-----------------------------O\n";
	while(true)
	{    	
		int choice;
		cout<<"Enter Your Choice For Performing The Calculation->\n";
		cin>>choice;
		if(choice!=10 && choice>10)
		{
			cout<<"\t-->your Choice is Incorrect  \n"<<"\t-->Enter Valid Choice:-\n";
			break;
		}
		else
		{  
		    int i,j,n;
		    float  a,b,c,d,e,f1,f2,h,f0,f;	   
			float sum=0.0,mean,variance=0.0;	
		    switch(choice)//switch case for general operation's
		    {                    
		        case 1://Simple Interest
				    {
				    	cout<<"Enter the Rate = ";
		            	cin>>a;
		            	if(a==isalpha(a))
		            	{
		            		cout<<"You Entred wrong character";exit(0);
		            	}
		            	cout<<"Enter the Principle Amount = ";cin>>b;
		            	if(b==isalpha(b))
		            	{
		            		cout<<"you enterd wrong choice";exit(0);
		            	}
		            	else
		            	{
		            		cout<<"Enter the time according to year = ";
		            		cin>>c;
		            		if(c==isalpha(c))
		            		{
		            			cout<<"you enterd wrong choice";exit(0);
		            		}
		            		else{
		            			SimpleInterest(a,b,c);
		            		}	
		            	}break;
				    }  
		        case 2://Mode
				    {
				    	cout<<"Enter lower limit : ";
                        cin>>c;
                        cout<<"Enter Size of interval : ";
                        cin>>h;
                        cout<<"Enter f0 : ";
                        cin>>f0;
                        cout<<"Enter f2 : ";
                        cin>>f1;
                        cout<<"Enter f3 : ";
                        cin>>f2;
                        a=h*((f1-f0)/(2*f1-f0-f2));
                        b=c+a;
                        cout<<"The mode is = "<<" "<<b<<endl;
				    	break; 
				    }      
		        case 3://median
				    {
                            float median, a[N], t; 
                            cout<<"Enter the number of items= "; 
                            cin>>n;
                            cout<<"\nInput  ("<<n<<") values:"; 
                            for(i=1; i<=n; i++) 
				    		{ 
				    		  cout<<"\nEnter "<<i<<" Value : ";
                              cin>>a[i];
                            }    
                            for(i=1; i<=n-1; i++)
                            {
                              for(j=1; j<=n-1; j++)
                              {
                                if(a[j]<=a[j+1]) {
                                  t=a[j]; a[j]=a[j+1]; a[j+1]=t;
                                }
                                else {
                                    continue;
                                }
                             }
                            }
                            if(n%2 == 0)
                            { 
                            	median=(a[n/2]+a[n/2+1])/2.0; 
                            }
                            
                            else
                            {
                            	median=a[n/2+1]; 
                            }
                            for(i=1; i<=n; i++) 
                            { 
                            	cout<<a[i];
                            	cout<<"\t";
                            }
                            
                            cout<<"\nMedian is = "<<median<<endl;
                             break;
                    }
		        case 4://standard deviation
				    {   
                        cout<<"Enter numbers of elements = ";
                        cin>>n;
                        float val[n];
                        for(i=0;i<n;i++)
                        { cout<<"Enter "<<i+1<<" Value:";
                          cin>>val[i];
                        }
                        float  stdDeviation;
                        for(i = 0; i < n; ++i)
                        sum += val[i];
                        mean = sum/n;
                        for(i = 0; i < n; ++i)
                        variance += pow(val[i] - mean, 2);
                        variance=variance/n;
                        stdDeviation = sqrt(variance);
                        cout<<"The data values are: ";
                        for(i = 0; i < n; ++i)
                        cout<< val[i] <<" ";
                        cout<<endl;
						cout<<"variance "<<variance;
                        cout<<"The standard deviation of these data values is "<<stdDeviation<<endl;
				    	break;
				    }
		        case 5://Mean
		            {
		            	cout<<"Enter how many term's you want to find the Mean = ";
		            	cin>>n;
						float arr[n];
		            	if(n==isalpha(n))
		            	{
		            		cout<<"Error";exit(0);
		            	}
		            	else
		            	{
		            		for(int i=0; i<n; ++i)
		            		{
		            			cout << i+1 << ". Enter number :  ";
		            			cin >> arr[i];
		            			if(arr[i]==isalpha(arr[i]))
		            			{
		            				cout<<"Error";exit(0);
		            			}
		            			else
		            			{
		            				sum += arr[i];
		            			}    
		            		}
		            	}
		                mean= sum / n;
		            	cout << "Mean = " <<mean<<endl;break;
				    }
		        case 6://variance
			        {       
				    	cout<<"Enter numbers of elements = ";
                        cin>>n;
                        float val[n];
                        for(i=0;i<n;i++)
                        { cout<<"Enter "<<i+1<<" Value:";
                          cin>>val[i];
                        }
                        for(i = 0; i < n; ++i)
                        sum += val[i];
                        mean = sum/n;
                        for(i = 0; i < n; ++i)
                        variance += pow(val[i] - mean, 2);
                        variance=variance/n;
                        cout<<"The data values are: ";
                        for(i = 0; i < n; ++i)
                        cout<< val[i] <<" ";
                        cout<<endl;
                        cout<<"The Variance of these data values is "<<variance<<endl;
				    	break;
					}
		        case 7://profit % and profit amount
		            {   
				    	cout<<"Enter  the Selling Price : ";
				    	cin>>a;
				    	cout<<"Enter the Cost Price : ";
				    	cin>>b;
				    	c=a-b;
				    	d=c*100/b;
				    	cout<<d<<"% of profit "<<"\nAnd the amount of profit is = "<<c<<endl;
				    	break;
				    }
		        case 8://Loss
				    {    
				    	cout<<"Enter the Cost Price : ";
				    	cin>>a;
				    	cout<<"Enter the Selling Price : ";
				    	cin>>b;
				    	c=a-b;
				    	d=c*100/a;
				    	cout<<d<<"% of Loss "<<"\nAnd the amount of Loss is = "<<c<<endl;
				    	break;
				    }
		        case 9://Compound Interest
				    {
				    	CI();
						break;
				    } 
		        case 10:
				    {
				    	access();
						break;
				    }
		        default:cout<<"Enter wrong choice Please Enter correct choice";
				     break;
		    }
		}
	}
}
void Area()//Area 
{  
	int ch;
	double a,b;
	system("cls");
	//Info
	cout<<"\tO___________________________________________________________O\n\t\n";
    cout<<"\t1.Area of Circle:-"<<"\t\t2.Area of Square:-\n\t\n"<<"\t3.Area of rectangel:-"<<"\t\t4.Area of Triangle:-\n\t\n"<<"\t5.Main \n"<<endl;
	cout<<"\tO___________________________________________________________O\n\t\n";
	while(true)
	{
	  cout<<"Enter your choice :-\n";
	   cin>>ch;
        if(ch>5)
        {
		      cout<<"Enter Correct Choice\n";
		}
        else
        {
            switch(ch)//Switch case for area operation's
            {           
               	case 1://Area of cirlce
				    {    
				    	cout<<"Enter the radius\n";
               	    	cin>>a;
				    	cout<<"Area of Circle is= "<<(3.14*a*a)<<endl;
				    	break;
			        }      
				case 2://Area of square
				    {     
				    	cout<<"Enter side:-";
				        cin>>a;
				    	cout<<"Area of Square is \n"<<(a*a)<<endl;
				    	break;
				    }	  
			    case 3://Area of rectangle
				    {     
				    	cout<<"Enter the Length:-";
				        cin>>a;
				    	cout<<"Enter width:-";
				    	cin>>b;
				    	cout<<"Area of rectangel is \n"<<(a*b)<<endl;
				    	break;
				    }   
				case 4://Area of triangle
				    {    
				    	cout<<"Enter Height:-";
				        cin>>a;
				    	cout<<"Enter Base:-";
				    	cin>>b;
				    	cout<<"Area of triangle is :-\n"<<(a*b)/2<<endl;
				    	break;
				    }	   
				case 5://calling Basic calculation function
				    {
				    	BasicCalculations();
						break;
				    }
				default:
				        cout<<"Enter correct choice"<<endl;
						break;
			}
		}
	}
}
void trignovalue()//Trigno
{
	int ch;
	double a;
	system("cls");
	cout<<"O___________________________________________________________O\n\t\n";
    cout<<"\t1.Sin()-"<<"\t\t2.Cos():-\n\t\n"<<"\t3.Tan():-"<<"\t\t4.Cot():-\n\t\n"<<"\t5.Cosec()"<<"\t\t6.Sec():-\n\t\n"<<"\t7.main:-"<<endl;
	cout<<"O___________________________________________________________O\n\t\n";
    cout<<"Enter your choice:-\n";
	cin>>ch;
        if(ch>8)
           {
			 cout<<"Enter Correct Choice\n";
		      login();//Calling the main function
		   }
        else
        {
            switch(ch)//Switch case for area operation's
            {            //Cases of switch statement
             	case 1:
				    {
				    	cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<sin(a)<<endl;
				    	break;
				    }
				case 2:
				    {
				    	cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<cos(a)<<endl;
				    	break;
				    }
				case 3:
				    {
			            cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<tan(a)<<endl;
				    	break;
				    }
				case 4:
				    {
				    	cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<atan(a)<<endl;
				    	break;
				    }
				case 5:
				    {
				    	cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<asin(a)<<endl;
				    	break;
				    }
				case 6:
				    {
				    	cout<<"Enter the value ";
				        cin>>a;
				    	cout<<endl<<acos(a)<<endl;
				    	break;
				    }
				case 7:
				    {
				    	BasicCalculations();
				    	break;
				    }
				default : 
				        cout<<"Enter correct choice:-";
				        break;
				
			}
	    }
}
void CI()//compound interest 
{
	float p,r,d,ci;//variabel
	int t;
        cout << "Enter principal : ";
        cin >>p; 
        cout << endl << "Enter rate : ";
        cin >> r; 
        cout << endl << "Enter time (year) : ";
        cin >>t; 
        // Calculate compound interest 
	           d=(1 + r / 100);
               ci= p * pow(d, t);
        cout << endl << "Compound interest : " <<ci<<endl;
}
void login()//login 
{
    int count;//Input username and password
    string user,pass,u,p;
    system("cls");
    cout<<" \n\n                                      please enter the following details\n";
    cout<<"                                       USERNAME :";
    cin>>user;
    cout<<"                                       PASSWORD :";
    cin>>pass;
    ifstream input("C:/DATABASE_Calculator/Information.txt");/*Creating a text file in c drive Folder name(DataBase_Calculator) , File name(Information.txt)*/
    while(input>>u>>p)
    {      
        if(u==user && p==pass)
        {
            count=1;
            system("cls");
        }  
    }
    input.close();//closing the file
    if(count==1)//if count is one this condition becomes true and run the block of code 
    {
		access();
	}    
    else 
    {    //condition false login   
    	cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
    	main();
    }
             
}
void registr()//registration 
{
    string reguser,regpass,ru,rp;
    system("cls");
    cout<<" \n\n                                      please enter the following details\n";
    cout<<"                                       USERNAME :";
    cin>>reguser;
    cout<<"                                       PASSWORD :";
    cin>>regpass;
    ofstream reg("C:/DATABASE_Calculator/Information.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\nRegistration Sucessful\n";
    main();
}
void forgot()
{
        int ch;
        system("cls");
        cout<<"Forgotten ? We're here for help\n";
        cout<<"1.Search your id by username"<<endl;
        cout<<"2.Search your id by password"<<endl;
        cout<<"3.Main menu"<<endl;
        cout<<"Enter your choice :";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int count=0;
                        string searchuser,su,sp;
                        cout<<"\nEnter your remembered username :";
                        cin>>searchuser;
                        
                        ifstream searchu("C:/DATABASE_Calculator/Information.txt");
                        while(searchu>>su>>sp)
                        {
                                if(su==searchuser)
                                {
                                        count=1;
                                }
                        }
                        searchu.close();
                        if(count==1)
                        {
                                cout<<"\n\nHurray, account found\n";
                                cout<<"\nYour password is "<<sp;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"\nSorry, Your userID is not found in our database\n";
                                cout<<"\nPlease kindly contact your system administrator for more details \n";
                                cin.get();
                                cin.get();
                                main();
                        }
                        break;
                }
                case 2:
                {
                        int count=0;
                        string searchpass,su2,sp2;
                        cout<<"\nEnter the remembered password :";
                        cin>>searchpass;
                        
                        ifstream searchp("C:/DATABASE_Calculator/Information.txt");
                        while(searchp>>su2>>sp2)
                        {
                                if(sp2==searchpass)
                                {
                                        count=1;
                                }       
                        }
                        searchp.close();
                        if(count==1)
                        {
                                cout<<"\nYour password is found in the database \n";
                                cout<<"\nYour Id is : "<<su2;
                                cin.get();
                                cin.get();
                                system("cls");
                                main();
                        }
                        else
                        {
                                cout<<"Sorry, We cannot found your password in our database \n";
                                cout<<"\nkindly contact your administrator for more information\n";
                                cin.get();
                                cin.get();
                                main();
                        }
                
                        break;
                }
                
                case 3:
                {
                        cin.get();
                        main();
                }
                default:
                        cout<<"You entered the wrong choice. Kindly try again."<<endl;
                        forgot();
        }
}
