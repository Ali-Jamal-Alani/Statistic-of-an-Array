/******************************************************************************
 * Copyright (C) 2020 by Ali Alani - Coursera-course
 *
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
#ifndef __STATS_H__
#define __STATS_H__

/* function declaration of finding the maximum value in the array  */ 

/**
 * @brief <find-max>
 *
 * 
 *
 * 
 * 
 * 
 * 
 *
 * @return <an integer value of the maximum number of the array>
 */


find_max ( unsigned char a[], unsigned int count);






/* function declaration of finding the minimum value in the array  */ 

/**
 * @brief <find-min>
 *
 * 
 *
 * 
 * 
 * 
 * 
 *
 * @return <an integer value of the minimum number of the array>
 */

 find_min ( unsigned char a[], unsigned int count);




/* function declaration of finding the average  value in the array  */ 

/**
 * @brief <find-average>
 *
 * 
 *
 * 
 * 
 * 
 * 
 *
 * @return <an integer value of the average number of the array>
 */

 find_average(unsigned char *ptr, unsigned int count);






/* function declaration of sorting the array  */ 

/**
 * @brief <sorting>
 *
 * 
 *
 * 
 * 
 * 
 * 
 *
 * @return <printing the array after sort it>
 */
 void sort(unsigned char * ptr, unsigned int count) ;





/* function declaration of finding the median of array  */ 

/**
 * @brief <find-median>
 *
 * 
 *
 * 
 * 
 * 
 * 
 *
 * @return <an double value of the median number of the array>
 */

 double findMedian(unsigned char *ptr, unsigned int count);




#endif /* __STATS_H__ */ 
