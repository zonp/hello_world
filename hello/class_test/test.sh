for file in `ls | egrep .*done`
do
	new=`echo $file | sed 's/done//g'`;
	mv $file $new;
	echo $new;
done
