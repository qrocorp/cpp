def main():
    a, b, c = map(int, input().split())
    ans = (100 - a) * (a / (a + b + c)) + (100 - b) * \
        (b / (a + b + c)) + (100 - c) * (c / (a + b + c))
    print(ans)


if __name__ == '__main__':
    main()
