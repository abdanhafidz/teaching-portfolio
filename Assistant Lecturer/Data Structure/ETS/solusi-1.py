s = input()

stack = []
for c in s:
    if(c == "O"):
        stack.append(c)
    else:
        if not stack:
            print("TIDAK")
            exit(0)
        else:
            stack.pop()

if not stack:
    print("YA")
else:
    print("TIDAK")
