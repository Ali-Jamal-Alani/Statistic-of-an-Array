

/******************************************************************************
 * Copyright (C) 2020 by Ali Alani 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. 
 *
 *****************************************************************************/
/**
 * @file <assignement week 1 > 
 * @brief <calculating the statistics and mean then sorting this specific array >
 *
 * <done by Ali Alani by using embedded linux and github>
 *
 * @author <Ali Alani>
 * @date <25/ 12 / 2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
 
printf ("the array is ");
int loop;
  for (loop=0; loop<40; loop++){
    printf (" %u", test[loop]);
    
}


 printf ("\n");
int average= find_average(test, SIZE);
printf("average is %d\n",average );

int max= find_max (test, SIZE);
printf("max is %d\n", max);

int min= find_min (test, SIZE);
printf("min is %d\n", min);

sort(test, SIZE); 
 
 
 double MEDIAN= findMedian(test, SIZE);

printf("The median is : %f\n",MEDIAN);
 
 
 
}


/* avearage */
find_average(unsigned char *ptr, unsigned int count) {

int i;
int average;
if( ptr ==NULL){
return 0;
}

if (count <= 0){

count = 1;
}

for(i=0 ; i < count; i++){

average+= *ptr;
ptr++;
}

return(average/count);

}


/* maximum */

 int find_max ( unsigned char a[], unsigned int count) {
int i;
int maximum ;


 a[0]=maximum;
for(i=1;i<count;i++)
 {
     
		if (a[i] > maximum){
			maximum = a[i];}
	}
	
return (maximum);

}









/* minimum */

  int find_min ( unsigned char a[], unsigned int count) {
int i;
int minimum ;


 a[0]=minimum;
for(i=0;i<count;i++)
 {
     
		if (a[i] < minimum){
			minimum = a[i];}
			
	}
	
return (minimum);

}




/* sort an array  */
void sort(unsigned char *ptr, unsigned int count) 
{ 
    int i, j, t; 
  
    // Sort the numbers using pointers 
    for (i = 0; i < count; i++) { 
  
        for (j = i + 1; j < count; j++) { 
  
            if (*(ptr + j) > *(ptr + i)) { 
  
                t = *(ptr + i); 
                *(ptr + i) = *(ptr + j); 
                *(ptr + j) = t; 
            } 
        } 
    } 
  
    // print the numbers 
    printf("the array after sorting is \n");
    for (i = 0; i < count; i++) 
        printf("%d ", *(ptr + i)); 
        printf("\n");
} 

/****************median*************/
// function to calculate the median of the array
double findMedian(unsigned char *ptr, unsigned int count)
{
    double median = 0.0;
    int mid = 0;

 

    if(count % 2 == 0)

    {

        mid = (count / 2) - 1;

        median = (ptr[mid] + ptr[mid + 1]) / 2;

    }

    else

    {

        mid = (int)(count / 2);
        median = ptr[mid];
    }

    return median;}





                                                            
 


