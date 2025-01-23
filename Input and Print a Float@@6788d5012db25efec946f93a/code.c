Sure! Here's a simple Python program that takes a floating-point number as input:

```python
# Take input from the user
user_input = input("Enter a floating-point number: ")

# Convert the input to a float
try:
    float_number = float(user_input)
    print(f"You entered the floating-point number: {float_number}")
except ValueError:
    print("That's not a valid floating-point number!")
```

This program will prompt the user to enter a floating-point number and then display it. If the user enters something that isn't a valid float, it will show an error message.