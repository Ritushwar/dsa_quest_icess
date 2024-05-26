n = int(input())
student_input = input().split(" ")
student = [int(num) for num in student_input]
student = set(student)
student = list(student)
missing = 0
err = -1
for i in range(1,n+1):
    if i in student:
        continue
    else:
        missing = i
        break
student.sort(reverse=True)
try:
    print(missing, student[missing-1])
except IndexError:
    print(missing, err)