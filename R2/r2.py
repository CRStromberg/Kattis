import sys

user_input = sys.stdin.readline()
user_input = user_input.split()
r1 = int(user_input[0])
s = int(user_input[1])
 
ans = (s * 2) - r1

print(ans)