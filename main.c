#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here

    //initializing all variables
    int dice_array[100];
    float sum;
    float avg;
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    //loop simulating the dice roll 100 times
    for(int i = 0; i < 100; i++){
        dice_array[i] = (rand() % 6)+1;   
    }

    /*looping through the dice array and counting how many times each number appeared
    while also calculating the total sum and average of all 100 dice throws*/
    for(int i = 0; i < 100; i++){
        if(dice_array[i] == 1){one++;}
        if(dice_array[i] == 2){two++;}
        if(dice_array[i] == 3){three++;}
        if(dice_array[i] == 4){four++;}
        if(dice_array[i] == 5){five++;}
        if(dice_array[i] == 6){six++;}
        sum+=dice_array[i];
        avg = sum / 100;
    }

    //Printing all of the results
    printf("%d\n%d\n%d\n%d\n%d\n%d\n", one, two, three, four, five, six);
    printf("%.0f\n", sum);
    printf("%.1f\n", avg);

    return 0;
}
