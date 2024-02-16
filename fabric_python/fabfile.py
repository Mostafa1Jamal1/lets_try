from fabric.api import *


env.hosts = ["54.157.131.239"]
env.user = "ubuntu"
#env.key_filename = "~/.ssh/web_01"

def say_hello():
    ''' echo hello in web01 server '''
    run("echo 'hello world'")
