#include <stdio.h>


//prototype
void calculateArea (int L, int W);

int main()
{
    int L,W;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&L,&W);
 
 //call the function
 calculateArea (L, W);
  
  return 0;
}

//Definition for function
void calculateArea (int L, int W){
    int area;
     area= L*W;
     printf (" The area is %d", area);
}
