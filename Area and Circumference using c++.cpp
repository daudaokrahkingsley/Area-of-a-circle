#include <iostream>
using namespace std;

#define pi 3.1415926
  class circle{
  	   float circ, area,r,diameter;
  	   
  	   public:
  	   	
  	   	void getArea();
  	   	void getCirR();
  	   	void getAreaDi();
  	   	void getcirDi();
  	   	
  };
  
    void circle::getArea(){
    	cout<<"Enter the Radius of the circle: ";
    	   cin>>r;
 	   
		 area = pi * r * r;
		cout<<"The Area of the circle is : "<<area;
	}
    void circle::getAreaDi(){
    	cout<<"Enter the Diameter of the circle: ";
    	   cin>>diameter;
 	   
		 area = pi * ((diameter/2)*2) ;
		cout<<"The Area of the circle is : "<<area;
	}
	void circle::getCirR(){
			cout<<"Enter the Radius of the circle: ";
    	   cin>>r;
 	   
		 circ = 2*pi*r ;
		cout<<"The Circumference of the circle is : "<<area;
	} 

	void circle::getcirDi(){
			cout<<"Enter the Radius of the circle: ";
    	   cin>>diameter;
 	   
		 circ = 2*pi*(diameter/2) ;
		cout<<"The Circumference of the circle is : "<<area;
	} 

    


int main(){
      int menu;
	        	circle odk;
	     cout<<"\n************MENU***********"<<endl;
         cout<< "\n1.Finding The Area using Radius"<<endl;
         cout<< "\n2.Using Diameter to find the Area of a circle"<<endl;
         cout<< "\n3.Using Radius to find the Circumference of a circle"<<endl;
         cout<< "\n4.Using Diameter to find the Circumference of a circle"<<endl;
         cout<< "\n5.Exit"<<endl;
		 		cout<<"Choose your Option";
				 cin>>menu;	
 		
              	if(menu == 1){
		 		 	odk.getArea();
			   }else if(menu == 2){
			   	odk.getAreaDi();
		       }else if(menu == 3){
		       	odk.getCirR();
			   }else if(menu == 4){
			   	odk.getcirDi();
			   }else if(menu == 5){
			   	cout<<"Canceled"<<endl;
			   }else
			   cout<<"Error"<<endl;
			  
	
	
	
	
	
	
	return 0;
}
