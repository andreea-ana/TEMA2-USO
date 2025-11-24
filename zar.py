import random

def main():
	x = random.randint(1,6)
	y = random.randint(1, 6)
	
	if x + y == 12:
		print("Dau cu zaru 6 6 ca mine nu se mai naste")
	elif x + y == 11:
		print("Dau cu zaru 6 5 n-am nevoie de servici")
	else:
		print(f"Dau cu zaru {x} {y}")
main()
