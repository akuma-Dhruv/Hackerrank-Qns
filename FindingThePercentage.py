#https://www.hackerrank.com/challenges/finding-the-percentage/problem

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()
    k=[]
    k=student_marks[query_name]
    i=0
    p=float(0)
    while(i<len(k)):
        p+=k[i]
        i+=1
    p=p/len(k)
    print("%.2f" % round(p, 2))
