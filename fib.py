def fibo(n):
    if n==0 or n==1 or n==2:
        return 1
    return fibo(n-1)+fibo(n-2)

print(fibo(20))