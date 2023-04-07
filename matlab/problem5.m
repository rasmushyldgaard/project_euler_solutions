clear; close all; clc
%% https://projecteuler.net/problem=5

% assume the number we are searching for is larger than 2520

% prime factorization of 20 is 2*2*5
% this means if a number is evenly divisible by 20, it's also evenly
% divisible by 2, 4, 5 and 10. The modulus of any number with 1 equals
% 0 aswell, so our vector of numbers to check becomes:
v = [3, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 19];

% upper limit, increase it if no number found
N = 1000000000;

% choose a step size which multiples is always evenly divisible by 20
% prime factorization of 1040*n (2*2*2*5*13)*n
step = 1040;

res = 0;

% measure execution speed
tic
for n = 0:step:N

    % check if the number is evenly divisible by 19 first before
    % computing the rest.
    if mod(n, 19) == 0 && n > 0
        
        % compute modulus of our vector with n
        if mod(n, v) == 0
            res = n;
            break
        end
                
    end

end
toc
% Elapsed time is 0.037240 seconds.

% result
disp(res)