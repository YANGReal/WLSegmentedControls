//
//  WLSegment.h
//  WLSegmentedControls
//
//  Created by Wang Ling on 7/27/10.
//  Copyright 2010 I Wonder Phone. All rights reserved.
//

#import "WLGradientButton.h"

typedef NS_ENUM(NSInteger, WLSegmentStyle) {
	WLSegmentStyleHorizontal,
	WLSegmentStyleVertical,
};


@interface WLSegment : WLGradientButton {
@private
	WLSegmentStyle _style;
	BOOL _tint;
	
	UIColor *_hTopOuterBorderColor;
	UIColor *_hTopInnerBorderColor;
	UIColor *_hBottomOuterBorderColor;
	UIColor *_hBottomInnerBorderColor;
	UIColor *_hOuterSideBorderColor;
	UIColor *_hInnerSideBorderColor;
	CGGradientRef _vOuterBorderGradient;
	CGGradientRef _vInnterBorderGradient;
	CGGradientRef _vSelectedInnerBorderGradient;
	
	BOOL _isFirst;
	BOOL _isLast;
}

- (id)initWithItem:(id)item selectedItem:(id)selectedItem backgroundImage:(UIImage *)backgroundImage selectedBackgroundImage:(UIImage *)selectedBackgroundImage style:(WLSegmentStyle)style tint:(BOOL)tint;

@property(nonatomic, assign) BOOL isFirst;
@property(nonatomic, assign) BOOL isLast;

@end
