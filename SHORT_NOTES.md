## Euler's Totient Function

Euler's Totient function returns the number of positive integers less than or equal to n which are co-prime with n. Two numbers are co-prime when they have no common divisors or their gcd is 1. For instance, 
 **phi(8)=4** , since there's four integers 1,3,5,7 that are co-prime with 8. Prime numbers are co-prime with any number below it. if P is a prime number then **phi(P)=P-1** . For instance **phi(7)=6** , since 1,2,3,4,5,6 all are co-prime with 7. 
 Phi function is also multiplicative. That means if n=a*b , then,

**Phi(n) = Phi(a * b) = Phi(a) * Phi(b)**

P1 and P2 are prime numbers and n can be represented in the form of n=P1*P2, then

**Phi(n) = Phi(P1 * P2) = Phi(P1) * Phi(P2) = (P1-1) * (P2-1)**
for instance , 21=3*7
               Phi(21)=Phi(3) * Phi(7)
                      =(3-1)*(7-1)
                      =2*6
                      =12
There are exactly 12 numbers below 21 that are Co-prime with 21.

