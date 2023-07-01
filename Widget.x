/*
KotaWidget
*/

#include "Widget.h"

UIColor* iLoveRedBull(NSString* hexString) {
    NSString *daString = [hexString stringByReplacingOccurrencesOfString:@" " withString:@""];
    if (![daString containsString:@"#"]) {
        daString = [@"#" stringByAppendingString:daString];
    }
    unsigned rgbValue = 0;
    NSScanner *scanner = [NSScanner scannerWithString:daString];
    [scanner setScanLocation:1]; // bypass '#' character
    [scanner scanHexInt:&rgbValue];

    NSRange range = [hexString rangeOfString:@":" options:NSBackwardsSearch];
    NSString* alphaString;
    if (range.location != NSNotFound) {
        alphaString = [hexString substringFromIndex:(range.location + 1)];
    } else {
        alphaString = @"1.0"; //no opacity specified - just return 1 :/
    }

    return [UIColor colorWithRed:((rgbValue & 0xFF0000) >> 16)/255.0 green:((rgbValue & 0xFF00) >> 8)/255.0 blue:(rgbValue & 0xFF)/255.0 alpha:[alphaString floatValue]];
}

NSUserDefaults *_preferences;
BOOL _enabled;

%hook SBHWidgetStackViewController

-(UIView *)view {
 UIView *daView = %orig;
 if (!daView) {
  return daView;
 }
 NSString *subBackgroundColorString = [_preferences objectForKey:@"backgroundColor"];
 NSArray *subviews = daView.superview.subviews;
 for (MTMaterialView * origSubview in subviews) {
  if ([origSubview isMemberOfClass:%c(MTMaterialView)]) {
   origSubview.blurEnabled = NO;
   if (subBackgroundColorString) {
    origSubview.backgroundColor = iLoveRedBull(subBackgroundColorString);
   }
  }
  NSArray *subviewsInSubview = origSubview.subviews;
  for (MTMaterialView *subviewInSubview in subviewsInSubview) {
   if ([subviewInSubview isMemberOfClass:%c(MTMaterialView)]) {
    subviewInSubview.blurEnabled = NO;
    if (subBackgroundColorString) {
    subviewInSubview.backgroundColor = iLoveRedBull(subBackgroundColorString);
    }
   }
   NSArray *UGH = subviewInSubview.subviews;
   for (MTMaterialView *subviewInSubviewInSubview in UGH) {
    if ([subviewInSubviewInSubview isMemberOfClass:%c(MTMaterialView)]) {
     subviewInSubviewInSubview.blurEnabled = NO;
      if (subBackgroundColorString) {
        subviewInSubviewInSubview.backgroundColor = iLoveRedBull(subBackgroundColorString);
     }
    }
   }
  }
 }

 CALayer *daLayer = daView.layer;
 NSString *widgetShadowColorString = [_preferences objectForKey:@"shadowColor"];
 if (widgetShadowColorString) {
    daLayer.shadowColor = iLoveRedBull(widgetShadowColorString).CGColor;
  }
 daLayer.shadowOpacity = 1;
 return daView;
}

%end

%hook BCUIRingItemView

-(UIView *)view {
 UIView *daView = %orig;
 if (!daView) {
  return daView;
 }
 NSString *realRingColorString = [_preferences objectForKey:@"solidColor"];
 NSArray *subviews = daView.superview.subviews;
 for (BCUIChargeRing * origSubview in subviews) {
  if ([origSubview isMemberOfClass:%c(BCUIChargeRing)]) {
   if (realRingColorString) {
    origSubview.strokeColor = iLoveRedBull(realRingColorString);
   }
  }
  NSArray *subviewsInSubview = origSubview.subviews;
  for (BCUIRingView *subviewInSubview in subviewsInSubview) {
   if ([subviewInSubview isMemberOfClass:%c(BCUIRingView)]) {
    if (realRingColorString) {
    subviewInSubview.strokeColor = iLoveRedBull(realRingColorString);
    }
   }
  NSArray *subviewsInSubviewInSubview = subviewInSubview.subviews;
  for (BCUIRingView *subviewInSubviewInSubview in subviewsInSubviewInSubview) {
   if ([subviewInSubviewInSubview isMemberOfClass:%c(BCUIRingView)]) {
    if (realRingColorString) {
    subviewInSubviewInSubview.strokeColor = iLoveRedBull(realRingColorString);
    }
   }
  }
 }
 }
 return daView;
}

-(NSArray *)subviews {
 id subviews = %orig;
 NSString *realTextColorString = [_preferences objectForKey:@"textString"];
 for (UILabel * origSubview in subviews) {
  if ([origSubview isMemberOfClass:%c(UILabel)]) {
   if (realTextColorString) {
    origSubview.textColor = iLoveRedBull(realTextColorString);
   }
  }
 }
 return subviews;
}
%end


%hook BCUIChargeRing

-(NSArray *)subviews {
 id subviews = %orig;
 NSString *realRingString = [_preferences objectForKey:@"solidColor"];
 NSString *realRingBGString = [_preferences objectForKey:@"solidColor2"];
 for (BCUIRingView * origSubview in subviews) {
  if ([origSubview isMemberOfClass:%c(BCUIRingView)]) {
   if (realRingString) {
    origSubview.strokeColor = iLoveRedBull(realRingString);
   }
   if (realRingBGString) {
    origSubview.fillColor = iLoveRedBull(realRingBGString);
   }
  }
 }
 for (UIImageView * origSubview in subviews) {
  if ([origSubview isMemberOfClass:%c(UIImageView)]) {
    NSString *realTintColorString = [_preferences objectForKey:@"tintString"];
    if (realTintColorString) {
     origSubview.tintColor = iLoveRedBull(realTintColorString);
   }
  }
 }
 return subviews;
}

%end

/*
Init prefs
*/

%ctor {
	_preferences = [[NSUserDefaults alloc] initWithSuiteName:@"gay.kota.kotawidget"];
	[_preferences registerDefaults:@{
		@"enabled" : @YES,
	}];
	_enabled = [_preferences boolForKey:@"enabled"];
	if(_enabled) {
		NSLog(@"[Widget] Enabled");
		%init();
	} else {
		NSLog(@"[Widget] Disabled, bye!");
	}
}