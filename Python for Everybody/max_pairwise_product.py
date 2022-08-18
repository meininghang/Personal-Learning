def max_pairwise_product(numbers):
    new = sorted(numbers)
    max_product = new[-1] * new[-2]

    return max_product

if __name__ == '__main__':
    _ = int(input())
    input_numbers = list(map(int, input().split()))
    print(max_pairwise_product(input_numbers))

