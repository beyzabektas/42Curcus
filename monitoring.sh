#!/bin/bash
arc=$(uname --all)
p_cpu=$(cat /proc/cpuinfo | grep 'physical id' | sort -u | wc -l)
v_cpu=$(cat /proc/cpuinfo | grep ^processor | wc -l)
memory_usage=$(free -m | grep 'Mem' | awk '{printf("%d/%dMB(%.2f%%)", $3,$2, $3/$2 * 100)}')
disk_usage=$(df -Bm | grep 'LVM' | awk '{used += $3}{total += $2} END {printf "%d/%dGb (%d%%)",used,total/1024,used/total*100}')
cpu_load=$(top -bn1 | grep '^%Cpu' | awk '{printf "%.1f%%", $2 + $4}')
last_boot=$(who -b | awk '{print $3, $4}')
lvm_use=$(lsblk | grep 'LVM' | wc -l| awk '{if($1>0) print "yes"; else print "no"}')
tcp=$(cat /proc/net/sockstat | grep 'TCP' | awk '{print $3}')
users=$(users | wc -l)
ipv4=$(hostname -I)
mac=$(ip link | grep 'link/ether' | awk '{print $2}')
sudo=$(cat /var/log/sudo/sudo.log | wc -l | tr '\n' ' ')
wall "
#Architecture: $arc
#CPU physical: $p_cpu
#vCPU: $v_cpu
#Memory Usage:$memory_usage
#Disk Usage:$disk_usage
#CPU load:$cpu_load
#Last boot:$last_boot
#LVM use:$lvm_use
#Connections TCP:$tcp ESTABLISHED
#User log:$users
#Network:IP $ipv4($mac)
#Sudo: $sudo cmd
"
