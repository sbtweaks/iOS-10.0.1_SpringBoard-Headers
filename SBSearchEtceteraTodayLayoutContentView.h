//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 15 2013 15:37:37).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSearchEtceteraLayoutContentView.h"

@class UIScrollView, UIView;

@interface SBSearchEtceteraTodayLayoutContentView : SBSearchEtceteraLayoutContentView
{
    _Bool _todayViewShouldBeOffset;
    _Bool _containsDateTimeDisplay;
    UIView *_todayView;
    UIScrollView *_todayListMajorScrollView;
    UIScrollView *_todayListMinorScrollView;
    UIView *_weatherView;
    UIView *_dateView;
    double _navigationBarTopInset;
    struct CGPoint _weatherViewOffset;
    struct CGPoint _dateViewOffset;
}

@property(nonatomic) double navigationBarTopInset; // @synthesize navigationBarTopInset=_navigationBarTopInset;
@property(nonatomic) _Bool containsDateTimeDisplay; // @synthesize containsDateTimeDisplay=_containsDateTimeDisplay;
@property(nonatomic) _Bool todayViewShouldBeOffset; // @synthesize todayViewShouldBeOffset=_todayViewShouldBeOffset;
@property(nonatomic) struct CGPoint dateViewOffset; // @synthesize dateViewOffset=_dateViewOffset;
@property(nonatomic) struct CGPoint weatherViewOffset; // @synthesize weatherViewOffset=_weatherViewOffset;
@property(retain, nonatomic) UIView *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) UIView *weatherView; // @synthesize weatherView=_weatherView;
@property(retain, nonatomic) UIScrollView *todayListMinorScrollView; // @synthesize todayListMinorScrollView=_todayListMinorScrollView;
@property(retain, nonatomic) UIScrollView *todayListMajorScrollView; // @synthesize todayListMajorScrollView=_todayListMajorScrollView;
@property(retain, nonatomic) UIView *todayView; // @synthesize todayView=_todayView;
- (void).cxx_destruct;
- (void)_layoutDateView;
- (void)_layoutWeather;
- (id)_dateMovingScrollView;
- (id)_dateMovingScrollViewIfExists;
- (void)setCurrentStyle:(unsigned long long)arg1;
- (void)updateContentInsets;
- (void)_updateContentInsetsForScrollView:(id)arg1;
- (struct UIEdgeInsets)_todayViewInsets;
- (void)_layoutTodayView;
- (void)layoutSubviews;
- (struct CGSize)contentSizeForContainerSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

