import random

def is_sorted(data) -> bool:
    """Determine whether the data is sorted."""
    for i in range(len(data) - 1):
        if data[i] > data[i + 1]:
            return False
    return True

def bogosort(data) -> list:
    """Shuffle data until sorted."""
    while not is_sorted(data):
        random.shuffle(data)
    return data

t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    ansls = []
    ansls = bogosort(a)
    ans = ""
    for e in a:
        ans += str(e) + " "
    print(ans)