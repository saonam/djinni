// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from listeners.djinni

#import <Foundation/Foundation.h>
@class DBListenerCaller;
@protocol DBFirstListener;
@protocol DBSecondListener;


/**
 * Tester for the ability to call two interfaces which might be
 * implemented on the same object.  That's not relevant in all
 * languages, due to the details of multiple inheritance and object
 * comparison.
 */
@interface DBListenerCaller : NSObject

+ (nullable DBListenerCaller *)init:(nullable id<DBFirstListener>)firstL
                            secondL:(nullable id<DBSecondListener>)secondL;

- (void)callFirst;

- (void)callSecond;

@end