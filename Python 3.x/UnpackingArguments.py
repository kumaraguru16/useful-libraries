# Unpacking arguments without for loop

def display(a, b, c, d):
    print(a, b, c, d)

my_list = [ 1, 2, 3, 4 ] 

print("Without for-loop: ")
display(*my_list)

# Packing dictionary

def fun(**kwargs):
    # kwargs is dictionary
    print(type(kwargs))
    # printing dictionary items
    for key in kwargs:
        # kwargs[key] is value of the key
        print("{} = {}".format(key, kwargs[key]))

fun(name = "Harshit", id = "101", language = "Python")
