#!/usr/bin/env bash
# This is a python porgram that uses Fabric to Tranfer
# file to my server, by first compressing it.

# do_pack funtion or method will create a folder called
# version and create web_static achive in it with date
mkdir -p versions
tar -czvf versions/web_static_"$(date +%Y%m%d%H%M%s)".tgz web_static
echo versions/web_static_"$(date +%Y%m%d%H%M%s)".tgz
