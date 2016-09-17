//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SBDisplayItem : NSObject <NSCopying>
{
    NSString *_uniqueStringRepresentation;
    struct NSString *_type;
    NSString *_displayIdentifier;
}

+ (id)sideSwitcherDisplayItem;
+ (id)homeScreenDisplayItem;
+ (id)displayItemWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *displayIdentifier; // @synthesize displayIdentifier=_displayIdentifier;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)uniqueStringRepresentation;
- (id)_calculateUniqueStringRepresentation;
- (_Bool)isSideSwitcherDisplayItem;
- (_Bool)isHomeScreenDisplayItem;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(struct NSString *)arg1 displayIdentifier:(id)arg2;
- (id)init;

@end
