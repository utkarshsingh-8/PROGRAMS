'''
for x in range(10):                                                    #👻👿😂😬
    if x > 5:
        break
    print(x)
'''

'''
for x in range(10):                                                    #👻👿😂😬
       if x == 5:
            continue
       print(x)
'''

'''
dict = {1: 10, 2: 20, 3: 30, 4: 40, 5: 50, 6: 60}                      #👻👿😂😬
if:
    print('Key ='+str(x)+', is present in the dictionary')
else:
    print('Key ='+str(x)+', is not present in the dictionary')
'''


class Vehicle:                                                         #👻👿😂😬
    def __init__(self, name, max_speed, mileage):
        self.name = name
        self.max_speed = max_speed
        self.mileage = mileage

    def seating_capacity(self, capacity):
        return "The seating capacity of a {self.name} is {capacity} passengers"


School_bus = Bus("School Volvo", 180, 12)
print(School_bus.seating_capacity())

