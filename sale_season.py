T=int(input())
for i in range(T):
    X=int(input())
    if X<=100:
        print(X)
    elif X>100 and X<=1000:
        print(X-25)
    elif X>1000 and X<=5000:
        print(X-100)
    else:
        print(X-500)