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
 UIView *kotaView = %orig;
 if (!kotaView) {
  return kotaView;
 }
 NSArray *subviews = kotaView.superview.subviews;
 for (UIView * origSubview in subviews) {
  NSArray *subviewsInSubview = origSubview.subviews;
  for (MTMaterialView * subviewInSubview in subviewsInSubview) {
   if ([subviewInSubview isMemberOfClass:%c(MTMaterialView)]) {
    NSString *widgetBackgroundColorString = [_preferences objectForKey:@"backgroundColor"];
    if (widgetBackgroundColorString) {
        subviewInSubview.backgroundColor = iLoveRedBull(widgetBackgroundColorString);
    }
    NSLog(@"[*]We hooked bg color for Battery widgets on MTMaterialView: %@",widgetBackgroundColorString);
    subviewInSubview.blurEnabled = NO;
   }
  }
 }
 CALayer *kotaLayer = kotaView.layer;
 NSString *widgetShadowColorString = [_preferences objectForKey:@"shadowColor"];
 if (widgetShadowColorString) {
    kotaLayer.shadowColor = iLoveRedBull(widgetShadowColorString).CGColor;
    NSLog(@"[*]We hooked Shadow for widgets: %@",widgetShadowColorString);
  }
 kotaLayer.shadowOpacity = 1;
 return kotaView;
}

%end


/*
%hook BCUIRingView

-(UIColor *)fillColor {
    UIColor *meow;
    NSString *meowmeow = [_preferences objectForKey:@"fillColor"];
    if (meowmeow) {
        self.strokeColor = iLoveRedBull(meowmeow);
    }
    return meow ? meow : [UIColor systemPinkColor];
}

-(void)setStrokeColor:(UIColor *)arg1 {
    
}

%end
*/

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
		NSLog(@"[Vol15] Enabled");
		%init();
	} else {
		NSLog(@"[Vol15] Disabled, bye!");
	}
}