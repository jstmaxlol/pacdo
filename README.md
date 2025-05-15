```
                     _
 _ __   __ _  ___ __| | ___
| '_ \ / _` |/ __/ _` |/ _ \
| |_) | (_| | (_| (_| | (_) |
| .__/ \__,_|\___\__,_|\___/
|_|
a simple cli utility to shorten pacman syntax.
no dependancies other than pacman, sudo and (optionally) figlet

idk i was bored and started to hate writing 'sudo pacman -S package'
for every package i needed while setting up a new arch install so yeah.
                 _        _ _           _
  ___ ___  _ __ | |_ _ __(_) |__  _   _| |_ ___
 / __/ _ \| '_ \| __| '__| | '_ \| | | | __/ _ \
| (_| (_) | | | | |_| |  | | |_) | |_| | ||  __/
 \___\___/|_| |_|\__|_|  |_|_.__/ \__,_|\__\___|
if you want to contribute just do a lil PR and i'll probably accept it
because your code is better than mine, probably

 _   _ ___  __ _  __ _  ___   ___  ___ _ __ ___  ___ _ __
| | | / __|/ _` |/ _` |/ _ \ / __|/ __| '__/ _ \/ _ \ '_ \   since it could be useful
| |_| \__ \ (_| | (_| |  __/ \__ \ (__| | |  __/  __/ | | |  to read the usage screen before actually
 \__,_|___/\__,_|\__, |\___| |___/\___|_|  \___|\___|_| |_|  installing pacdo, here's it copypasted
                 |___/
[ help/usage screen ]
pacdo base syntax
'pacdo verbal/command package'

[ possible verbals/commands ]
pacdo h/H/help                        = shows usage screen
pacdo s/S/install/get/sync package    = installs a package (if found)
pacdo syu/Syu/yolo                        = runs a full-system-upgrade (same as pacman -Syu)
                                        ('pacdo yolo' also parses --noconfirm)
pacdo r/R/remove package              = removes a package
pacdo rq/Rq package                   = removes a package with all their dependancies
pacdo q/Q/query                       = queries pacman database (same as pacman -Q)
pacdo ph                              = shows pacman's usage screen
pacdo contribute/repo                 = opens pacdo's github repo
pacdo u/U/upgrade package             = upgrade a package (if found)
    
developer note: if anyone is interested in this shortened syntax
just let me know and i'll make version for other utils
```
