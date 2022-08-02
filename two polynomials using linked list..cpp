//Write a c++ program that add and subtract two polynomials using linked list.
#include<bits/stdc++.h>
using namespace std;

struct Node{ //Declare variable
   int coeff;
   int pow;
   struct Node *next;
};
   //create node
   void create_node(int x, int y, struct Node **temp){
   struct Node *r, *z;
   z = *temp;
   if(z == NULL){
      r =(struct Node*)malloc(sizeof(struct Node));
      r->coeff = x;
      r->pow = y;
      *temp = r;
      r->next = (struct Node*)malloc(sizeof(struct Node));
      r = r->next;
      r->next = NULL;
   } else {
      r->coeff = x;
      r->pow = y;
      r->next = (struct Node*)malloc(sizeof(struct Node));
      r = r->next;
      r->next = NULL;
   }
}
    //Adding two polynomial numbers
   void polyadd(struct Node *p1, struct Node *p2, struct Node *result){
   while(p1->next && p2->next){
      if(p1->pow > p2->pow){
         result->pow = p1->pow;
         result->coeff = p1->coeff;
         p1 = p1->next;
      }
      else if(p1->pow < p2->pow){
         result->pow = p2->pow;
         result->coeff = p2->coeff;
         p2 = p2->next;
      } else {
         result->pow = p1->pow;
         result->coeff = p1->coeff+p2->coeff;
         p1 = p1->next;
         p2 = p2->next;
      }
      result->next = (struct Node *)malloc(sizeof(struct Node));
      result = result->next;
      result->next = NULL;
   }
   // If power of 1st polynomial is greater then 2nd,
  // then store 1st as it is and move its pointer
   while(p1->next || p2->next){
      if(p1->next){
         result->pow = p1->pow;
         result->coeff = p1->coeff;
         p1 = p1->next;
      }
      if(p2->next){
         result->pow = p2->pow;
         result->coeff = p2->coeff;
         p2 = p2->next;
      }
      result->next = (struct Node *)malloc(sizeof(struct Node));
      result = result->next;
      result->next = NULL;
   }
}
void printpoly(struct Node *node){
   while(node->next != NULL){
      printf("%dx^%d", node->coeff, node->pow);
      node = node->next;
      if(node->next != NULL)
         printf(" + ");
   }
}
int main(){
   struct Node *p1 = NULL, *p2 = NULL, *result = NULL;
   create_node(25,3,&p1);
   create_node(14,6,&p1);
   create_node(32,7,&p1);
   create_node(22,4,&p2);
   create_node(18,9,&p2);
   printf("polynomial 1: "); //Display potynomail 1
   printpoly(p1);
   printf("\npolynomial 2: ");//Display potynomail 2
   printpoly(p2);
   result = (struct Node *)malloc(sizeof(struct Node));
   polyadd(p1, p2, result);
   printf("\npolynomial after adding p1 and p2 : "); //Dispalyaadinf two polynomail
   printpoly(result);
   return 0;
}
