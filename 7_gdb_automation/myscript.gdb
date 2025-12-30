break bar
break foo
start
continue

#function , if you want to repeat something
define basic_dump
    info local
    info args
    continue
end

basic_dump

dump memory mydata.txt my_message my_message+10

quit