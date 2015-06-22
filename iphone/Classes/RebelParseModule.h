/**
 * Parse
 *
 * Created by Timan Rebel
 * Copyright (c) 2014 Your Company. All rights reserved.
 */

#import "TiModule.h"
#import "RebelParseUserProxy.h"

#import <Parse/Parse.h>

@interface RebelParseModule : TiModule {
@private
    RebelParseUserProxy* currentUser;
}

-(void)authenticate:(id)args;
-(void)signup:(id)args;
-(void)login:(id)args;
-(void)logout:(id)args;
-(void)resetPassword:(id)args;

-(void)callFunction:(id)args;

@end
