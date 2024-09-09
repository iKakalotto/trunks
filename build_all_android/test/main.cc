#include <android/log.h>
#include <jni.h>
#include <string>

jstring getVersion(JNIEnv *env, jobject) {
    return env->NewStringUTF("0xCAFEBABE");
}

const JNINativeMethod methods[] = {
        {"getVersion", "()Ljava/lang/String;", (void*)getVersion}
};

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv* env = nullptr;
    jint ret = vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6);
    if (ret != JNI_OK || env == nullptr) {
        return -1;
    }

    jclass cls = env->FindClass("com/github/myapplication/MainActivity");
    if (cls == nullptr) {
        return -1;
    }

    env->RegisterNatives(cls, methods, sizeof(methods) / sizeof(methods[0]));
    return JNI_VERSION_1_6;
}
