//
//  YHCScrollingBackground.h
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


#import <Foundation/Foundation.h>
#import "YHCOpenGLProgram.h"
#import "YHCOpenGLTools.h"

@interface YHCScrollingBackground : NSObject
{
    YHCOpenGLProgram *_program;
    GLuint _texture;
    BOOL _scrolling;
}

- (YHCScrollingBackground *)init;
- (void)startScrolling;
- (void)stopScrolling;
- (void)draw;

@end
