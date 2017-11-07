//
//  AppDelegate.h
//  VehicleBuzzzz
//
//  Created by Admin on 16/08/1939 Saka.
//  Copyright © 1939 Pradeep_Sharma. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

