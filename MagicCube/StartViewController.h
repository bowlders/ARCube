//
//  StartViewController.h
//  MagicCube
//
//  Created by liangyu on 18-3-10.
//  Copyright (c) 2018年 liangyu. All rights reserved.


#import <Foundation/Foundation.h>

@interface StartViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    long selectedRow;
    NSMutableArray *magicPicArray;
    UIActivityIndicatorView *indicatorView;
}

@end
