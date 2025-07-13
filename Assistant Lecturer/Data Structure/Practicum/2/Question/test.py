d = {
    1: [2,3],
    2: [4,5]
}

def remove(dictionary, x):
    return {k: v for k, v in dictionary.items() if x not in v or k != v}


print(remove(d, 2))
