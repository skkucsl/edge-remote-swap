export PATH=/data/busybox:$PATH


./mobibench -p ./tmp -f 102400 -a 1 -y 3 -t 1 > ./output/output_flash_4KB_1t.txt

./mobibench -p /data/nbdroid/nbd-mount/ -f 102400 -a 1 -y 0 -t 1 > ./output/output_nbd_4KB_1t.txt

./mobibench -p /data/zram-mount/ -f 102400 -a 1 -y 0 -t 1 > ./output/output_zram_4KB_1t.txt


./mobibench -p ./tmp -f 102400 -a 1 -y 3 -t 2 > ./output/output_flash_4KB_2t.txt

./mobibench -p /data/nbdroid/nbd-mount/ -f 102400 -a 1 -y 0 -t 2 > ./output/output_nbd_4KB_2t.txt

./mobibench -p /data/zram-mount/ -f 102400 -a 1 -y 0 -t 2 > ./output/output_zram_4KB_2t.txt


./mobibench -p ./tmp -f 102400 -a 1 -y 3 -t 4 > ./output/output_flash_4KB_4t.txt

./mobibench -p /data/nbdroid/nbd-mount/ -f 102400 -a 1 -y 0 -t 4 > ./output/output_nbd_4KB_4t.txt

./mobibench -p /data/zram-mount/ -f 102400 -a 1 -y 0 -t 4 > ./output/output_zram_4KB_4t.txt


./mobibench -p ./tmp -f 102400 -a 1 -y 3 -t 8 > ./output/output_flash_4KB_8t.txt

./mobibench -p /data/nbdroid/nbd-mount/ -f 102400 -a 1 -y 0 -t 8 > ./output/output_nbd_4KB_8t.txt

./mobibench -p /data/zram-mount/ -f 102400 -a 1 -y 0 -t 8 > ./output/output_zram_4KB_8t.txt


