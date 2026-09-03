#include <iostream>
#include <iomanip>
 using namespace std;

  int main ()

      //=========File Size convert=========//

 {
    
   double value;
   double bytes;
   double result;
   int from;
   int to;

   cout << "\nEnter the value\n";
   cin >> value;

   cout <<"\nconvert from\n";
   cout <<" 1.bytes\n";
   cout <<"2.TB\n";
   cout <<"3.GB\n";
   cout <<"4.KB\n";
   cout <<"5.MB\n";
   cout <<"6.GB\n";
   cout <<"7.Byte\n";
   cout <<"8.Bit\n";

   cout <<"Choose:";
   cin >> from;

   cout << "convert to: \n";
   cout <<" 1.bytes\n";
   cout <<"2.TB\n";
   cout <<"3.GB\n";
   cout <<"4.MB\n";
   cout <<"5.KB\n";
   cout <<"6.Byte\n";
   cout <<"7.Bit\n";

   cout <<"Choose:";
   cin >> to;

   if  (from == 1)
   {
      bytes = value;

   }



   else if (from == 2)
   {
       bytes = value * 1024 * 1024 * 1024 * 1024;
   }
    
   else if (from == 3)
   {
      bytes = value * 1024 * 1024 * 1024;
   } 
   
   else if (from == 4)
   {
      bytes = value * 1024 * 1024;
   }

   else if (from == 5)
   {
      bytes = value * 1024;
   }

   else if (from == 6)
   {
     bytes = value;
   }

   else if (from == 7)
   {
     bytes = value / 8;
   }
 
   if (to == 1)
   {
     result = bytes;
   }

   if (to == 7)
   {
     result = bytes * 8;
   }

   if (to == 6)
   {
     result = bytes;
   }

   if (to == 5)
   {
     result = bytes /1024;
   }

   if (to == 4)
   {
     result = bytes / 1024 / 1024;
   }

   if (to ==3 )
   {
     result = bytes / 1024 / 1024 /1024;
   }
 
   if (to ==2)
   {
     result = bytes / 1024 / 1024 / 1024 / 1024;
   }

  

   cout <<"result = " << result <<"\n";


 }