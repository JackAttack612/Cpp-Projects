import os
directory = os.path.dirname(__file__)
print(directory)
filename = input("Enter Username: ")
os.remove(directory + r"\\Accounts\\" + filename + r".txt")

