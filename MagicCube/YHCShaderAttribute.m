//
//  YHCShaderAttribute.m
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


#import "YHCShaderAttribute.h"

@implementation YHCShaderAttribute

@synthesize attributeId = _attributeId;
@synthesize attributeName = _attributeName;

- (YHCShaderAttribute *)initAttributeWithID:(GLuint)newAttributeId andName:(NSString *)newAttributeName
{
    if (self = [super init]) {
        _attributeId = newAttributeId;
        self.attributeName = newAttributeName;
    }
    return self;
}

- (void)dealloc {
    self.attributeName = nil;

}


@end










































