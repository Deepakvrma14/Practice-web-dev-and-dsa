#include <stdio.h>
void Jersey (int nums[7])
{
    //finding 23 and changing its location to 7 i.e index 6
    int temp;
    for (int i = 0; i< 7; i++)
    {
        if (nums[i] == 23)
        {
            temp = nums[6];
            nums[6] = 23;
            nums[i] = temp;
        }
    }
    //printing the array
    for (int i = 0; i< 7; i++)
    {
        printf("%d\n",nums[i]);
    }

    //deleting the element 52;
    for (int i = 0; i < 7; i++)
    {
        if (nums[i] == 52)
        {
            for (int j = i ; j < 7 ; j++)
            {
                nums[j] = nums[j+1];
            }
            nums [6] = 0;
            break;
        }
    }

    //result after performing after operation
    printf("After 52 is removed from the Jersey list: \n");       
    for (int i = 0; i< 6; i++)
    {
        printf("%d\n",nums[i]);
    }
}
int main ()
{
    int nums[7];
    printf("Enter the Jersey numbers: ");
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &nums[i]);
    }
    printf("Changing the location of Jersey number 23 and shifting it to 7th position: \n");
    Jersey (nums);
    return 0;
}