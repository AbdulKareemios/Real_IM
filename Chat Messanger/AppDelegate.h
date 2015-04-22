//
//  AppDelegate.h
//  Chat Messanger
//
//  Created by Abdul Kareem on 4/22/15.
//  Copyright (c) 2015 AKareem. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AKareemChatKit/RecentView.h>
#import <AKareemChatKit/GroupsView.h>
#import <AKareemChatKit/PeopleView.h>
#import <AKareemChatKit/SettingsView.h>

//-------------------------------------------------------------------------------------------------------------------------------------------------
@interface AppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate>
//-------------------------------------------------------------------------------------------------------------------------------------------------

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UITabBarController *tabBarController;

@property (strong, nonatomic) RecentView *recentView;
@property (strong, nonatomic) GroupsView *groupsView;
@property (strong, nonatomic) PeopleView *peopleView;
@property (strong, nonatomic) SettingsView *settingsView;

@property (strong, nonatomic) CLLocationManager *locationManager;
@property (nonatomic) CLLocationCoordinate2D coordinate;

@end

