clear; close all; clc
%% https://projecteuler.net/problem=7

N = 1000000;
M = 1:N;

% use MATLAB `isprime` to compute all numbers in M if prime or not.
tic
p = isprime(M);

% search and count all found primes in p, stop at prime nr. 10001.
count = 0;
res = 0;
for n = 1:N
    if p(n) == 1
        count = count + 1;
        if count == 10001
            res = n;
            break
        end
    end
end
toc
% Elapsed time is 3.162773 seconds.

% result
disp(res)