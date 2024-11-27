#!/bin/bash
echo '进入测试系统'
while true ;do
echo '【1】测试加法，【2】测试减法，【3】测试点积，【4】测试模长，【5】测试归一化，【6】测试叉乘，【7】测试向量拷贝,【0】退出系统'
read key
case $key in
1) 
./build/test_add
;;
2)
./build/test_subtract
;;
3)
./build/test_dot_product
;;
4)
./build/test_magnitude
;;
5)
./build/test_normalize
;;
6)
./build/test_cross_product
;;
7)
./build/test_copy
;;
o)
echo "退出系统"
exit
;;
*)
reboot
;;
esac
done
