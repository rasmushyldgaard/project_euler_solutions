clear; close all; clc
%% https://projecteuler.net/problem=3

N = 600851475143;
n = 2;

% measure execution speed
tic
while n*n <= N
    if mod(N, n) ~= 0
        n = n + 1;
    else
        N = floor(N / n);
    end
end
toc
% Elapsed time is 0.001267 seconds.

% result
disp(N)