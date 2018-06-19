//
//  YHCShaderAttribute.h
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.

// 该类主要处理shader中的attribute变量

#import <Foundation/Foundation.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

@interface YHCShaderAttribute : NSObject
{
    GLuint _attributeId;
    NSString *_attributeName;
}
@property (nonatomic, assign) GLuint attributeId;
@property (nonatomic, strong) NSString *attributeName;

- (YHCShaderAttribute *)initAttributeWithID:(GLuint)newAttributeId andName:(NSString *)newAttributeName;

@end














































