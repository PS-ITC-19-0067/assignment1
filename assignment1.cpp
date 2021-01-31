#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
	label:
	//declaring variables	
	string nameOfcustomer;
	string items;
	string item1="printer";
	string item2="phone";
	string item3="table";
	int vat=12;
	double ID;
	double amountOwe;
	int quantityOfitem;
    string i;
	
	
    //promt a user to input a data
	cout<<"Enter your name"<<endl;
	getline(cin,nameOfcustomer);
	cout<<""<<endl;

		cout<<"Enter your unique id"<<endl;
	cin>>ID;
	//valdating the customers ID
	while(ID!=1 && ID!=2&&ID!=3&&ID!=4&&ID!=5&&ID!=6&&ID!=7&&ID!=8&&ID!=9){
	    cout<<"!!! invalid id"<<endl;
		cout<<"the ID should be from 1-9"<<endl;
		cout<<""<<endl;
		cout<<"ENTER ID AGAIN"<<endl;
		cin>>ID;
	}
	
	//displaying some spaces to make the code clearer.
	cout<<" "<<endl;
	cout<<" "<<endl;
	
	//displaying the products in stock
	cout<<"   PRODUCTS AND THEIR PRICES"<<endl;
	cout<<""<<endl;
	cout<<"PRODUCTS                 PRICE"<<endl;
	cout<<"                             "<<endl;
	cout<<"printer --------------- ghc350"<<endl;
	cout<<"phone ----------------- ghc200"<<endl;
	cout<<"table ----------------- ghc50"<<endl;
	
	//displaying a space 
    cout<<""<<endl;
    
	//user enters the item she/he want to purchase
	cout<<"Enter what you want to buy(printer, phone, table)"<<endl;
	cin>>items;
	
		//validating the input
		while(items!=item1 && items!=item2 && items!=item3){
		cout<<"!!!!Error, wrong input"<<endl;
		cout<<"Enter the item again(printer, phone and table)"<<endl;
		 cin>>items;
			}
	//displaying a space	
	cout<<""<<endl;
	//getting the quatity of item from the user
		cout<<"Enter the quantity you want to buy"<<endl;
	cin>>quantityOfitem;
	//validating the quantity
	while(quantityOfitem<0){
		cout<<"Quantity cannot be a negative number"<<endl;
		cout<<"Enter the quantity again"<<endl;
		cin>>quantityOfitem;
	}
       cout<<""<<endl;
       
       //displaying item and its quantity entered by the user
	   cout<<"  You entered "<<quantityOfitem<<" quantity of "<<items<<endl;
 	   cout<<""<<endl;
 	   
	   //calculating the cost of the product
	if(items==item1){
		amountOwe=(350*quantityOfitem)+vat;
	}
	   else if(items==item2){
		amountOwe=(200*quantityOfitem)+vat;
	}else
	    amountOwe=(50*quantityOfitem)+vat;
	//displaying what the user owe
	cout<<"PLEASE YOU OWE AN AMOUNT OF:  GHC "<<amountOwe<<endl;
	cout<<"                                "<<endl;
	cout<<"                                "<<endl;
	
	
	//receipt preparation
	cout<<"        RECEIPT           "<<endl;
	cout<<". NAME OF CUSTOMER    "<< nameOfcustomer<<endl;
	cout<<". UNIQUE ID             "<<ID<<endl;
	cout<<". ITEM BOUGHT           "<<items<<endl;
	cout<<". QUANTITY BOUGHT       "<<quantityOfitem<<endl;
	cout<<". VAT AMOUNT            "<<vat<<endl;
	cout<<". TOTAL COST            GHC "<<amountOwe<<endl;
	cout<<"        THANK YOU       "<<endl;	
	cout<<""<<endl;
    cout<<""<<endl;	
  
		
	cout<<"do you want to calculate again"<<endl;
	cout<<"press yes or Yes to calculate ' no'to cancel"<<endl;
	cin>>i;
	
	if(i=="yes"||i=="YES")
	   goto label;	
		
	return 0;
}
