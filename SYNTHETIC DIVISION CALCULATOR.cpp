//Group 5, Tapel, Menor, Mendez.
/*BSCS!D*/
#include<iostream>
#include<conio.h>
     using namespace std;
     class poly
   {
         int n;
         int deg[50];
         int coeff[50];
     public:
     void getdata();
     void putdata();
     friend void putdatadivide(poly);
     poly operator /(poly);
  };
     void poly::getdata()
  {
      cout<<"\n\tEnter the number of terms:"; //Asks to user Enter the number of terms
      cin>>n;
      cout<<"\n\tEnter the degrees and coefficients:"; //Asks to user Enter a Degrees and Coefficient
     for(int i=0;i<n;i++)
 {
      cin>>deg[i];
      cin>>coeff[i];
    }
}
       void poly::putdata()
   {
      for(int i=0;i<n;i++)
             {
          if (i==0)
      cout<<coeff[i]<<"x^"<<deg[i];
      else if(deg[i]==0)
      cout<<"+"<<coeff[i];
      else
      cout<<"+"<<coeff[i]<<"x^"<<deg[i];
     }
 }
       void putdatadivide(poly c)
     {
       for(int i=0;i<c.n;i++)
   {
       if (i==0)
        cout<<c.coeff[i]<<"x^"<<c.deg[i];
       else
         cout<<"+"<<c.coeff[i]<<"x^"<<c.deg[i];
       }  
   }
         poly poly::operator /(poly c)
        {
      poly d;
      d.n=0;
      int i=0;
      int j=0;
      int k=0;
      while(n>0 && c.n>0)
   {  
      if (deg[i]==c.deg[j])
{
       d.coeff[k]=coeff[i]/c.coeff[j];
       d.deg[k]=deg[j];
       d.n++;
       n--;
       c.n--;
       i++;
       j++;
       k++;
     }
       else if (deg[i]>c.deg[j])
  { 
      d.coeff[k]=coeff[i];
      d.deg[k]=deg[i];
      d.n++;
      n--;
      i++;
      k++;
     } 
       else
  { 
      d.coeff[k]=c.coeff[j];
      d.deg[k]=c.deg[j];
      d.n++;
      c.n--;
      j++;
      k++;
      }
    }
        while (n>0)
   {
      d.coeff[k]=coeff[i];
      d.deg[k]=deg[i];
      d.n++;
      n--;
      i++;
      k++;
     }
        while (c.n>0)
   {
       d.coeff[k]=c.coeff[j];
       d.deg[k]=c.deg[j];
       d.n++;
       c.n--;
       j++;
       k++;
     }
   return(d);
   }  
      int main()
   {
      poly A,B,C; 
       cout<<"\n\tDivide two Polynomials\n";  //Asks to user to Enter Divide two polynomials
       cout<<"\n\n\tEnter the details of First polynomial:"; // Enter the details first polynomial
       A.getdata();
       cout<<"\n\n\tEnter the details of Second polynomial:"; // Enter the details Second polynomail
       B.getdata();
       cout<<"\n\n\tEnter a First polynomial="; //Asks to user to enter First polynomail
       A.putdata();
       cout<<"\n\n\tEnter a Second polynomial=";//Asks to user to enter Second polynomail
       B.putdata(); 
       cout<<"\n\n\tDivide of two polynomials="; //display two polynomials
    C= A / B;  // Display result
       putdatadivide(C);
        getch();
        return 0;
}

