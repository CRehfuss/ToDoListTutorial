//
//  ToDoItem.h
//  ToDoList
//
//  Created by Claire Rehfuss on 5/4/15.
//  Copyright (c) 2015 Claire Rehfuss. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end