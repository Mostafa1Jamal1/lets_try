from fabric.api import *



def say_hello():
    ''' echo hello in web01 server '''
    local("echo 'hello world'")
