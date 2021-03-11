# https://github.com/sivel/speedtest-cli/wiki
import speedtest 
import math
from bitmath import *

s = speedtest.Speedtest()

# If you want to test against a specific server
# servers = [1234]
servernames =[] 

# If you want to use a single threaded test
# threads = 1
threads = None

option = int(input('''What speed do you want to test: 

1) Download Speed 

2) Upload Speed 

3) Ping 

Your Choice: ''')) 


if option == 1: 
	# s.get_best_server(s.set_mini_server("http://speedtest.test.fr/"))

	bt_s = s.download()

	mb_s= bt_s/(pow(1,-6))

	print(bt_s)	
	print(mb_s)

elif option == 2: 

	bt_s = s.upload(pre_allocate=False)

	mb_s= bt_s/(pow(1,-6))

	print(bt_s)
	print(mb_s) 

elif option == 3: 

	s.get_servers(servernames) 

	print(s.results.ping) 

else: 

	print("Please enter the correct choice !") 
