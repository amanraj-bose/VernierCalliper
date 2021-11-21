#!/bin/bash

apt update && apt upgrade -y
apt install figlet -y
apt install ruby -y
gem install lolcat
apt install g++ -y
apt install build-essential -y
apt  install clang -y
clear
figlet -c Completed | lolcat
echo
echo
echo
echo "$(tput setaf 2)"Completed ..."$(tput sgr0)"
exit
