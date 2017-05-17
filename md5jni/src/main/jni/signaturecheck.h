//
// Created by wei on 16-12-4.
//

#define   LOG_TAG    "native_log"
#define   LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define   LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define   LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)

#ifndef AESJNIENCRYPT_SIGNACTURECHECK_H
#define AESJNIENCRYPT_SIGNACTURECHECK_H

//你的sign KEY
static const char MD5_KEY[] = "Your key";
//合法的APP包名
static const char *app_packageName = "com.astra.md5.simple";
//合法的hashcode 1154605269:这个值是我生成的这个可以store文件的hash值
static const int app_signature_hash_code = 1154605269;

/**
 * 校验APP 包名和签名是否合法
 *
 * 返回值为1 表示合法
 */
jint checkSignature(JNIEnv *env, jobject thiz, jobject context);

#endif //AESJNIENCRYPT_SIGNACTURECHECK_H
