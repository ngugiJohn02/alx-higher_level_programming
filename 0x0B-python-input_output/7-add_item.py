#!/usr/bin/python3
import sys
import os

save_to_json_file = __import__('5-save_to_json_file').save_to_json_file
load_from_json_file = __import__('6-load_from_json_file').load_from_json_file

filename = "add_item.json"

# Check if the file exists and is not empty
if os.path.exists(filename):
    try:
        json_list = load_from_json_file(filename)
    except ValueError:
        json_list = []
else:
    json_list = []

# Add all command-line arguments to the list
json_list.extend(sys.argv[1:])

# Save the updated list to the file
save_to_json_file(json_list, filename)

