import sys;

f=open(sys.argv[1]);

for line in f:
	elements=line.split();
	m=int(elements.pop());
	l=len(elements);
	if(m<l):
		print elements[len(elements)-m];
	
	
