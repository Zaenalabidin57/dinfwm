#/bin/sh


#xrdb merge ~/.Xresources
#xbacklight -set 10 & 
xrandr --output HDMI-1 --left-of eDP-1
xrandr --output eDP-1 --set TearFree on
xrandr --output HDMI-1 --set TearFree on 

#feh --bg-tile /home/shigure/Pictures/dinfwm.jpg &
nitrogren --restore
/usr/lib/polkit-gnome/polkit-gnome-authentication-agent-1 &
xset r rate 200 50 &
xss-lock --transfer-sleep-lock -- i3locki-fancy-dualmonitor --nofork &
dunst &
picom &
clipcatd &


while type dfwm >/dev/null; do dfwm && continue || break; done
