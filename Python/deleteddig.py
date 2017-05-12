Strings = raw_input("Input : ")

def Simple():
	for i in range(len(Strings)):
		if Strings[i].isalnum():
			Strings[i] = 'A'


def Efficient():
	print filter(str.isalpha, Strings) 

if __name__ == '__main__':
	#Efficient();
	Simple();