v1=`echo $FT_NBR1 | sed 'y/'\''\\"?!/01234/'`
v2=`echo $FT_NBR2 | sed 'y/mrdoc/01234/'`
v3=`echo "ibase=5;$v1+$v2" | bc`
echo "obase=13;$v3" | bc | sed 'y/0123456789ABC/gtaio luSnemf/'
