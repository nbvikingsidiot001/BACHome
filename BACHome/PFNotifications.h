//
//  PFNotifications.h
//  BACHome
//
//  Created by Chase Gorectke on 1/18/14.
//  Copyright (c) 2014 Revision Works, LLC. All rights reserved.
//

#import <Parse/Parse.h>

@interface PFNotifications : PFObject <PFSubclassing>

// Parse specific subclass
+(NSString *)parseClassName;

// Custom convenience methods
-(id)initWithDefaults;
-(void)setSender:(NSString *)sender;
-(NSString *)sender;
-(void)setReceiver:(NSString *)receiver;
-(NSString *)receiver;
-(void)setType:(NSString *)type;
-(NSString *)type;

@end
