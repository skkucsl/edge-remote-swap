adb reboot
sleep 30
adb root
sleep 1
adb shell /data/nbdroid/initialize_zram_launch.sh
sleep 1
adb shell /data/dropcache.sh
sleep 1
sleep 1
adb shell "echo 2 > /proc/sys/kernel/printk"
adb shell "echo 10128 > /proc/sys/kernel/foreground_uid"
adb shell "echo 1 > /proc/sys/kernel/swapin_vma_tracking"
