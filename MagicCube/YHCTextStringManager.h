//
//  YHCTextStringManager.h
//  TouchTargets
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


#import <Foundation/Foundation.h>
#import "YHCOpenGLProgram.h"
#import "YHCFontImporter.h"
#import "YHCTextString.h"
#import "YHCOpenGLTools.h"

@interface YHCTextStringManager : NSObject
{
    YHCOpenGLProgram *_program;
    GLuint _texture;
    NSMutableArray *_textStringArray;
    YHCFontImporter *_fontImporter;
}

- (YHCTextStringManager *)initWithCharacterSheetName : (NSString *)newCharacterSheetName;
- (void)addTextString:(YHCTextString *)newTextString;
- (void)drawTextString:(YHCTextString *)textString;
- (void)drawAllTextString;
- (void)destroyAllTextStrings;

@end
