#!/bin/bash

browser=$(/home/rando/bin/browser_launcher)

case $browser in

  "Firefox 3.5" )
  exec /usr/bin/firefox -P Beta -no-remote
  ;;

  "Firefox 3.5 - Development" )
  exec /usr/bin/firefox -P Development -no-remote
  ;;

  "Opera" )
  exec /usr/bin/opera
  ;;

  "Opera10" )
  exec /opt/opera10/bin/opera
  ;;

  "Konqueror" )
  exec /usr/bin/konqueror
  ;;

esac

