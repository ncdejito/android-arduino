# on termux
apt update
apt install openssh
apt install python3

passwd # set password
whoami # get USER
ifconfig # get IP_ADDRESS of smartphone

# turn on ssh service
sshd

# on pc
ssh USER@IP_ADDRESS -p 8022
# default port for openssh is 8022