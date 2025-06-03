```
                     _
 _ __   __ _  ___ __| | ___
| '_ \ / _` |/ __/ _` |/ _ \
| |_) | (_| | (_| (_| | (_) |
| .__/ \__,_|\___\__,_|\___/
|_|
a simple cli utility to shorten pacman syntax.
no dependencies other than pacman, sudo and (optionally) figlet

idk i was bored and started to hate writing 'sudo pacman -S package'
for every package i needed while setting up a new arch install so yeah.

 _           _        _ _
(_)_ __  ___| |_ __ _| | |
| | '_ \/ __| __/ _` | | |
| | | | \__ \ || (_| | | |
|_|_| |_|___/\__\__,_|_|_|
the easiest way to install pacdo is through the AUR package:
* yay    : yay -S pacdo
* paru   : paru -S pacdo
* trizen : trizen -S pacdo
* pamac  : pamac build pacdo
* aurman : aurman -S pacdo

otherwise, stick to manual compiling :)
just 'g++ -o pacdo pacdo.cpp' after 'git clone'ing the repo 

                 _        _ _           _
  ___ ___  _ __ | |_ _ __(_) |__  _   _| |_ ___
 / __/ _ \| '_ \| __| '__| | '_ \| | | | __/ _ \
| (_| (_) | | | | |_| |  | | |_) | |_| | ||  __/
 \___\___/|_| |_|\__|_|  |_|_.__/ \__,_|\__\___|
if you want to contribute just do a lil PR and i'll probably accept it
because your code is better than mine, probably

 _   _ ___  __ _  __ _  ___   ___  ___ _ __ ___  ___ _ __
| | | / __|/ _` |/ _` |/ _ \ / __|/ __| '__/ _ \/ _ \ '_ \   since it could be useful
| |_| \__ \ (_| | (_| |  __/ \__ \ (__| | |  __/  __/ | | |  to read the usage screen
 \__,_|___/\__,_|\__, |\___| |___/\___|_|  \___|\___|_| |_|  before installing pacdo
                 |___/
[ help/usage screen ]
pacdo base syntax:
'pacdo verbal/command package'

[ possible verbals/commands ]
pacdo h/H/help                        = shows usage screen
pacdo s/S/install/get/sync package    = installs a package (if found)
pacdo syu/Syu/yolo                    = runs a full-system-upgrade (same as pacman -Syu)
                                        ('pacdo yolo' also parses --noconfirm)
pacdo r/R/remove package              = removes a package
pacdo rq/Rq package                   = removes a package with all their dependancies
pacdo q/Q/query                       = queries pacman database (same as pacman -Q)
pacdo ph                              = shows pacman's usage screen
pacdo contribute/repo                 = opens pacdo's github repo
pacdo u/U/upgrade package             = upgrade a package (if found)
pacdo RemoveDatabaseLock/dbr          = removes db.lck (/var/lib/pacman/db.lck)
                                        warning! only use 'pacdo dbr' if you are 100% sure
                                        there's NO pacman instances running. you have been warned.

developer note: if anyone is interested in this shortened syntax
just hit me up somewhere and i'll make version for other utils¶
```
