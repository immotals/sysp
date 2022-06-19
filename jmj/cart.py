#1/usr/bin/env python
from math import*
r=input("r : ")
theta=input("theta : ")
print("Polar coordinate")
print(r, degrees(theta))
x=r*cos(theta)
y=r*sin(theta)
print("Cartesian coordinate")
print(x,y)

