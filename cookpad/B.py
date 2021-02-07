dish = list(map(int, input().split(" ")))

def even():
    print(dish[0] + dish[len(dish)-1])

def odd():
    print(dish[0] + dish[1] + dish[len(dish)-1])

if len(dish) % 2 == 0:
    even()
else:
    odd()