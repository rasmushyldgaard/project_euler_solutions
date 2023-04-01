clear; close all; clc
%% https://projecteuler.net/problem=1

N = 1000;
sum = 0;

for n = 0:N-1
    if mod(n, 3) == 0 || mod(n, 5) == 0
        sum = sum + n;
    end
end

% result
disp(sum)