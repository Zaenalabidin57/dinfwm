#/bin/sh


#xrdb merge ~/.Xresources
#xbacklight -set 10 & 
xrandr --output HDMI-A-0 --left-of eDP
xrandr --output eDP --set TearFree on
xrandr --output HDMI-A-0 --set TearFree on 

nitrogen --restore &
/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
xset r rate 200 50 &
xss-lock --transfer-sleep-lock -- i3locki-fancy-dualmonitor --nofork &
dunst &
picom &
clipcatd &


while type dfwm >/dev/null; do dfwm && continue || break; done
