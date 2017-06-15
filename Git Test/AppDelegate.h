//
//  AppDelegate.h
//  Git Test
//
//  Created by v.toganyan on 15.06.17.
//  Copyright © 2017 v.toganyan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

