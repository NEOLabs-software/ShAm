#!/bin/bash
echo "sham v2.0.0"
if [ "$1" == "" ]
then
    echo "usage:sham [shell script] --name [name of program]"
else
    dect=$(ls $1)
    if [ "$dect" == $1 ]
    then
        if [ "$2" == "--name" ]
        then
            if [ "$3" == "" ]
            then
                echo "E:--name needs a name"
            else
                echo "do you want to continue?"
                echo "[y/N]"
                read yesno
                if [ "$yesno" == y ]
                then
                    shc -f $1
                    mv "$1"*.x $3
                    echo "DONE!!"
                    exit
                else
                    echo "E:aborted"
                fi
            fi
        else
            echo "E:expected --name"
        fi
    else
        echo "E:there is no such file!"
    fi
fi
