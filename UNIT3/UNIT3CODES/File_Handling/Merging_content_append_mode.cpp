#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main()
{
   fstream FILE1,FILE2;
   char ch;
   FILE1.open("Data_to_merge.txt",ios::in);
   FILE2.open("Destination_file_to_merge.txt",ios::app);
   if(!FILE1||!FILE2)
   {
   cout<<"\n File could not be opened";
   exit(1);
   }
      ch = FILE1.get();
      while (ch != EOF)
       {
         FILE2.put(ch);
         ch=FILE1.get();
       }
      cout<<"File is merged with the content of another file";
      FILE1.close();
      FILE2.close();
      return 0;
}
