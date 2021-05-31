### 4.1-1

Find the smallest element.

### 4.1-2

start = 0
end = 0
sum = -inf

for i=1 to n
    temp_sum = 0
    for j=i to n
	temp_sum += A[j]
    if temp_sum > sum
	sum = temp_sum
	start = i
	end = j

### 4.1-3 TODO


