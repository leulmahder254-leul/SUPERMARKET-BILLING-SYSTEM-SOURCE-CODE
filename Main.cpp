#include <iostream> // header
#include<fstream>  //header
using namespace std;
class supermarket // base class
{
public:
string item_name; // data type
float price;
void showproduct(); // member function
void customer();
void addproduct();
}; 
class drink:public supermarket // sub class of a base class
{
public:
void softdrink();
void alchol();
void cosmotics();
};
class food:public supermarket // sub class of a base class
{
public:
void biscut();
void meat();
void ingredient();
};
class customer:public supermarket // sub class of a base class
{
string name;
int phone;
float bill_money;
public:
void getData(); // to enter information of customer
void display(); // to display of customer
};
void drink::softdrink() // definition of sub class of drink
{
int q;
cout<<"\t\tchoose you wanted softdrink:" << endl;
cout<<"\t1.Cocacola:"<< endl;
cout<<"\t2.Sprite:"<<endl;
cout<<"\t3.Fanta:"<<endl;
cout<<"\t4.Mirinda:"<<endl;
cin>>q;
if (q==1) 
{
cout <<"\t\tselected cocacola:price 20 ETB" << endl;
}
else if (q==2) 
{
cout <<"\t\tselected sprite:price 18 ETB" << endl;
}
else if  (q==3) 
{
cout <<"\t\tselected fanta:price 20 ETB" << endl;
}
else if (q==4) 
{
cout << "\t\tselected mirinda:price 18 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}
void drink::alchol()
{
int n;
cout<<"\t\tchoose you wanted alchol:" << endl;
cout<<"\t1.Whesky"<<endl;
cout<<"\t2.Gin"<<endl;
cin>>n;
if(n==1) 
{
cout<<"\tselected whesky:price 200 ETB" << endl;
}
else if (n==2) 
{
cout<<"\tselected lemon liquor:price 78 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}
void food::biscut() 
{
int d;
cout<<"\tchoose you wanted biscut:" << endl;
cout<<"\t1.Cappuccino:"<<endl;
cout<<"\t2.Hibye:"<<endl;
cout<<"\t3.Glory:"<<endl;
cin>>d;
if (d==1) 
{
cout << "\tselected cappuccino:price 5 ETB" << endl;
}
else if (d==2) 
{
cout << "\t\tselected hibye:price 6 ETB" << endl;
}
else if (d==3) 
{
cout << "\t\tselected glory:price 3 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}
void food::meat() 
{
int y;
cout<< "\t\tchoose you wanted meat:" << endl;
cout<< "\t\t1...stock meat\n\t\t2...fish meat" << endl;
cin>>y;
if (y==1) 
{
cout << "\t\tselected stock meat:price 200 ETB" << endl;
}
else if (y==2) 
{
cout << "\t\tselected fish meat:price 110 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}
void food::ingredient() 
{
int x;
cout << "choose you wanted ingredient:" << endl;
cout << "1...Knorr\n2...Idione salt" << endl;
cin >> x;
if (x == 1) 
{
cout << "selected Knorr:price 20 ETB" << endl;
}
else if (x == 2) 
{
cout << "selected Idione salt:price 30 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}
class cosmotics:public supermarket //sub class
{
public:
void shampo();
void facial_cosmotics();
void dental_cosmotics();
};
void cosmotics::shampo()
{
int e;
cout<<"\t\tchoose you wanted shampo:" << endl;
cout<<"\t1.Dry shampo:"<<endl;
cout<<"\t2.Conditioner shampo:"<<endl;
cout<<"\t3.Purple shampo:"<<endl;
cin>>e;
if(e==1) 
{
cout<<"\tselected Dry shampo:price 90 ETB" << endl;
}
else if (e==2) 
{
cout<<"\tselected Conditioner:price 78 ETB" << endl;
}
else if(e==3)
{
cout<<"\tselected Purple shampo:price 78 ETB" << endl;
}
else
{
cout << "\a INVALID ENTERY" << endl;
}
}
void cosmotics::facial_cosmotics()
{
int k;
cout<<"choose you wanted facial_cosmotics:" << endl;
cout<<"\t1.Make up:"<<endl;
cout<<"\t2.Powder" << endl;
cin >> k;
if (k == 1) 
{
cout<<"selected Make up:price 100 ETB" << endl;
}
else if (k==2) 
{
cout << "selected Powder:price 200 ETB" << endl;
}
else 
{
cout << "\a INVALID ENTERY" << endl;
}
}	
void customer::getData()
{
ofstream out("costumer.txt",ios::app);
{
cout<<"Enter your name:"<<endl;
cin>>name;
out<<"Enter your name"<<name<<endl;
cout<<"Enter your phone number:"<<endl;
cin>>phone;
out<<"Enter you phone"<<phone<<endl;
cout<<"Enter your bill total:"<<endl;
cin>>bill_money;
out<<"Enter your bill total"<<bill_money<<endl;
}
out.close();
}
void customer::display()
{
ofstream out("costumer.txt",ios::app);
{
cout<<"customer name:"<<name<<endl;
out<<"custome name"<<name<<endl;
cout<<"customer phone number:"<<phone<<endl;
out<<"customer phne number"<<phone<<endl;
cout<<"customer bill money:"<<bill_money<<endl;
out<<"customer bill money"<<bill_money<<endl;
}
out.close();
}
void supermarket::addproduct() // definition of member function of base class
{
cout<<"\t\tEnter the name of the product:";
cin>>item_name;
cout<<"\t\tEnter the price of the product:";
cin>>price;
}
void supermarket::showproduct() // definition of member function of base class
{
cout<<"\t\tProduct name:"<<item_name<<endl;
cout<<"\t\tProduct price:"<<price<<endl;
}
int main() 
{   cout<<"\t********************************************************* "<<endl;
	cout<<"\t** MENSCHEN FUR MENSCHEN                  ** "<<endl;
	cout<<"\t** AGRO TECHNICAL AND TECHNOLOGY COLLEGE         ** "<<endl;
	cout<<"\t** DEPARTMENT OF ELECTRICAL AND ELECTRONICS TECHNOLOGY:** "<<endl;
	cout<<"\t  * SUPER MARKET BILLING SYSTEM PROJECT    * "<<endl;
	cout<<"\t PREPARED BY:";
	cout<<"\n\t  1. LEUL MAHDER";

customer sc;
drink d;            // object of sub class drink
food f;            // object of sub class food
cosmotics c;      // object of sub class cosmotics
supermarket s;  // object of base class supermarket
int choice;   //DICLARIATION OF CHOICE AS AN INTEGER
do 
{
cout<<"\n\t\tWELCOME TO OUR SUPERMARKET"<<endl;
cout<<"\t\t\t1. DRINKS"<<endl;
cout<<"\t\t\t2. FOODS"<<endl;
cout<<"\t\t\t3. COSMETICS"<<endl;
cout<<"\t\t\t4. CUSTOMER"<<endl;
cout<<"\t\t\t5. ADMIN"<<endl;
cout<<"\t\t\t6. EXIT"<<endl;
cout<<"\t\t\tPlease select an option:(1-6)"<<endl;
cin>>choice;

switch (choice) 
{
case 1:
{
int q1;
cout<<"\t\tchoose you wanted softdrink or alchol:" << endl;
cout<<"\t1.Softdrink:"<< endl;
cout<<"\t2.Alchol:"<<endl;
cin>>q1;
if(q1==1)
{
d.softdrink(); // calling member function of sub class drink
}
else if(q1==2)
{
d.alchol(); //calling member function of sub class drink
}
else
{
cout << "\a INVALID ENTERY" << endl;
}
break;
}
case 2:
{
int q2;  //private data member 
cout<<"\t\tchoose you wanted biscut,meat or ingredient:" << endl;
cout<<"\t1.Biscut:"<< endl;
cout<<"\t2.Meat:"<<endl;
cout<<"\t3.Ingredient:"<<endl;
cin>>q2;
if(q2==1)
{
f.biscut(); // calling member function of sub class food
}
else if(q2==2)
{
f.meat();   //calling member function of sub class food
}
else if(q2==3)
{
f.ingredient();//calling member function of sub class food
}
else
{
cout << "\a INVALID ENTERY" << endl;
}
break;
}
case 3:
{
int q3; //private data member
cout<<"\t\tchoose you wanted shampo,facial_cosmotics or dental_cosmotics:" << endl;
cout<<"\t1.Shampo:"<< endl;
cout<<"\t2.Facial_cosmotics:"<<endl;
cout<<"\t3.Dental_cosmotics:"<<endl;
cin>>q3;
if(q3==1)
{
c.shampo(); // calling member function of sub class cosmotics
}
else if(q3==2)
{
c.facial_cosmotics(); //calling member function of sub class cosmotics
}
else if(q3==3)
{
cout<<"\t\tselected dental_cosmotics:price 50 ETB" << endl;
}
else
{
cout << "\a INVALID ENTERY" << endl;
}
break;
}
case 4:
{
int q4;
cout<<"\t\tchoose you wanted to fill customer information:" << endl;
cout<<"\t1.GetData:"<< endl;
cout<<"\t2.Display:"<<endl;
cin>>q4;
if(q4==1)
{
sc.getData(); // calling member function of sub class customer
}
else if(q4==2)
{
sc.display();
}
break;
}
case 5:
{
int ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9,ch10; //choice
cout<<"\t\tEnter the password:";
cin>>ch1;
if(ch1==1234)
{
cout<<"\t\t1.Add new product"<<endl;
cout<<"\t\t2.Remove product"<<endl;
cout<<"\t\t3.Modify product"<<endl;
cout<<"\t\t4.Display product"<<endl;
cin>>ch2;
switch(ch2)
{
case 1:
{
cout<<"\t\t\tEnter the category:"<<endl;
cout<<"\t\t\t1. Soft drinks"<<endl;
cout<<"\t\t\t2. Foods"<<endl;
cout<<"\t\t\t3. Cosmetics"<<endl;
cin>>ch3;
switch(ch3)
{
case 1:
{
ofstream out("softdrink.txt",ios::app); //to restore soft drink added
{
cout<<"\t\t\tEnter the name of the soft drink:";
cin>>s.item_name;
out<<"name of soft drink"<<s.item_name<<endl;
cout<<"\t\t\tEnter the price of the soft drink:";
cin>>s.price;
out<<"price of soft drink"<<s.price<<endl;
}
out.close();
break;
}
case 2:
{
ofstream out("food choice.txt",ios::app); //to restore food added
{
cout<<"\t\t\tEnter the name of the food:";
cin>>s.item_name;
out<<"food choice"<<s.item_name<<endl;
cout<<"\t\t\tEnter the price of the food:";
cin>>s.price;
out<<"food price"<<s.price<<endl;
}
out.close();
break;
}
case 3:
{
ofstream out("cosmetic.txt",ios::app);//to restore cosmetics added
{
cout<<"\t\t\tEnter the name of the cosmetic:";
cin>>s.item_name;
out<<"cosmotic name:"<<s.item_name<<endl;
cout<<"\t\t\tEnter the price of the cosmetic:";
cin>>s.price;
out<<"cosmotic price"<<s.price<<endl;
}
out.close();
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
break;
}
case 2:
{
cout<<"\t\t\tEnter the category:"<<endl;
cout<<"\t\t\t1. Soft drinks"<<endl;
cout<<"\t\t\t2. Foods"<<endl;
cout<<"\t\t\t3. Cosmetics"<<endl;
cin>>ch4;
switch(ch4)
{
case 1:
{
cout<<"\t\t\tEnter the name of the soft drink to be removed:";
cin>>s.item_name;
break;
}
case 2:
{
cout<<"\t\t\tEnter the name of the food to be removed:";
cin>>s.item_name;
break;
}
case 3:
{
cout<<"\t\t\tEnter the name of the cosmetic to be removed:";
cin>>s.item_name;
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
break;
}
case 3:
{
cout<<"\t\t\tEnter the category:"<<endl;
cout<<"\t\t\t1. Soft drinks"<<endl;
cout<<"\t\t\t2. Foods"<<endl;
cout<<"\t\t\t3. Cosmetics"<<endl;
cin>>ch5;
switch(ch5)
{
case 1:
{
cout<<"\t\t\tEnter the name of the soft drink to be modified:";
cin>>s.item_name;
cout<<"\t\t\tEnter the new price of the soft drink:";
cin>>s.price;
break;
}
case 2:
{
cout<<"\t\t\tEnter the name of the food to be modified:";
cin>>s.item_name;
cout<<"\t\t\tEnter the new price of the food:";
cin>>s.price;
break;
}
case 3:
{
cout<<"\t\t\tEnter the name of the cosmetic to be modified:";
cin>>s.item_name;
cout<<"\t\t\tEnter the new price of the cosmetic:";
cin>>s.price;
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
break;
}
case 4:
{
cout<<"\t\t\tEnter the category:"<<endl;
cout<<"\t\t\t1. Soft drinks"<<endl;
cout<<"\t\t\t2. Foods"<<endl;
cout<<"\t\t\t3. Cosmetics"<<endl;
cin>>ch6;
switch(ch6)
{
case 1:
{
cout<<"\t\t\tThe available soft drinks are:"<<endl;
cout<<"\t\t\t1. Cocacola:price 20 ETB"<<endl;
cout<<"\t\t\t2. Sprite:price 18 ETB"<<endl;
cout<<"\t\t\t3. Fanta:price 20 ETB"<<endl;
cout<<"\t\t\t4. Mirinda:price 18 ETB"<<endl;
break;
}
case 2:
{
cout<<"\t\t\tThe available foods are:"<<endl;
cout<<"\t\t\t1. Cappuccino:price 5 ETB"<<endl;
cout<<"\t\t\t2. Hibye:price 6 ETB"<<endl;
cout<<"\t\t\t3. Glory:price 3 ETB"<<endl;
cout<<"\t\t\t4. Stock meat:price 200 ETB"<<endl;
cout<<"\t\t\t5. Fish meat:price 110 ETB"<<endl;
cout<<"\t\t\t6. Knorr:price 20 ETB"<<endl;
cout<<"\t\t\t7. Idione salt:price 30 ETB"<<endl;
break;
}
case 3:
{
cout<<"\t\t\tThe available cosmetics are:"<<endl;
cout<<"\t\t\t1. Dry shampo:price 90 ETB"<<endl;
cout<<"\t\t\t2. Conditioner:price 78 ETB"<<endl;
cout<<"\t\t\t3. Purple shampo:price 78 ETB"<<endl;
cout<<"\t\t\t4. Make up:price 100 ETB"<<endl;
cout<<"\t\t\t5. Powder:price 200 ETB"<<endl;
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
}
else
{
cout << "\a INVALID PASSWORD" << endl;
}
break;
}
case 6:
{
cout<<"\t\t\tTHANK YOU FOR COMING OUR SUPERMARKET"<<endl;
break;
}
default:
{
cout << "\a INVALID ENTERY" << endl;
break;
}
}
} while (choice != 6);
return 0;
} 

