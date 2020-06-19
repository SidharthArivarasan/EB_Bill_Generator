#include<iostream>
using namespace std;
class info 
{
private:
char no[10];
char name[30];
public:
void getcust () 
{
cout << "Enter Customer Name: ";
cin >> name;
cout << "Enter Phone Number: ";    
cin >> no;
} 
void printcust () 
{    
cout << "Customer Name: " << name << "\n";
cout << "Phone Number: " << no << "\n";
} 
};
class details:public info 
{
public:
float unit, bill;
public:
void getdetails ();
int calcdetails () 
{  
if (unit <= 100)  
bill = unit * 1.50;    
else if (unit <= 200)      
bill = 100 * 1.50 + (unit - 100) * 2;
else if (unit <= 400)
bill = 100 * 1.50 + 200 * 2 + (unit - 200) * 2.50;
else if (unit <= 900)      
bill = 100 * 1.50 + 200 * 2 + 400 * 2.50 + (unit - 400) * 3;    
cout << "Generating bill...\n";
return bill;  
}
void putdetails () 
{
cout << "Units Consumed: " << unit;
} 
};
void details::getdetails () 
{  
cout << "Number of units consumed: ";
cin >> unit;
} 
class pay
{
public:double ch, doe, cvv, acc;
char pw, cardno[16];
public:
void display () 
{ 
cout << "1.Cash\n" << "2.Credit/Debit Card\n" << "3.Net Banking\n";
} 
void options () 
{ 
cout << "Enter your choice: ";
cin >> ch;
if (ch == 1)  
cout <<"\nPlease visit your nearest EB Office and pay the bill before 15th of this month. Thank you!"; 
else if (ch == 2) 
{
cout << "Enter your Card No: ";	
cin >> cardno;	
cout << "\nEnter the Date of Expiry(mmyy): ";	
cin >> doe;	
cout << "\nEnter the CVV: ";	
cin >> cvv;	
cout << "\n" << "\n";	
cout << "Payment Successfull!\n";
cout << "Thanks for paying the bill";      
}    
else if (ch == 3)      
{	
cout << "\nEnter your Account No: ";	
cin >> acc;	
cout << "\nPassword :";	
cin >> pw;	
cout << "\n" << "\n";	
cout << "Payment Successfull!\n";	
cout << "Thanks for paying the bill";      
}  
}
};
int main () 
{
int c;  
cout << "            Electricity Bill Generator           \n";  
cout << "\n";  
details d;  
d.getcust ();  
d.getdetails ();  
c = d.calcdetails ();  
cout << "\nYour bill amount is Rs." << c << "\n";  
cout << "\n   Payment Method   \n";  
pay p;  
p.display ();  
p.options ();  
cout << "\n" << "\n" << "\n";  
cout << "            Electricity Bill Receipt            \n";  
d.printcust ();  
d.putdetails ();  
cout << "\nBill Amount: Rs." << c << "\n";  
cout << "Status: Paid\n";  
cout << "EB Officer Signature(If Cash): \n";  
cout << "\n" << "\n";  
cout << "************THANK YOU************";
return 0;
}


 
 
 
