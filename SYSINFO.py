import platform

print("a"*40)
print("* sys info")
print("a"*40)

print("OS :", platform.system())
print("Release : ", platform.release())
print("CPU : ", platform.processor())
print("Architecture : ", platform.architecture())
print("Version : ", platform.version())
print("Python Compiler : ", platform.python_compiler())
print("Python Version : ", platform.python_version())

