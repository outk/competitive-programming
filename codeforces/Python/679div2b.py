def main():
    from sys import stdin

    readline = stdin.readline

    t = int(readline())

    for _ in range(t):
        n, m = map(int, readline().split())

        rows = [list(map(int, readline().split())) for _ in range(n)]

        columns = [list(map(int, readline().split())) for _ in range(m)]

        rowsets = [set(rows[i]) for i in range(n)]

        order = [0 for _ in range(n)]

        for i in range(n):
            for j in range(n):
                if columns[0][i] in rowsets[j]:
                    order[i] = j
                    break

        for i in range(n):
            print(" ".join(map(str, rows[order[i]])))

if __name__ == "__main__":
    main()