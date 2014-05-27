//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Carly Robison on 1/24/14.
//  Copyright (c) 2014 Carly Robison. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
