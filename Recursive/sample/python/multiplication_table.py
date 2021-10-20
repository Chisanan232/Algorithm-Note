"""
Multiplication Table

It must to do this when we're learning coding like print 'Hello World!'.
It could be implemented with 2 for loop with 1 to 9 as every know.
But how about WITHOUT any for loop (or other loop feature)?
Below is a example to let everyone deeply understand how powerful recursive is!
You'll found that the time complexity sharply decrease to O(1) from O(N^2).
"""

Start_Number = 1
Multiplier_End_Number = 9
Multiplicand_End_Number = 9


def get_multiplication_table():
    do_multiplication_process(Start_Number, Start_Number)


def do_multiplication_process(multiplier, multiplicand):
    if Start_Number <= multiplicand <= Multiplicand_End_Number:
        print(f"{multiplier} * {multiplicand} = {multiplier * multiplicand}")
        do_multiplication_process(multiplier, multiplicand + 1)
    else:
        if multiplier == Multiplier_End_Number:
            print("Finish multiplication table by Python 3!")
            return True
        else:
            do_multiplication_process(multiplier + 1, Start_Number)


if __name__ == '__main__':

    get_multiplication_table()
