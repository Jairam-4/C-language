#include <stdio.h>
int mc(int b) {
    switch (b) {
        case 1: return 1;
        case 2: return 4;
        case 3: return 4;
        case 4: return 0;
        case 5: return 2;
        case 6: return 5;
        case 7: return 0;
        case 8: return 3;
        case 9: return 6;
        case 10: return 1;
        case 11: return 4;
        case 12: return 6;
        default: 
            printf("Invalid Month\n"); 
            return -1;
    }
}
void day(int i) {
    switch (i) {
        case 0: printf("The day is Saturday🎉🎉\n"); break;
        case 1: printf("The day is 😍 Sunday ☀️\n"); break;
        case 2: printf("The day is Monday🎉🎉\n"); break;
        case 3: printf("The day is Tuesday🎉🎉\n"); break;
        case 4: printf("The day is Wednesday🎉🎉\n"); break;
        case 5: printf("The day is Thursday🎉🎉\n"); break;
        case 6: printf("The day is Friday🎉🎉\n"); break;
        default: printf("Invalid Day\n"); break;
    }
}
int main() {
    int a, b, c, d, e, f, g, h, i;
        while (1) {
        printf("\nEnter the date (DD): ");
        scanf("%d", &a);
        printf("Enter the month (MM): ");
        scanf("%d", &b);
        printf("Enter the year (YYYY): ");
        scanf("%d", &c);
        d = c % 100; 
        e = c / 100; 
        f = d / 4;   
           if (c >= 1600 && c <= 1699)
            g = 6;
        else if (c >= 1700 && c <= 1799)
            g = 4;
        else if (c >= 1800 && c <= 1899)
            g = 2;
        else if (c >= 1900 && c <= 1999)
            g = 0;
        else if (c >= 2000 && c <= 2099)
            g = 6;
        else {
            printf("Invalid Year\n");
            continue;
        }
        int month_code = mc(b);
        if (month_code == -1) continue;         
        h = a + month_code + d + f + g;
        i = h % 7; 
        day(i);
    }
     return 0;
}
