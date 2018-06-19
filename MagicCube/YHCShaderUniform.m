//
//  YHCShaderUniform.m
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


#import "YHCShaderUniform.h"

@implementation YHCShaderUniform

@synthesize unifromId = _uniformId;
@synthesize uniformName = _unifromName;
@synthesize uniformLocation = _uniformLocation;

- (YHCShaderUniform *)initUniformWithID:(GLuint)newUniformId andName:(NSString *)newUniformName
{
    if (self = [super init]) {
        _uniformId = newUniformId;
        self.uniformName = newUniformName;
        _uniformLocation = 0;
    }
    return  self;
}

- (void)dealloc {
    self.uniformName = nil;

}


@end
