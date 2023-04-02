clear; close all; clc
%% https://projecteuler.net/problem=2


M =  zeros(1,50,'uint32');
n = 0;
idx = 1;

% measure execution speed.
tic
while fibo(n) < 4000000
    n = n + 1;
    
    if mod(fibo(n), 2) == 0
        M(idx) = fibo(n);
        idx = idx + 1;
    end
end
toc
% Elapsed time is 1.221270 seconds.

% reshape matrix to remove any leftover 0's
M = reshape(M(1:idx), 1, []);

% result
disp(sum(M))


% create a recursive fibonacci function for speed
function res = fibo(x)
    if x == 0
        res = 0;
    elseif x == 1
        res = 1;
    else
        res = fibo(x-1) + fibo(x-2);
    end
end