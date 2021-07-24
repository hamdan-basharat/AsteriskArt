#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, m, p;//m is the number of empty spaces in a row
    do{
        printf("Please input an odd integer between 1 and 25\n");
        scanf("%d",&n);
    }while(!(n>=1 && n<=25 && n%2==1));

    //9a
    m=2*n-1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    //9b
    m=n-1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf(" ");
        }//loop to print empty spaces
        for(j=0;j<2*n-1-2*m;j++){
            printf("*");
        }//loop to print stars
        for(j=0;j<m;j++){
            printf(" ");
        }//loop to print empty spaces
        m--;
        printf("\n");
    }//end of outer for loop
    printf("\n");

    //9c
    m=2*n-1;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("*");
        }
        m=m-2;
        printf("\n");
    }
    printf("\n");

    //9d
	int space=4;
	/*run loop (parent loop) till number of rows*/
	for(i=n;i>0;i--)
	{
		/*loop for initially space, before star printing*/
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		for(j=0;j< i;j++)
		{
			printf("* ");
		}

		printf("\n");
		space++;
	}

	/*run loop (parent loop) till number of rows*/
	for(i=0;i< n;i++)
	{
		/*loop for initially space, before star printing*/
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("* ");
		}

		printf("\n");
		space--;
	}
	/*repeat it again*/
	space=0;
    return 0;
}





