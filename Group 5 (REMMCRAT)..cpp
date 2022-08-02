//GROUP 5 Member: Tapel, Menor, Mendez
#include<iostream>
#include<conio.h>

using namespace std;
class SetOperations
{
   public:
   void setUnion(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize);
   void setIntersection(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize);
   void setDifference(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize); 
   void set_Difference(int *universalArray,int universalArraySize,int *secondArray,int secondArraySize);   
   void set__Difference(int *universalArray,int universalArraySize,int *firstArray,int firstArraySize); 
   void set_Complement(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize);
   void set__Complement(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize);
   void setDisplay(int *resultArray,int resultArraySize);
};

int main()
{            //Varible
            int firstArray[10];int secondArray[10];int universalArray[50];
            int firstArraySize;int secondArraySize;int universalArraySize;
            int i,j,flag=0;
 
 
            cout << "This Program Only Accepts Integers " << endl;
            
           //Asks to User to Enter for sets A
           cout<<"Enter No Of Elements Sets A:\n";
           cin>>firstArraySize;
           cout<<"Enter "<<firstArraySize<<" Elements Of First Set:\n";
           for(i=0;i<firstArraySize;i++)
        {
           cin>>firstArray[i];
      
   		}
 
      //Asks to User to Enter for sets B
   cout<<"Enter No Of Elements Sets B:\n";
   cin>>secondArraySize;
   cout<<"Enter "<<secondArraySize<<" Elements Of Second set:\n";
   for(i=0;i<secondArraySize;i++)
   {
     cin>>secondArray[i];
   }
   	//Asks to User to Enter Universal Set
    cout << "Enter No Of Elements To Be In Universal Set:\n";
            cin >> universalArraySize;
            cout << "Enter "<< universalArraySize <<" Elements Of universal Set:\n";
            for(i=0;i<universalArraySize;i++)
        {
            cin>>universalArray[i];
    	}

   SetOperations s; //Display sets Operations

   cout<<"Universal set :";
   s.setDisplay(universalArray,universalArraySize);
   cout<<"Set A :";
   s.setDisplay(firstArray,firstArraySize);
   cout<<"Set B :";
   s.setDisplay(secondArray,secondArraySize);
   cout << endl;
   cout<<"Union :";
   s.setUnion(firstArray,firstArraySize,secondArray,secondArraySize);
   cout<<"Intersection :";
   s.setIntersection(firstArray,firstArraySize,secondArray,secondArraySize);
   cout<<"A' :";
   s.set__Difference(universalArray,universalArraySize,firstArray,firstArraySize);
   cout<<"B' :";
   s.set_Difference(universalArray,universalArraySize,secondArray,secondArraySize);
   cout<<"Difference A-B :";
   s.setDifference(firstArray,firstArraySize,secondArray,secondArraySize);
   cout<<"Difference B-A :";
   s.setDifference(secondArray,secondArraySize,firstArray,firstArraySize);
   cout<<"Complement 'A :";
   s.set_Complement(universalArray,universalArraySize,secondArray,secondArraySize);
   cout<<"Complement 'B :";
   s.set__Complement(universalArray,universalArraySize,secondArray,secondArraySize);
   return 0;
}
     //Display Result
void SetOperations::setDisplay(int *resultArray,int resultArraySize)
{
   int i;
   cout << "{";
   for(i=0;i<resultArraySize;i++)
   {
      cout<<resultArray[i]<<", ";
   } 
   cout << "}";
    cout<<"\n";
}
        //CUnion sets
void SetOperations::setUnion(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize)
{
   int i,j,flag=0,resultArray[20],resultArraySize=0; 
   for(i=0;i<firstArraySize;i++)
   {
      resultArray[i]=firstArray[i];
      resultArraySize++;
   }
 
   for(i=0;i<secondArraySize;i++)
   {
      flag=0;
      for(j=0;j<resultArraySize;j++)
      {
          if(secondArray[i]==resultArray[j])
          {
             flag=1;
             break;
          }
      } 
      if(flag==0)
      { 
          resultArray[resultArraySize]=secondArray[i];
          resultArraySize++;
      } 
   }
   setDisplay(resultArray,resultArraySize);
}
         //Intersection sets
void SetOperations::setIntersection(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize)
{
   int i,j,flag=0,resultArray[20],resultArraySize=0;
 
   for(i=0;i<secondArraySize;i++)
   {
      for(j=0;j<firstArraySize;j++)
      {
        if(secondArray[i]==firstArray[j])
        {
            resultArray[resultArraySize]=secondArray[i];
            resultArraySize++;
            break;
        }
       }
   } 
   setDisplay(resultArray,resultArraySize);
}
          //Difference Sets
void SetOperations::setDifference(int *firstArray,int firstArraySize,int *secondArray,int secondArraySize)
{
   int i,j,flag=0,resultArray[20],resultArraySize=0;

   for(i=0;i<firstArraySize;i++)
   {
      flag=0;
   for(j=0;j<secondArraySize;j++)
   {
      if(firstArray[i]==secondArray[j])
   {
   flag=1;
   break;
   }
} 
   if(flag==0)
   { 
   resultArray[resultArraySize]=first
