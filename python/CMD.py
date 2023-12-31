#!/usr/bin/python3
''' test the cmd module '''


import cmd
import sys


class command(cmd.Cmd):
    prompt = "test "

    def do_EOF(self, arg):
        """ Handles EOF to exit program """
        print()
        exit()

    def help_EOF(self):
        """ Prints the help documentation for EOF """
        print("Exits the program without formatting\n")

    def emptyline(self):
        """ Overrides the emptyline method of CMD """
        pass

    def do_quit(self, command):
        """ Method to exit the HBNB console"""
        exit()

    def help_quit(self):
        """ Prints the help documentation for quit  """
        print("Exits the program with formatting\n")

    def do_printline(self, args):
        '''Just print the given params'''
        print(str(args))

if __name__ == "__main__":
    command().cmdloop()
