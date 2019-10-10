
def SieveOfEratosthenes(n): 
      
    prime = [True for i in range(n + 1)] 
    p = 2
    while (p * p <= n): 
          
        if (prime[p] == True): 
              
            for i in range(p * 2, n + 1, p): 
                prime[i] = False
        p += 1
    prime[0]= False
    prime[1]= False
    return prime
  
if __name__=='__main__': 
    N = 1000000
    prime = SieveOfEratosthenes(N)
    t = int(input())
    for i in range(0, t):
        n = int(input())
        prime_sum = 0
        for j in range(2, n+1):
            if prime[j]:
                prime_sum += j
        print(prime_sum)
        