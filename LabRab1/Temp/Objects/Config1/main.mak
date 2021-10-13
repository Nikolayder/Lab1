SHELL := cmd.exe
CYGWIN=nontsec
export PATH := C:\Program Files (x86)\Common Files\Oracle\Java\javapath;E:\Program Files\Python36\Scripts\;E:\Program Files\Python36\;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\Program Files\PuTTY\;C:\Program Files\NVIDIA Corporation\NVIDIA NvDLISR;C:\OpenServer\modules\php\PHP_7.4;C:\ProgramData\ComposerSetup\bin;C:\Program Files\Java\jdk1.8.0_281\bin;C:\Program Files\nodejs\;C:\HashiCorp\Vagrant\bin;C:\Users\Kolya_2\AppData\Roaming\Composer\vendor\bin;C:\Program Files\JetBrains\PhpStorm 2020.3.2\bin;C:\Users\Kolya_2\AppData\Roaming\npm;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;C:\Users\Kolya_2\AppData\Roaming\Composer\vendor\bin;C:\Program Files\JetBrains\PhpStorm 2020.3.2\bin;C:\Users\Kolya_2\AppData\Roaming\npm;C:\Program Files (x86)\Common Files\Hilscher GmbH\TLRDecode;E:\BnR\BrAutomation\AS410\bin-en\4.10;E:\BnR\BrAutomation\AS410\bin-en\4.9;E:\BnR\BrAutomation\AS410\bin-en\4.8;E:\BnR\BrAutomation\AS410\bin-en\4.7;E:\BnR\BrAutomation\AS410\bin-en\4.6;E:\BnR\BrAutomation\AS410\bin-en\4.5;E:\BnR\BrAutomation\AS410\bin-en\4.4;E:\BnR\BrAutomation\AS410\bin-en\4.3;E:\BnR\BrAutomation\AS410\bin-en\4.2;E:\BnR\BrAutomation\AS410\bin-en\4.1;E:\BnR\BrAutomation\AS410\bin-en\4.0;E:\BnR\BrAutomation\AS410\bin-en
export AS_BUILD_MODE := BuildAndTransfer
export AS_VERSION := 4.10.2.37
export AS_WORKINGVERSION := 4.10
export AS_COMPANY_NAME := Microsoft
export AS_USER_NAME := Kolya_2
export AS_PATH := E:/BnR/BrAutomation/AS410
export AS_BIN_PATH := E:/BnR/BrAutomation/AS410/bin-en
export AS_PROJECT_PATH := E:/Studing/BR/Lab1
export AS_PROJECT_NAME := Lab1
export AS_SYSTEM_PATH := E:/BnR/BrAutomation/AS/System
export AS_VC_PATH := E:/BnR/BrAutomation/AS410/AS/VC
export AS_TEMP_PATH := E:/Studing/BR/Lab1/Temp
export AS_CONFIGURATION := Config1
export AS_BINARIES_PATH := E:/Studing/BR/Lab1/Binaries
export AS_GNU_INST_PATH := E:/BnR/BrAutomation/AS410/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH := E:/BnR/BrAutomation/AS410/AS/GnuInst/V4.1.2/4.9/bin
export AS_GNU_INST_PATH_SUB_MAKE := E:/BnR/BrAutomation/AS410/AS/GnuInst/V4.1.2
export AS_GNU_BIN_PATH_SUB_MAKE := E:/BnR/BrAutomation/AS410/AS/GnuInst/V4.1.2/4.9/bin
export AS_INSTALL_PATH := E:/BnR/BrAutomation/AS410
export WIN32_AS_PATH := "E:\BnR\BrAutomation\AS410"
export WIN32_AS_BIN_PATH := "E:\BnR\BrAutomation\AS410\bin-en"
export WIN32_AS_PROJECT_PATH := "E:\Studing\BR\Lab1"
export WIN32_AS_SYSTEM_PATH := "E:\BnR\BrAutomation\AS\System"
export WIN32_AS_VC_PATH := "E:\BnR\BrAutomation\AS410\AS\VC"
export WIN32_AS_TEMP_PATH := "E:\Studing\BR\Lab1\Temp"
export WIN32_AS_BINARIES_PATH := "E:\Studing\BR\Lab1\Binaries"
export WIN32_AS_GNU_INST_PATH := "E:\BnR\BrAutomation\AS410\AS\GnuInst\V4.1.2"
export WIN32_AS_GNU_BIN_PATH := "$(WIN32_AS_GNU_INST_PATH)\\bin" 
export WIN32_AS_INSTALL_PATH := "E:\BnR\BrAutomation\AS410"

.suffixes:

ProjectMakeFile:

	@'$(AS_BIN_PATH)/4.9/BR.AS.AnalyseProject.exe' '$(AS_PROJECT_PATH)/Lab1.apj' -t '$(AS_TEMP_PATH)' -c '$(AS_CONFIGURATION)' -o '$(AS_BINARIES_PATH)'   -sfas -buildMode 'BuildAndTransfer'   

