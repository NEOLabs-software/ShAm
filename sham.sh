#!/bin/bash
echo "Shell script app maker v1.0.0"
echo "what shell script will you use?"
read shell
if [ $(ls $shell) == $shell ]
then
echo this is the script $shell
echo 'is that right?{Y|n}'
read yn
if [ $yn == n ]
then
    echo aborting
    exit
else
if ! command -v shc &> /dev/null
then
   echo "shc not found. install with sudo apt install shc"
   exit
else
   echo step {1/4}
   shc -f $shell
   echo step {2/4}
   file=$(ls *sh.x)
   echo what will the name of the new program be?
   read name
   echo -step {3/4}
   mv $file $name
   echo {4/4}
   remove=$(ls *sh.x.c)
   rm $remove
   echo DONE!
fi
fi
else
echo $shell no such file or directory
echo aborting
fi
