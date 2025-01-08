def prefix_sum(li: list[int]) -> list[int]:
    psum = [0] * (len(li)+1)
    for i in range(len(li)):
        psum[i+1] = psum[i]+li[i]
    return psum

def main():
    N, Q = map(int, input().split())
    li = [0] * N
    for i in range(N):
        li[i] = int(input())
    p = prefix_sum(li)
    for i in range(Q):
        l, r = map(int, input().split())
        print(p[r]-p[l])

if __name__ == '__main__':
    main()