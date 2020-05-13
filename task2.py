X="00803234"
Y=input("Enter a number: ")
sum=0
sum1=0
for i in range(0,len(X)):
    sum = sum + int(X[i])
print("The digit sum of matriculation number",X,"is",sum)
for j in range (0,len(Y)):
    sum1= sum1 + int(Y[j])
print("The digit sum of the number you entered",Y,"is",sum1)
Z = sum - sum1
print("the difference between both the sum is",Z)
