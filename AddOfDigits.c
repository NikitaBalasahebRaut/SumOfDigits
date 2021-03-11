/*
    Accept N numbers from user and diplsay addition of digits of each number separately
 */

/*
    Input :
    N : 5
    Array :     152     4545    -56      5       78
    Output :    8           18      11      5       15
 
 */
#include<stdio.h>
#include<stdlib.h>

void SumDigits(int iSize,int arr[])
{
  int iCnt = 0;
  int iNo = 0;
  int iSum = 0;
  int iDigit = 0;
  
    if(arr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
	   iNo = arr[iCnt];
	   iSum = 0;
	   
	   while(iNo != 0)
	   {
		    iDigit = iNo % 10;
			iSum = iSum + iDigit;
			iNo = iNo / 10;
	   }
	   
	   printf(" No = %d And its Addition = %d\n",arr[iCnt],iSum);
	}

}

 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   SumDigits(iNo,ptr);
   
      free(ptr);
 return 0;
 }
 
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\SumOfDigits>myexe
Enter The N Numbers
5
Enter the values
625
123
894
000
111
values are
625
123
894
0
111
 No = 625 And its Addition = 13
 No = 123 And its Addition = 6
 No = 894 And its Addition = 21
 No = 0 And its Addition = 0
 No = 111 And its Addition = 3

D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\SumOfDigits>myexe
Enter The N Numbers
3
Enter the values
102
105
555
values are
102
105
555
 No = 102 And its Addition = 3
 No = 105 And its Addition = 6
 No = 555 And its Addition = 15
 
 */