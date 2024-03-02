#!/usr/bin/python3
''' trying fabric '''

from fabic.api import *

env.user = "ubuntu"
env.hosts = ["web01", "web02"]

def uptime():
    run("uptime")
