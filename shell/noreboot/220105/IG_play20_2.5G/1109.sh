adb reboot
sleep 30
adb root
sleep 1
adb shell /data/nbdroid/initialize_zram_launch.sh
sleep 1
adb shell /data/dropcache.sh
sleep 1
adb shell /data/lock_mem/lock_memory &
adb shell /data/lock_mem/lock_memory &
adb shell /data/lock_mem/500K_lock_memory &
sleep 1
sleep 1
adb shell "echo 2 > /proc/sys/kernel/printk"
adb shell "echo 10127 > /proc/sys/kernel/foreground_uid"
adb shell "echo 0 > /proc/sys/kernel/swapin_vma_tracking"

./test1.sh 0 > 0.txt
./test1.sh 1 > 1.txt
./test1.sh 2 > 2.txt
./test1.sh 3 > 3.txt
./test1.sh 4 > 4.txt
./test1.sh 5 > 5.txt
./test1.sh 6 > 6.txt
./test1.sh 7 > 7.txt
./test1.sh 8 > 8.txt
./test1.sh 9 > 9.txt
./test1.sh 10 > 10.txt
./test1.sh 11 > 11.txt
./test1.sh 12 > 12.txt
./test1.sh 13 > 13.txt
./test1.sh 14 > 14.txt
./test1.sh 15 > 15.txt
./test1.sh 16 > 16.txt
./test1.sh 17 > 17.txt
./test1.sh 18 > 18.txt
./test1.sh 19 > 19.txt

adb shell reboot
