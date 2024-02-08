//
//  main.c
//  CompareingBits
//
//  Created by Tyler  on 2/8/24.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //first problem.
    int32_t val = 0xAD|0xC7;
    printf("here is the first question on lab 1 %i \n", val);
    //second problem.
    int32_t val2 = 0xAD&0xC7;
    printf("here is the second question on lab 1 %i \n", val2);
    //last and thrid problem
    int32_t val3 =  (0xAD&~(0xC7)) * (0xAD^0xC7);
    printf("here is the last problem on the prelab you get a value of %i \n", val3);
    //thanks
    //Tyler. 
        
    
}

