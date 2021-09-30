#include <stdio.h>

int main(){
    /*#1: declare and initialize*/
    char c = 'a';
    int i = 1;
    long l = 2;
    
    /*#2: print out the addresses of each variable*/
    printf("2\n");
    printf("HEX: char:%p int:%p long:%p", &c, &i, &l);
    printf("\n");
    printf("DEC: char:%lu int:%lu long:%lu", &c, &i, &l);
    printf("\n\n");
    
    /*#3: declare and initialize pointers*/
    char *cp0 = &c;
    int *ip0 = &i;
    long *lp = &l;
    
    /*#4: print value of printers*/
    printf("4\n");
    printf("char:%p int:%p long:%p", cp0, ip0, lp);
    printf("\n\n");
    
    /*#5: modify the values of the original and print the new*/
    *cp0 = 'b';
    *ip0 = 1480539;
    *lp = 123412389;
    printf("5\n");
    printf("new char: %c  new int: %i  new long: %ld", c, i, l);
    printf("\n\n");
    
    /*#6: declare and initialize an unsigned int and 2 pointers*/
    unsigned int un = 3208914;
    int *ip1 = &un;
    char *cp1 = &un;
    
    /*#7: print value of printer*/
    printf("7\n");
    printf("ip1:%p  ip1 points to: %u", ip1, *ip1);
    printf("\n");
    printf("cp1:%p  cp1 points to: %u", cp1, *cp1);
    printf("\n\n");
    
    /*#8: print unsigned int*/
    printf("8\n");
    printf("unsigned int in hex: %x  unsigned int in dec: %u", un, un);
    printf("\n\n");
    
    /*#9: use char to print out unsigned int*/
    printf("9\n");
    printf("hex bytes: %hhx %hhx %hhx %hhx", *cp1, *(cp1+1), *(cp1+2), *(cp1+3));
    printf("\n");
    printf("dec bytes: %hhu %hhu %hhu %hhu", *cp1, *(cp1+1), *(cp1+2), *(cp1+3));
    printf("\n\n");
    
    /*#10: use char to increment each byte*/
    printf("10\n");
    int j;
    for(j=0; j<4; j++){
        *(cp1 + j) += 1;
        printf("dec byte: %u \t hex byte: %x", *ip1, *ip1);
        printf("\n");
    }
    for(j=0; j<4; j++){
        printf("dec byte: %hhu \t hex byte: %hhx", *(cp1+j), *(cp1+j));
        printf("\n");
    }
    printf("\n");
    
    /*#11: */
    printf("11\n");
    for(j=0;j<4;j++){
        *(cp1+j) += 16;
        printf("dec byte: %u \t hex byte: %x", *ip1, *ip1);
        printf("\n");
    }
    for(j=0;j<4;j++){
        printf("dec byte: %hhu \t hex byte: %hhx", *(cp1+j),*(cp1+j));
        printf("\n");
    }
    
}