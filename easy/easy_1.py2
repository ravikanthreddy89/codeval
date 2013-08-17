import sys

file=open(sys.argv[1]);


for line in file:
	ip=line.split();
	a=int(ip[0])
	b=int(ip[1])
	N=int(ip[2])
	for num in range(1,N+1):
		if(num%a==0 and num%b==0):
			#print "AB"
			if(num==N):		
				sys.stdout.write("FB");
			else:
				sys.stdout.write("FB ");
		elif (num%a==0 and num%b!=0):
			if(num==N):		
				sys.stdout.write("F");
			else:
				sys.stdout.write("F ");
		elif(num%a!=0 and num%b==0):
			if(num==N):		
				sys.stdout.write("B");
			else:
				sys.stdout.write("B ");
		else:
			#print num
			if(num==N):		
				sys.stdout.write(num);
			else:
				sys.stdout.write(str(num));
				sys.stdout.write(" ");
	
	print "" 
