for file in `ls | egrep 201905`
do
	new=`echo $file | sed 's/201905//g'`;
	mv $file $new;
	echo $new;
done
