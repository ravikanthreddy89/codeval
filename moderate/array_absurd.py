import sys;

f=open(sys.argv[1]);

for line in f:
	l=line.split(";");
	n=int(l[0]);
	array=l[1].split(",");
	i=0;
	for num in array:
		array[i]=int(num)
		i=i+1;
		
	
