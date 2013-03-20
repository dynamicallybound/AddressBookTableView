//
//  AddressBookEntry.h
//  AddressBookTableView
//
//  Created by Darrell Weaver on 3/20/13.
//  Copyright (c) 2013 Darrell Weaver. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
    An AddressBookEntry is an object representing a person inside an address book.
    I'm being really lazy here and only using strings for all the properties.
 */

@interface AddressBookEntry : NSObject

/*
    Properties in the app, should be self explanatory
 */

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *phoneNumber;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *city;

- (id)initWithFirstName:(NSString *)fname lastName:(NSString *)lName phoneNumber:(NSString *)number address:(NSString *)address andCity:(NSString *)city;

- (NSString *)fullName;

@end
