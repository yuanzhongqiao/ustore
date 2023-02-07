/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cloud_unum_ukv_DataBase_Transaction */

#ifndef _Included_cloud_unum_ukv_DataBase_Transaction
#define _Included_cloud_unum_ukv_DataBase_Transaction
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    rollback
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_rollback(JNIEnv*, jobject);

/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    commit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_commit(JNIEnv*, jobject);

/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    containsKey
 * Signature: (Ljava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_containsKey(JNIEnv*, jobject, jstring, jlong);

/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    put
 * Signature: (Ljava/lang/String;J[B)V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_put(JNIEnv*, jobject, jstring, jlong, jbyteArray);

/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    get
 * Signature: (Ljava/lang/String;J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_get(JNIEnv*, jobject, jstring, jlong);

/*
 * Class:     cloud_unum_ukv_DataBase_Transaction
 * Method:    erase
 * Signature: (Ljava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_cloud_unum_ukv_DataBase_00024Transaction_erase(JNIEnv*, jobject, jstring, jlong);

#ifdef __cplusplus
}
#endif
#endif
