from fabric.api import *


env.hosts = ["54.157.131.239"]
env.user = "ubuntu"

def send_file(file_path):
    ''' send a file to home dir '''
    put(file_path, "~/")
