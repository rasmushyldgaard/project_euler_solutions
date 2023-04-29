clear; close all; clc
%% https://projecteuler.net/problem=6

N = 100;

% measure execution speed
tic
sum_of_squares = sum((0:N).^2);
square_of_sum = sum(0:N)^2;
res = square_of_sum - sum_of_squares;
toc
% Elapsed time is 0.000231 seconds.

% result
disp(res)

