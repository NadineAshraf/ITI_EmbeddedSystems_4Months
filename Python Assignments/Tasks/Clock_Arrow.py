# import only system from os
from os import system, name
 
# import sleep to show output for some time period
from time import sleep
 
# define our clear function
def clear():
 
    # for windows
    if name == 'nt':
        _ = system('cls')
 
    # for mac and linux(here, os.name is 'posix')
    else:
        _ = system('clear')
while True:
	for i in range(10):
		print("\t\t\t\t\t\n",end="")
	for i in range(5):
		print("\t\t\t\t\t\t",end="")
		for k in range (i+1):
			print("*",end="")
		print("")
	print("\t\t\t\t\t",end="")
	for i in range(17):
		print("*",end="")
	print("")	
	for i in range(5, 0, -1):
		print("\t\t\t\t\t\t",end="")
		for j in range(0, i):
			print("*", end="")
		print("")
	# sleep for 2 seconds after printing output
	sleep(0.1)
	# now call function we defined above
	clear()
	for i in range(15):
		print("\t\t\t\t\t\n",end="")
	for i in range(8):
		print("\t\t\t\t\t*")
	for i in range(5, 1, -1):
		print("\t\t\t\t  ",end="")
		for space in range(0, 5-i):
			print("  ", end="")
		for j in range(i, 2*i-1):
			print("* ", end="")
		for j in range(1, i-1):
			print("* ", end="")
		print()
	# sleep for 2 seconds after printing output
	sleep(0.1)
	# now call function we defined above
	clear()
	for i in range(10):
		print("\t\t\t\t\t\n",end="")
	for i in range(5):
		# print spaces
		print("\t\t\t  ",end="")
		for j in range(6 - i - 1):
			print(' ', end='')
		# print stars
		for k in range(i + 1):
			print('*', end='')
		print()
	print("\t\t\t",end="")
	for i in range(17):
		print("*",end="")
	print(" ")
	# lower triangle
	for i in range(6 - 1):
		# print spaces
		print("\t\t\t  ",end="")
		for j in range(i + 1):
			print(' ', end='')
		# print stars
		for k in range(6 - i - 1):
			print('*', end='')
		print()
	# sleep for 2 seconds after printing output
	sleep(0.1)
	# now call function we defined above
	clear()
	
	for i in range(5):
		print("\t\t\t\t\t\n",end="")
	k = 0
	for i in range(1, 4+1):
		for space in range(-14,(6-i)+1):
			print(end="  ")
		while k!=(2*i-1):
			print("* ", end="")
			k += 1
	
		k = 0
		print()
		
	for i in range(8):
		print("\t\t\t\t\t*")
	print(" ")
	# sleep for 2 seconds after printing output
	sleep(0.1)
	# now call function we defined above
	clear()
