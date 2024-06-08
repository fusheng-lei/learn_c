'''
Author: ziky
Date: 2023-04-28 18:41:30
LastEditors: ziky
LastEditTime: 2023-04-28 18:41:36
FilePath: /c/test.py
Description: 
'''
for i in range(1, 10):
    for j in range(1, i + 1):
        print(f"{j}x{i}={i*j}", end="\t")
    print()