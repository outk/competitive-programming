n = int(input())
a = int(input())
b = int(input())
c = int(input())
d = int(input())
e = int(input())

if n%a == 0:
    train = n // a
else:
    train = 1 + (n // a)
    
if n%b == 0:
    bus = (n // b)
else:
    bus = 1 + (n // b)
    
if n%c == 0:
    taxi = (n // c)
else:
    taxi = 1 + (n // c)
    
if n%d == 0:
    plane = (n // d)
else:
    plane = 1 + (n // d)
    
if n%e == 0:
    boat = (n // e)
else:
    boat = 1 + (n // e)

vehicles = [train, bus, taxi, plane, boat]

latest = train
for i in range(len(vehicles)):
    if latest < vehicles[i]:
        latest = vehicles[i]

if latest == train:
    an = train + 4
elif latest == bus:
    an = bus + 4
elif latest == taxi:
    an = taxi + 4
elif latest == plane:
    an = plane+ 4
else:
    an = boat + 4

print(an)
