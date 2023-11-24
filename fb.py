# FizzBuzz in Python
def main(till: int) -> bool:
    for i in range(till):
        out: str = ""
        if (i % 3 == 0):
            out += "Fizz"
        if (i % 5 == 0):
            out += "Buzz"
        if (out == ""):
            print(i)
        else:
            print(out)
    return True

if (__name__ == '__main__'):
    success: bool = main(100)
    if (success):
        print("Was a success!!!")
    else:
        print("not :(")
