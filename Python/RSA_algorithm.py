import random
prime_num = [
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 
    71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 
    151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 
    233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 
    317, 331, 337, 347, 349]

def  primalityTest(n):
    while True:
        number = random.randrange(2**(n-1)+1, 2**n - 1)
        for i in prime_num:
            if number % i == 0 and i**2 <= number: break
        else: return number

def MillerRabinPassed(num):
    d = num-1
    count = 0
    while d % 2 == 0:
        d >>= 1
        count += 1
    def trials(round_tester):
        if pow(round_tester, d, num) == 1:
            return False
        for i in range(count):
            if pow(round_tester, 2**i * d, num) == num-1:
                return False
        return True
    for _ in range (20):
        if trials(random.randrange(2, num)): return False
    return True

def extendedEuclidean(a, b):
    if a == 0: return (b, 0, 1)
    else:
        g, y, x = extendedEuclidean(b % a, a)
        return (g, x - (b // a) * y, y)

def modinv(a, m):
    g, x, y = extendedEuclidean(a, m)
    if g != 1:
        raise Exception('Modular inverse does not exist')
    else: return x % m

if __name__ == "__main__" : 
    count = 0
    while count!=2:
        bits = 64
        prime = primalityTest(bits)
        if not MillerRabinPassed(prime): continue
        else:
            if count==0: x = prime
            else : y = prime
            count+=1
    print("No of bits : ",bits)
    n = x*y
    phi = (x-1)*(y-1)
    for i in prime_num:
        if phi%i!=0:
            e = i
            break
    d = modinv(e,phi)
    print("Prime number 1: ",x)
    print("Prime number 2 : ",y)
    print("Value of e : ",e)
    print("Value of d : ",d)
    print("Generated Public key : ",[e,n])
    print("Generated Private key : ",[d,n])
    plain_txt = input("Enter short message : ")
    decrypted_text = ""
    encrypted_list = []
    for i in plain_txt:
        encrypted_list.append(pow(ord(i),e,n))
    print("Encrypted sequence : ", encrypted_list)
    for i in encrypted_list:
        decrypted_text += chr(pow(i,d,n))
    print("Decrypted text : ",decrypted_text)   

# EXAMPLE 
# No of bits :  64
# Prime number 1:  9640460918252879201
# Prime number 2 :  15891657882132505651
# Value of e :  7
# Value of d :  21886129534134820135449507003252497143
# Generated Public key :  [7, 153202906738943740973678667823152864851]
# Generated Private key :  [21886129534134820135449507003252497143, 153202906738943740973678667823152864851]
# Enter short message : hey
# Encrypted sequence :  [131593177923584, 107213535210701, 379749833583241]
# Decrypted text :  hey
