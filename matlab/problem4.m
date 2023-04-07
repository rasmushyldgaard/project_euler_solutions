clear; close all; clc
%% https://projecteuler.net/problem=4

res = 0;

% measure execution speed
tic
for n = 999:-1:100
    for m = 999:-1:100

        z = n * m;

        if z > res && reverse_number(z) == z
            res = z;
        end

    end
end
toc
% Elapsed time is 0.025117 seconds.

% result
disp(res)


% function to reverse a number with math
function reversed = reverse_number(x)
    decimals = 10 .^ (0:log10(x));
    nums = mod(floor(x ./ decimals), 10);
    reversed = sum(nums .* flip(decimals));
end