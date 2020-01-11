import numpy as np
import copy

h, w = map(int, input().split())
a = [input() for _ in range(h)]

a = np.array([[0 if (ai[j] == "#") else np.inf for j in range(w)] for ai in a])

for i in range(1, h):
    a[i] = np.minimum(a[i], a[i - 1] + 1)
for i in range(h - 2, -1, -1):
    a[i] = np.minimum(a[i], a[i + 1] + 1)
for i in range(1, w):
    a[:, i] = np.minimum(a[:, i], a[:, i - 1] + 1)
for i in range(w - 2, -1, -1):
    a[:, i] = np.minimum(a[:, i], a[:, i + 1] + 1)

print(int(a.max()))
