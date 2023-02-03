first = int(input("Enter the first number :"))
second = int(input("Enter the second number :"))
operator = input("Enter operation ('+','-','*','/','%','**','//') ")

if operator == '+':
    print(first+second)
elif operator == '-':
    print(first-second)
elif operator == '*':
    print(first*second)
elif operator == '/':
    print(first/second)
elif operator == '%':
    print(first % second)
elif operator == '**':
    print(first**second)
elif operator == '//':
    print(first//second)
else:
    print("Invalid operation")
