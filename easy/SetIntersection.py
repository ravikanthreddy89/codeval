import sys

f=open(sys.argv[1]);

for line in f:
	spl=line.split(";");
	print type(spl)
	print len(spl)
	break;
