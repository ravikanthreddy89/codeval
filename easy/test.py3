import sys;

f=open(sys.argv[1]);

d={"one":1, "two":2, "three":3, "four":4, "five":5, "six":6, "seven":7, "eight":8, "nine":9, "zero":0}

for line in f:
	numbers=line.split(";");
	for items in numbers:
		print type(items);
		print d[items];
		break;
		
	break;
