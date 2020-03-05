import sys

user_input = sys.stdin.readline()
user_input = user_input.split()
x1 = int(user_input[0])
y1 = int(user_input[1])

user_input = sys.stdin.readline()
user_input = user_input.split()
x2 = int(user_input[0])
y2 = int(user_input[1])

user_input = sys.stdin.readline()
user_input = user_input.split()
x3 = int(user_input[0])
y3 = int(user_input[1])

if x1 == x2:
    x4 = x3
elif x1 == x3:
    x4 = x2
else:
    x4 = x1

if y1 == y2:
    y4 = y3
elif y1 == y3:
    y4 = y2
else:
    y4 = y1

print(x4, y4)