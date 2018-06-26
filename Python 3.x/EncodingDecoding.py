# Encoding and Decoding in Python 3.x
a = 'Harshit'

# initialize byte object.
c = b'Harshit'

# using encode() to encode string
d = a.encode('ASCII')

if (d == c):
    print("Encoding successful.")
else:
    print("Encoding unsuccessful. :( ")

# Similarly, decode() is the inverse process.
# decode() will convert byte to string.
