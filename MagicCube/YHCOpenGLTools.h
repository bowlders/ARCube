//
//  YHCOpenGLTools.h
//  TouchTargets
//
// Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.

#import <Foundation/Foundation.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface YHCOpenGLTools : NSObject

+ (void)loadTexture:(GLuint *)textureName fromFile:(NSString *)fileName;

@end
