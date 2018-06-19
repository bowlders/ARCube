//
//  YHCShaderUniform.h
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


//该类主要用于操作shader中的uniform变量
#import <Foundation/Foundation.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface YHCShaderUniform : NSObject
{
    GLuint _uniformId;
    NSString *_unifromName;
    GLuint _uniformLocation;
}
@property (nonatomic, assign)GLuint unifromId;
@property (nonatomic, strong)NSString *uniformName;
@property (nonatomic, assign)GLuint uniformLocation;

- (YHCShaderUniform *)initUniformWithID:(GLuint)newUniformId andName:(NSString *)newUniformName;

@end
