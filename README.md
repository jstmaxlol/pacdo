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

also i actually just added a paru version, basically a copypasta
with calls to paru instead of pacman. if you want that i do not
think i will be creating an AUR repository but you can get it
from the repo (extra/pardon.cpp) and compile it yourself,
it's an extra still so give me a break ;)
also i don't think i'll be updating that version much at all, idk.
i really stopped using pacdo *because* of the fact that i discovered
how good and useful paru is, so yeah, maintained for fun i guess.

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
// removed, since i update it every update it's not worth it
// having to copypasta it here manually removing every '<<'
// and '\n' and all of that, so.. yeah just get pacdo <3


jstmax! : <jstmaxlol@disroot.org>, <maxwasmailed@proton.me>
```
