# LBYARCHProject
C to x86-64 Programming

# **Note:** In the **Properties** of the project polder, in the **Linker** and then the **System**, **Enable Larage Addresses should be set to NO**

## **Preface:** 

        For the submission, only the source files have been provided. Attempts at pushing the entire project folder to Github created
    issues due to the file sizes being too large. These were the .obj files from the .asm kernel, and the executable files for both
    the debug and release versions. To run the program, the tutorial on setting up Visual Studio with NASM should be used alongside
    the instruction in the note above. The screenshot for the output of the program is in the folder. Since the values of the C and
    x86-64 kernel are outputted within the same program. It was easy to check if the output of one was not the same as the other.


## **Analysis:**

        For the performance of the two kernels (C and x86-64), they were written to be imported/used together in one main C file
    for the sake of convenience. The timer was started and afterwards, the functions for the respective kernels were called and assigned to 
    a variable. Once that was finished, the timer was stopped. The vectors were tested on the **n** sizes of 2^20, 2^24, and 2^26 respectively.
    Higher numbers created errors. On each size, the program was run 30 times for the debug and 30 times for the release version. In total, the 
    program was run 180 times. The list of times can be viewed in the files included in the folder. The values for the vectors were set to 2.0 and 3.0
    respectively for all their indexes.

    The code for both kernels were not written to be in their most optimal performance, only to output the values needed per the specifications 
    provided. Yet, even with the unoptimized code for both kernels, the x86-64 kernel still performed significantly faster compared to their C
    kernel counterpart.

    In terms of the debug vs release versions, the performance of the C kernel improved a little bit while the x86-64 stayed around the same if not
    slightly slower. Interestingly, running the program right after building it, the x86-64 kernel's speed almost matches the C kernel's. Following
    program runtimes would bring the speed of the x86-64 kernel close to its average runtime. The added slowness of the C kernel could be due 
    to the additional time it needs to compile the program to Assembly before running the program. And even then, the Assembly version of the code
    might not even be optimized as well. It would be interesting to compare the speeds of the converted-to-assembly version of the C program and the
    written x86-64 kernel in the future. The list of execution times will be listed below.


## **Execution Times**

    DEBUG Version

        N = 2^20
            C      = 0.007964285714
            x86-64 = 0.003178571429

        N = 2^24
            C      = 0.1277857143
            x86-64 = 0.04735714286

        N = 2^26
            C      = 0.5014285714
            x86-64 = 0.2163571429



    RELEASE Version

        N = 2^20
            C      = 0.006225806452
            x86-64 = 0.002838709677

        N = 2^24
            C      = 0.09867741935
            x86-64 = 0.05648387097

        N = 2^26
            C      = 0.3924516129
            x86-64 = 0.2187741935



        

