IP_ADDRESS = '100.100.100.100' # IP_ADDRESS of smartphone
PORT = '1234' # default port for Server Bridge X

import telnetlib
tn = telnetlib.Telnet(host=IP_ADDRESS,port=PORT)

tn.write('1'.encode('ascii')) # turn LED on
tn.write('0'.encode('ascii')) # turn LED off

tn.close()