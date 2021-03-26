/*
 * This is the source code of tgnet library v. 1.1
 * It is licensed under GNU GPL v. 2 or later.
 * You should have received a copy of the license in this archive (see LICENSE).
 *
 * Copyright Nikolai Kudashov, 2015-2018.
 */
#ifndef MY_FN_H
#define MY_FN_H

#include <jni.h>

#include <android/log.h>


#define TAG "yhb-debug" // 这个是自定义的LOG的标识
#define My_LOG_D(...) __android_log_print(ANDROID_LOG_DEBUG,TAG ,__VA_ARGS__) // 定义LOGD类型
#define My_LOG_I(...) __android_log_print(ANDROID_LOG_INFO,TAG ,__VA_ARGS__) // 定义LOGI类型
#define My_LOG_W(...) __android_log_print(ANDROID_LOG_WARN,TAG ,__VA_ARGS__) // 定义LOGW类型
#define My_LOG_E(...) __android_log_print(ANDROID_LOG_ERROR,TAG ,__VA_ARGS__) // 定义LOGE类型
#define My_LOG_F(...) __android_log_print(ANDROID_LOG_FATAL,TAG ,__VA_ARGS__) // 定义LOGF类型

#endif
#ifndef FILELOG_H
#define FILELOG_H
/*
#include "Defines.h"

class FileLog {
public:
    FileLog();
    void init(std::string path);
    static void e(const char *message, ...) __attribute__((format (printf, 1, 2)));
    static void w(const char *message, ...) __attribute__((format (printf, 1, 2)));
    static void d(const char *message, ...) __attribute__((format (printf, 1, 2)));

    static FileLog &getInstance();

private:
    FILE *logFile = nullptr;
    pthread_mutex_t mutex;
};

extern bool LOGS_ENABLED;

#define DEBUG_E FileLog::getInstance().e
#define DEBUG_W FileLog::getInstance().w
#define DEBUG_D FileLog::getInstance().d
*/
#endif
