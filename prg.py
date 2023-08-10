# for i in range(500):
#     if(1.75*i==700):
#         print("There should be ₹",i," coins")

#There are 60eyes and 86 foot in total find total no of goats and hens
# for i in range(1,90):
#     for j in range(1,60):
#         if (4*i)+(2*j)==86 and (i+j)*2==60:
#             print("There are ",i,"goats and ",j," hens")

# for i in range(1,102,2):
#     for j in range(101,0,-3):
#         if(i==j):
#             print(i," is the common")

ins = 0
bac = 13312
day=10
while day>1:
    ins = bac/2
    bac = ins
    day -=1
print(ins)