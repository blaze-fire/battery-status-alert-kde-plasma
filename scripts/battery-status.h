#!/bin/bash
while true
    do 
        export DISPLAY=:0.0
        battery_level=`cat /sys/class/power_supply/BAT1/capacity`   #change BAT1 to your battery name by command `ls /sys/class/power_supply/`
        battery_status=`cat /sys/class/power_supply/BAT1/status`
        if [ $battery_status = "Charging" ] && [ $battery_level -ge 85 ];
        then
                play /home/krish/scripts/server_down_alert.mp3;  
                kdialog --msgbox "Battery fully charged";
        fi
        sleep 120
    done
