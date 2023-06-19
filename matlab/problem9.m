clear; close all; clc
%% https://projecteuler.net/problem=9

N = 1000;
K = 50;
res = 0;

% use complex multiplication to find pythagorean triplets
tic
for x = 1:N
    for y = 1:N

        % any k-multiple of a pythagorean triplet is a triplet
        for k = 1:K
            z = k*(x+y*1j)^2;

            % only consider if a, b, c are all greater than 0
            if real(z) > 0 && imag(z) > 0 && abs(z) > 0
                sum = real(z) + imag(z) + abs(z);

                if sum == N
                    res = real(z)*imag(z)*abs(z);
                    break
                elseif sum > N
                    break
                end
            else
                break
            end
        end
    end
end
toc
% Elapsed time is 0.106105 seconds.

% result
disp(res)

