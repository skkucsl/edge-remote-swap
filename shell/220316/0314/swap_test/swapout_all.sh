#!/bin/bash


adb reboot


for var in `adb shell ps -ef |awk '{print $2}'`
do


	adb shell "echo anon > /proc/$var/reclaim"
	adb shell "echo $var > /proc/sys/kernel/swapcache_flush"

	adb shell sleep 1
done

