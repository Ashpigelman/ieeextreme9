from math import factorial

pizza_cutting = int(input())

while pizza_cutting:
    # if pizza_cutting == 1:
    #     print(3)
    # elif pizza_cutting == 2:
    #     print(4)
    # elif pizza_cutting == 5:
    #     print(5)
    # else:
    for n in range(3, 1000):
            if factorial(2 * (n - 2)) // (factorial(n - 1) * factorial(n - 2)) == pizza_cutting:
                print(n)
                break
    try:
        cut = input()
    except:
        break
    pizza_cutting = int(cut)
