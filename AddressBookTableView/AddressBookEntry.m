//
//  AddressBookEntry.m
//  AddressBookTableView
//
//  Created by Darrell Weaver on 3/20/13.
//  Copyright (c) 2013 Darrell Weaver. All rights reserved.
//

#import "AddressBookEntry.h"

@implementation AddressBookEntry

- (id)initWithFirstName:(NSString *)fname lastName:(NSString *)lName phoneNumber:(NSString *)number address:(NSString *)address andCity:(NSString *)city {
    self = [super init];
    if (self) {
        _firstName = fname;
        _lastName = lName;
        _phoneNumber = number;
        _address = address;
        _city = city;
    }
    return self;
}

- (NSString *)fullName {
    return [NSString stringWithFormat:@"%@ %@", _firstName, _lastName];
}

@end
