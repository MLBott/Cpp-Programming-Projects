def tribonacci(signature, n):
    #your code here
    seq = signature[:]
    
    for item in range(n - len(signature)):
        this_fib = 0
        start = len(seq) - len(signature)
        for i in seq[start:]:
            this_fib += i
        seq.append(this_fib)
        
    return seq[:n]



print(tribonacci([7,10,17], 18))