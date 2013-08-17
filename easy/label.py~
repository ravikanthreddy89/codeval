import sys
import json

f=open(sys.argv[1])

for line in f:
	response=json.loads(line);
	total=0;
	for item in response[u'menu'][u'items']:
		if(item.has_key("label")):
			print "yes";
		
	
