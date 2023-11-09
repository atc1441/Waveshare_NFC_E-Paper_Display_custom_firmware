#!/usr/bin/env python3

# ------------------------------------------------------------------------------
# INSTRUCTIONS
# ------------------------------------------------------------------------------
# This script converts a binary file compiled by arm-gcc to a ascii file with
# the respective commands.
#
# Run this script with the binary file to be converted, the bytes offset, the
# number of bytes to be extracted and the output ascii format ("bin" or "hex")
# e.g. ./extract_ram.py ./project.bin 0 4000 bin


# binary <-> ascii conversion in python:
# https://www.devdungeon.com/content/working-binary-data-python#readfile

import sys
import binascii
import math

def extract_bytes_from_binary(filename, offset, num_bytes):
    '''Extract num_bytes with an offset from a binary file'''
    with open(filename, 'rb') as binary_file:
        binary_file.seek(offset)
        extracted_bytes = binary_file.read(num_bytes)
    return extracted_bytes

def bytes_to_hex(bytes_data):
    '''Convert bytes string to ascii hex string'''
    hex_data = binascii.hexlify(bytes_data).decode('utf-8')
    return hex_data


def to_little_endian(word):
    '''Join bytes in a list and returns a reversed string of it'''
    le_word = []
    for j in range(int(round(len(word)/2))):
        le_word.append(word[2*j:2*j+2])
    return ''.join(reversed(le_word))


def hex_data_to_hex_list(hex_data, word_size = 4, convert_to_le = False):
    '''Generate a list of hex words from the hex data'''
    hex_list = []
    # convert word size (num of bytes) to number of hex characters
    num_hex_chars = 2*word_size
    for i in range(int(math.ceil(len(hex_data)/num_hex_chars))):
        word = hex_data[i*num_hex_chars:(i+1)*num_hex_chars]
        if (convert_to_le):
            # convert to little endian format
            word = to_little_endian(word)
        hex_list.append(word)
    return hex_list


def hex_to_bin(hex):
    '''Dictionary for hex ascii to bin ascii'''
    hex_bin_dict = {'0' : '0000',
                    '1' : '0001',
                    '2' : '0010',
                    '3' : '0011',
                    '4' : '0100',
                    '5' : '0101',
                    '6' : '0110',
                    '7' : '0111',
                    '8' : '1000',
                    '9' : '1001',
                    'a' : '1010',
                    'b' : '1011',
                    'c' : '1100',
                    'd' : '1101',
                    'e' : '1110',
                    'f' : '1111'}
    return hex_bin_dict[hex]


def hex_list_to_bin_list(hex_list):
    '''Convert the list from hex ascii to binary ascii'''
    bin_list = []
    for word in hex_list:
        bin_word = []
        for i in word:
            bin_word.append(hex_to_bin(i))
        bin_list.append(''.join(bin_word))
    return bin_list


def write_to_mem_file(instructions_list):
    with open('memory.mem', 'w') as f:
        for instr in instructions_list:
            f.write("%s\n" % instr)


if __name__ == '__main__':
    bytes_data = extract_bytes_from_binary(sys.argv[1], int(sys.argv[2]), int(sys.argv[3]))
    hex_data = bytes_to_hex(bytes_data)
    print(hex_data)
    # If file is .bin, which is big-ended, convert it
    if (sys.argv[1][-4:] == ".bin"):
        hex_list = hex_data_to_hex_list(hex_data, convert_to_le = True)
    else:
        hex_list = hex_data_to_hex_list(hex_data)
    print(hex_list)
    bin_list = hex_list_to_bin_list(hex_list)
    print(bin_list)
    if (sys.argv[4] == 'hex'):
        write_to_mem_file(hex_list)
    elif (sys.argv[4] == 'bin'):
        write_to_mem_file(bin_list)
    else:
        print("Specify output format!")
