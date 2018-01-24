#include<stdio.h>                          
  void main( )                                                     
   {                                                           
       int i,j,n;                                              
       int median,a[n],t;                                    
                                                               
       printf("Enter the number");                  
       scanf("%d", &n);                                        
       printf("input of the number");                         
       for (i = 1; i <= n ; i++)
       {
        scanf("%d", &a[i]); 
  
       }
       if(n%2==0)
       {
    
          median = (a[n/2] + a[n/2+1])/2.0 ;
          }
       else
       {
          median = a[n/2 + 1];                                 
        }                                                       
for (i = 1 ; i <= n ; i++)
{
           printf("%d ", a[i]);                               
       printf("median number");                                                                          
   }    
