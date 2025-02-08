#include <jni.h>
#include <stdio.h>

// تابع که از Java فراخوانی می‌شود
JNIEXPORT void JNICALL Java_Main_processWithC(JNIEnv *env, jobject obj) {
    // پردازش با C
    printf("Processing data in C...\n");

    // انجام یک پردازش سنگین
    for (int i = 0; i < 1000000; i++) {
        // انجام عملیات پیچیده (مثال)
    }

    printf("Processing in C is complete.\n");
}
