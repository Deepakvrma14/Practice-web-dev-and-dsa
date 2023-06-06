# python program to find average of 10 digits using functions

def average():
    n = 1;
    sum = 0;
    while(n <= 10):
        num = int(input("Enter number: "));
        sum = sum + num;
        n = n + 1;
    avg = sum + 10;
    print("Average of 10 numbers is: ", avg);
average()