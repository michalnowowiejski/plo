#ifndef CONFIG_INCLUDE_H
#define CONFIG_INCLUDE_H

#ifndef TARGET
#  error TARGET must be defined
#endif

#define CONFIG_STRINGIFY2(x) #x
#define CONFIG_STRINGIFY1(x) CONFIG_STRINGIFY2(x)

#define CONFIG_FILENAME2(DIRNAME)  CONFIG_STRINGIFY1(boards/DIRNAME/config.h)
#define CONFIG_FILENAME1(y)  CONFIG_FILENAME2(y)

#define CONFIG_FILENAME  CONFIG_FILENAME1(TARGET)


#include CONFIG_FILENAME


#undef CONFIG_STRINGIFY1
#undef CONFIG_STRINGIFY2
#undef CONFIG_FILENAME1
#undef CONFIG_FILENAME2
#undef CONFIG_FILENAME

#endif
