def f(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return f(n-1)+ f(n-2)
a=int(input('Enter the number:'))
print (f(a))