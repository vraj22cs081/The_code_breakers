//C++ program for converting Temperatures in all types of units
#include<iostream>

using namespace std;

class celsius           // class to get and display value of celsius
{
public:
    float cel;

    void getdata()
    {
        cout << "Enter the temperature in Celsius: ";
      cin >> cel;
    }
    void putdata()
    {
        cout << "\nTemperature in degree Celsius: " << cel << " C" << endl;
    }
};

class fahrenheit          // class to get and display value of fahrenheit
{
public:
    float fahr ;

    void gtdata()
    {
        cout << "Enter the temperature in Fahrenheit: ";
      cin >> fahr;
    }
    void ptdata()
    {

        cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" << endl;
    }

};
class kelvin
{
public:
    float kel;

    void gdata()
    {
        cout << "Enter the temperature in Kelvin: ";
      cin >> kel;
    }
    void pdata()
    {
      cout << "\nTemperature in Kelvin: " << kel << " K" << endl;
    }
};
int main()
{

  celsius c;
  fahrenheit f;
  kelvin k;

   char option1,option2;

   cout << "Choose from the following option you want to convert:" << endl;
   cout << "1. Celsius" << endl;
   cout << "2. Fahrenheit " << endl;
   cout << "3. Kelvin " << endl;
   cout << "Option no. : ";
   cin >> option1;

   //option for converting celsius into other
   if (option1 == '1')
   {
      c.getdata();
   }

   //option for converting Fahrenheit into other
   else if (option1 == '2')
   {
       f.gtdata();
   }

   //option for converting Fahrenheit into other
   else if (option1 == '3')
   {
       k.gdata();
   }
   //condition for incorrect input
   else
      cout << "Error Wrong Input." << endl;

   cout << "Choose from following option you want to convert in:" << endl;
   cout << "1. Celsius" << endl;
   cout << "2. Fahrenheit " << endl;
   cout << "3. Kelvin " << endl;
   cout << "Option no. : ";
   cin >> option2;

    if(option2 == '1')          //loop for converting to celsius
        {
        if (option1 == '2')
        {
            c.cel = (f.fahr - 32) * (5/9);      //temperature conversion formula
            c.putdata();
        }
        else if (option1 == '3')
        {
            c.cel= (k.kel - 273.15);            //temperature conversion formula
            c.putdata();
        }
        else
        {
            c.putdata();                //condition for same input and output
        }
    }

    else if (option2 == '2')          //loop for converting to fahrenheit
   {
       if(option1 == '1')
       {
           f.fahr= (1.8 * c.cel ) + 32.0;       //temperature conversion formula
          f.ptdata();
       }
       else if(option1 == '3')
       {
           c.cel= k.kel - 273.15;
           f.fahr = (1.8 * c.cel ) + 32.0;      //temperature conversion formula
           f.ptdata();
       }
       else
       {
           f.ptdata();                       //condition for same input and output
       }
   }

    else if(option2 == '3')                 //loop for converting to Kelvin
   {
       if(option1 == '1')
       {
           k.kel= c.cel + 273.15;           //temperature conversion formula
           k.pdata();
       }
       else if (option1 == '2')
       {
            c.cel = (f.fahr - 32) * (5/9);      //temperature conversion formula
            k.kel = c.cel + 273.15;
            k.pdata();
       }
       else
       {
           k.pdata();                        //condition for same input and output
       }
   }
   cout << "This Mini Project is made by 22CS075, 22CS056, 22CS081" << endl;
   return 0;
}
