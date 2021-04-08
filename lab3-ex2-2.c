#include <stdio.h> //connect lib
#include <math.h>
int main()
{
        int n;
        printf("Write a day of week: ");
        scanf("%d", &n);
        switch(n)
        {
                case 1: printf("\t\033[0;32mMonday\033[0;37m"); break;
                case 2: printf("\t\033[0;32mTuesday\033[0;37m"); break;
                case 3: printf("\t\033[0;32mWednesday\033[0;37m"); break;
                case 4: printf("\t\033[0;32mThuesday\033[0;37m"); break;
                case 5: printf("\t\033[0;32mFriday\033[0;37m"); break;
                case 6: printf("\t\033[0;32mSaturday\033[0;37m"); break;
                case 7: printf("\t\033[0;32mSunday\033[0;37m"); break;
        }

        if ( n<0 || n>7 )
        {
            printf("\tNumber of week must be between \033[0;32m1\033[0;37m and \033[0;32m7\033[0;37m..");
        };
       return 0;
}