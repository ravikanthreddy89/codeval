#Kadane's algorithm for finding max_sub_array

import sys;

max_ending_here=0;
max_so_far=0;

f=open(sys.argv[1]);

for line in f:
	numbers=line.split(",");
	for i in numbers:
		max_ending_here=max_ending_here+int(i);
		if(max_ending_here <0):
			max_ending_here=0;
		if(max_so_far<max_ending_here):
			max_so_far=max_ending_here;
	print max_so_far;
	max_ending_here=0;
	max_so_far=0;
