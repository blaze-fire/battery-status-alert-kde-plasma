# battery-status-alert-kde-plasma

1. Save this folder in you home directory <br>
    (**Note**: change BAT1 in script to your battery name by command `ls /sys/class/power_supply/`)
2. Install Sox library in order to play mp3 sound by commands: <br>
    `sudo apt update && sudo apt install sox` <br>
    `sudo apt-get install libsox-fmt-all`
2. make script executable using sudo chmod +x /path-to-script/
3. Add script as login script in background services in kubuntu which makes it run automatically after you login
