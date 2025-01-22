#include <stdio.h>


//prototype
void calculateArea ();

int main()
{
 
 //call the function
 calculateArea ();
  
  return 0;
}

//Definition for function
void calculateArea (){
     int L,W;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&L,&W);
    
    int area;
     area= L*W;
     printf (" The area is %d", area);
}
