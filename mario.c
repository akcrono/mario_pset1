#include <stdio.h>
#include <cs50.h>

int main (void)
{ 
    int height;
    int count;
    
    do
    {
    printf("Height: ");
    height = GetInt();
    } while (height<0||height>23);
    // increments height so top row is 2 blocks long
    height++;
    
    // print loops
    for(int i=1; i<height; i++) 
    {
        for(count=1; count<height-i; count++)    //print spaces first
            printf(" ");
        while (count<height+1)                  //fill in remaining space with hashes
        {
            printf("#");
            count++;
        }
        printf("\n");
    }    
}
