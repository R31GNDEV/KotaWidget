#include <UIKit/UIKit.h>

/*

Header(s) *meow*

*/

@protocol UIViewControllerTransitionCoordinator;
@class MTMaterialView, NSArray, UIImage, UIColor, NSString, BCUIChargeRing, UILabel, NSNumberFormatter, MTVisualStylingProvider;

@interface SBHWidgetStackViewController : UIView                                                           //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIView * containerView;        
@property (nonatomic,retain) UIView * KotaView;
@property (nonatomic,retain) UIView * view;                                                   //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                      //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIPageControl * pageControl;                                                  //@synthesize pageControl=_pageControl - In the implementation block
@property (nonatomic,retain) NSTimer * pageControlHidingTimer;                                             //@synthesize pageControlHidingTimer=_pageControlHidingTimer - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                                         //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,nonatomic) BOOL showStackBorderWhenShowingPageControl;                                   //@synthesize showStackBorderWhenShowingPageControl=_showStackBorderWhenShowingPageControl - In the implementation block
@property (assign,nonatomic) BOOL flashPageControlOnNextAppearance;                                        //@synthesize flashPageControlOnNextAppearance=_flashPageControlOnNextAppearance - In the implementation block
@property (assign,nonatomic) BOOL flashPageControlOnNextAlphaChange;                                //@synthesize animationSettings=_animationSettings - In the implementation block
@property (assign,nonatomic) unsigned long long widgetScaleAnimationCount;                                 //@synthesize widgetScaleAnimationCount=_widgetScaleAnimationCount - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundAnimationCount;                                  //@synthesize backgroundAnimationCount=_backgroundAnimationCount - In the implementation block
@property (nonatomic,retain) NSHashTable * imageUpdateDisableAssertions;  
@property (assign,nonatomic) BOOL alwaysShowsAsStack;                                                      //@synthesize alwaysShowsAsStack=_alwaysShowsAsStack - In the implementation block
@property (assign,nonatomic) BOOL highlightsAtAnySize;                                                     //@synthesize highlightsAtAnySize=_highlightsAtAnySize - In the implementation block
@property (assign,nonatomic) BOOL forcesEdgeAntialiasing;                                                  //@synthesize forcesEdgeAntialiasing=_forcesEdgeAntialiasing - In the implementation block
@property (nonatomic,readonly) NSArray * widgetViewControllers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                                //@synthesize editing=_editing - In the implementation block
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu;                          //@synthesize showingContextMenu=_showingContextMenu - In the implementation block
@property (assign,getter=isOverlapping,nonatomic) BOOL overlapping;                                        //@synthesize overlapping=_overlapping - In the implementation block
@property (assign,getter=isDropping,nonatomic) BOOL dropping; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                  //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (assign,getter=isBackgroundBlurEnabled,nonatomic) BOOL backgroundBlurEnabled;                    //@synthesize backgroundBlurEnabled=_backgroundBlurEnabled - In the implementation block
@property (nonatomic,readonly) BOOL wantsCaptureOnlyBackgroundView; 
@property(readonly, nonatomic) MTMaterialView *screenTimeLockoutView;
@property (nonatomic,copy) id backgroundViewProvider;                                                      //@synthesize backgroundViewProvider=_backgroundViewProvider - In the implementation block
@property (assign,nonatomic) double brightness;                                                            //@synthesize brightness=_brightness - In the implementation block
@property (nonatomic,readonly) BOOL wantsLabelHidden; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled;                                  //@synthesize visiblySettled=_visiblySettled - In the implementation block
@property (assign,nonatomic) BOOL automaticallyUpdatesVisiblySettled;                                      //@synthesize automaticallyUpdatesVisiblySettled=_automaticallyUpdatesVisiblySettled - In the implementation block
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled;                          //@synthesize privateModeEnabled=_privateModeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long presentationMode;                                          //@synthesize presentationMode=_presentationMode - In the implementation block
@property (assign,nonatomic) unsigned long long imageViewAlignment;                                        //@synthesize imageViewAlignment=_imageViewAlignment - In the implementation block
@property (assign,nonatomic) unsigned long long pauseReasons;                                              //@synthesize pauseReasons=_pauseReasons - In the implementation block
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,readonly) UIView * snapshotView; 
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL showsSquareCorners;                                                      //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
-(void)setPresentationMode:(unsigned long long)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(BOOL)showsSquareCorners;
-(void)setEditing:(BOOL)arg1 ;
-(CGSize)_scrollViewContentSize;
-(UIView *)snapshotView;
-(BOOL)isShowingContextMenu;
-(double)continuousCornerRadius;
-(UIView *)dimmingView;
-(BOOL)isPrivateModeEnabled;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)setBrightness:(double)arg1 ;
-(CGRect)visibleBounds;
-(void)setContainerView:(UIView *)arg1 ;
-(void)loadView;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(NSArray *)applicationShortcutItems;
-(unsigned long long)pauseReasons;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)_pageSize;
-(void)customImageViewControllerWantsLabelHiddenDidChange:(id)arg1 ;
-(void)setOverlapping:(BOOL)arg1 ;
-(BOOL)isOverlapping;
-(UIView *)backgroundView;
-(void)_updateAccessibilityValue;
-(void)_layoutWithAnimationUpdateMode:(long long)arg1 ;
-(BOOL)automaticallyUpdatesVisiblySettled;
-(void)_flashPageControlAnimated:(BOOL)arg1 ;
-(void)_updateWidgetViewEdgeAntialiasing;
-(void)_updatePageControlWithAnimationUpdateMode:(long long)arg1 ;
-(void)_removeWidget:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)isVisiblySettled;
-(void)updateImageAnimated:(BOOL)arg1 ;
-(id)_disableImageUpdatesForReason:(id)arg1 animateChangesUponInvalidation:(BOOL)arg2 ;
-(id)_widgetContextMenuController;
-(void)_updateWidgetViewHitTesting;
-(BOOL)_shouldDrawSystemBackgroundMaterialForWidget:(id)arg1 ;
-(void)_createBackgroundViewIfNecessary;
-(BOOL)_widgetHitTestingDisabled;
-(void)setPrivateModeEnabled:(BOOL)arg1 ;
-(BOOL)alwaysShowsAsStack;
-(BOOL)highlightsAtAnySize;
-(void)_updateVisiblySettledForWidgetViewControllers;
-(void)_updatePresentationModeForWidgetViewControllers;
-(void)_updatePrivateModeForWidgetViewControllers;
-(void)_updatePauseReasonForWidgetViewControllers;
-(id)initWithIcon:(id)arg1 ;
-(void)didSelectApplicationShortcutItem:(id)arg1 ;
-(BOOL)_scrollToActiveWidgetAnimated:(BOOL)arg1 ;
-(NSHashTable *)imageUpdateDisableAssertions;
-(long long)_newActiveWidgetIndexForContentOffset:(CGPoint)arg1 ;
-(void)_setPageControlHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_showAdjacentWidgets;
-(void)_restartPageControlTimer;
-(CGPoint)_restingContentOffset;
-(BOOL)_createViewControllerForWidgetIfNecessary:(id)arg1 usingSize:(CGSize)arg2 ;
-(void)_updateActiveWidgetIndexAndScrollViewContentOffset;
-(void)_updateWidgetViewsWithAnimationUpdateMode:(long long)arg1 ;
-(void)_updateBackgroundViewWithAnimationUpdateMode:(long long)arg1 ;
-(void)_updateWidgetViewClippingAndBackgroundView;
-(void)_updateScrollViewDelaysContentTouches;
-(BOOL)_insetWidgetsForTrackingAppearance;
-(void)_incrementWidgetScaleAnimationCount;
-(BOOL)_alwaysShowStackBorder;
-(void)_decrementWidgetScaleAnimationCount;
-(void)_incrementBackgroundAnimationCount;
-(void)_decrementBackgroundAnimationCount;
-(BOOL)_pageControlIsHorizontallyConstrained;
-(BOOL)_alwaysShowStackPageControl;
-(void)setShowStackBorderWhenShowingPageControl:(BOOL)arg1 ;
-(NSTimer *)pageControlHidingTimer;
-(void)setPageControlHidingTimer:(NSTimer *)arg1 ;
-(BOOL)isBackgroundBlurEnabled;
-(void)setForcesEdgeAntialiasing:(BOOL)arg1 ;
-(NSArray *)widgetViewControllers;
-(BOOL)_isScrollViewTracking;
-(void)setAlwaysShowsAsStack:(BOOL)arg1 ;
-(void)setHighlightsAtAnySize:(BOOL)arg1 ;
-(BOOL)forcesEdgeAntialiasing;
-(BOOL)showStackBorderWhenShowingPageControl;
-(BOOL)flashPageControlOnNextAppearance;
-(void)setFlashPageControlOnNextAppearance:(BOOL)arg1 ;
-(BOOL)flashPageControlOnNextAlphaChange;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)setFlashPageControlOnNextAlphaChange:(BOOL)arg1 ;
-(NSMutableDictionary *)widgetContainerViewControllers;
-(void)setWidgetContainerViewControllers:(NSMutableDictionary *)arg1 ;
-(unsigned long long)widgetScaleAnimationCount;
-(void)setWidgetScaleAnimationCount:(unsigned long long)arg1 ;
-(unsigned long long)backgroundAnimationCount;
-(void)setBackgroundAnimationCount:(unsigned long long)arg1 ;
-(void)setImageUpdateDisableAssertions:(NSHashTable *)arg1 ;
@end
@interface SBHWidgetContainerView : UIView 
@property (nonatomic,readonly) MTMaterialView * screenTimeLockoutView;                                                 //@synthesize screenTimeLockoutView=_screenTimeLockoutView - In the implementation block
@property (assign,getter=isBlockedForScreenTimeExpiration,nonatomic) BOOL blockedForScreenTimeExpiration;              //@synthesize blockedForScreenTimeExpiration=_blockedForScreenTimeExpiration - In the implementation block
@property (assign,nonatomic) unsigned long long gridSizeClass;                                                         //@synthesize gridSizeClass=_gridSizeClass - In the implementation block
@property (nonatomic,copy) NSString * applicationName;                                                                 //@synthesize applicationName=_applicationName - In the implementation block
-(void)setApplicationName:(NSString *)arg1 ;
-(void)layoutSubviews;

-(void)_updateScreenTimeLockoutView;
-(id)_fontWithTextStyle:(id)arg1 symbolicTraits:(unsigned)arg2 ;
-(id)initWithGridSizeClass:(unsigned long long)arg1 applicationName:(id)arg2 ;
-(UIView *)widgetView;
-(void)setWidgetView:(UIView *)arg1 ;
-(MTMaterialView *)screenTimeLockoutView;
-(void)setBlockedForScreenTimeExpiration:(BOOL)arg1 ;
-(NSString *)applicationName;
-(BOOL)isBlockedForScreenTimeExpiration;
-(unsigned long long)gridSizeClass;
-(void)setGridSizeClass:(unsigned long long)arg1 ;
@end
@interface SBHWidgetContainerViewController : UIView 
@end
@interface BCUI2x4AvocadoViewController : UIView

-(unsigned long long)_maximumNumberOfBatteryDeviceViews;
-(BOOL)_includeEmptyDevices;
-(void)viewWillLayoutSubviews;
-(id)_newBatteryDeviceView;
@end
@class BCBatteryDeviceController, NSString, BCUIAvocadoViewController;

@interface BCUIBatteryAvocadoViewController : UIViewController {

	BCBatteryDeviceController* _batteryDeviceController;
	long long _avocadoSize;
	NSString* _debugIdentifier;
	BCUIAvocadoViewController* _avocadoViewController;
}
@property (setter=_setAvocadoViewController:,getter=_avocadoViewController,nonatomic,retain) BCUIAvocadoViewController * avocadoViewController;              //@synthesize avocadoViewController=_avocadoViewController - In the implementation block
@property (assign,nonatomic) long long avocadoSize;                                                                                                          //@synthesize avocadoSize=_avocadoSize - In the implementation block
@property (nonatomic,copy) NSString * debugIdentifier;                                                                                                       //@synthesize debugIdentifier=_debugIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)connectedDevicesDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDebugIdentifier:(NSString *)arg1 ;
-(void)viewDidLoad;
-(NSString *)debugIdentifier;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_avocadoViewController;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setAvocadoSize:(long long)arg1 ;
-(id)_synthesizedDebugIdentifier;
-(void)_configureAvocadoViewControllerIfNecessary;
-(long long)avocadoSize;
@end

@interface MTMaterialView : UIView
@property (nonatomic,assign,readwrite,getter=isBlurEnabled) BOOL blurEnabled;
@end

@interface BCUIRingItemView : UIView {

	BCUIChargeRing* _chargeRing;
	UILabel* _chargeLabel;
	NSNumberFormatter* _percentChargeFormatter;
	MTVisualStylingProvider* _visualStylingProvider;
	NSString* _contentSizeCategory;
	BOOL _empty;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
	long long _ringItemViewStyle;
}
@property (assign,nonatomic) long long ringItemViewStyle;                                                         //@synthesize ringItemViewStyle=_ringItemViewStyle - In the implementation block
@property (assign,nonatomic) double ringLineWidth; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long percentCharge; 
@property (assign,getter=isCharging,nonatomic) BOOL charging; 
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge; 
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled; 
@property (nonatomic,retain) UIImage * glyph; 
@property (nonatomic,copy) NSString * name; 
-(void)setCharging:(BOOL)arg1 ;
-(void)setEmpty:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(BOOL)isLowPowerModeEnabled;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isCharging;
-(NSArray *)requiredVisualStyleCategories;
-(id<UIViewControllerTransitionCoordinator>)transitionCoordinator;
-(BOOL)isEmpty;
-(long long)percentCharge;
-(void)setTransitionCoordinator:(id<UIViewControllerTransitionCoordinator>)arg1 ;
-(void)setPercentCharge:(long long)arg1 ;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(void)setRingLineWidth:(double)arg1 ;
-(void)setRingItemViewStyle:(long long)arg1 ;
-(double)ringLineWidth;
-(id)_chargeRing;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(id)_effectiveContentSizeCategoryForTraitCollection:(id)arg1 ;
-(void)_configureChargeLabelForStyle:(long long)arg1 ;
-(void)_updateFontForChargeLabelForStyle:(long long)arg1 ;
-(id)_lazyPercentChargeFormatter;
-(BOOL)_isPercentSymbolEnabledForRingItemStyle:(long long)arg1 andContentSizeCategory:(id)arg2 ;
-(id)_percentChargeString:(long long)arg1 ;
-(CGSize)_sizeForChargeRingWithStyle:(long long)arg1 inBounds:(CGRect)arg2 scale:(double)arg3 ;
-(CGSize)_sizeForChargeLabel:(id)arg1 withStyle:(long long)arg2 inBounds:(CGRect)arg3 scale:(double)arg4 ;
-(CGRect)_frameForChargeRingWithSize:(CGSize)arg1 chargeLabelSize:(CGSize)arg2 style:(long long)arg3 inBounds:(CGRect)arg4 scale:(double)arg5 ;
-(CGRect)_frameForChargeLabelWithSize:(CGSize)arg1 baseLineOffsetFromBoundsTop:(double)arg2 chargeRingSize:(CGSize)arg3 style:(long long)arg4 inBounds:(CGRect)arg5 scale:(double)arg6 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(void)_stopAutomaticallyUpdatingVisualStyling;
-(void)_beginAutomaticallyUpdatingChargeLabelVisualStyling;
-(long long)ringItemViewStyle;
@end
@interface BCUIRingView : UIView {

	double _ringStart;
	double _ringEnd;
	double _lineWidth;
	UIColor* _strokeColor;
	UIColor* _fillColor;
}
@property (assign,nonatomic) double ringStart;                 //@synthesize ringStart=_ringStart - In the implementation block
@property (assign,nonatomic) double ringEnd;                   //@synthesize ringEnd=_ringEnd - In the implementation block
@property (assign,nonatomic) double lineWidth;                 //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,copy,readwrite) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy,readwrite) UIColor * fillColor;                //@synthesize fillColor=_fillColor - In the implementation block
+(Class)layerClass;
-(void)setFillColor:(UIColor *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)fillColor;
-(void)setLineWidth:(double)arg1 ;
-(UIColor *)strokeColor;
-(double)lineWidth;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)setFractionComplete:(double)arg1 ;
-(void)mt_applyVisualStyling:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_shapeLayer;
-(double)ringEnd;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRingStart:(double)arg1 ;
-(void)setRingEnd:(double)arg1 ;
-(void)_invalidatePath;
-(double)ringStart;
@end
@class UIImageView, UILabel, NSNumberFormatter, BCUIBatteryView, UIView, NSMutableDictionary, NSString, UIImage, NSArray;

@interface BCUIRowView : UIView {

	UIImageView* _glyphImageView;
	UILabel* _nameLabel;
	UILabel* _percentChargeLabel;
	NSNumberFormatter* _percentChargeFormatter;
	BCUIBatteryView* _batteryView;
	UIView* _separator;
	NSMutableDictionary* _categoriesToVisualStylingProvider;
	NSString* _contentSizeCategory;
	BOOL _charging;
	BOOL _lowCharge;
	BOOL _lowPowerModeEnabled;
	BOOL _empty;
	long long _percentCharge;
	UIImage* _glyph;
	NSString* _name;
}
@property (assign,getter=isSeparatorVisible,nonatomic) BOOL separatorVisible; 
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long percentCharge;                                                             //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                                     //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge;                                                   //@synthesize lowCharge=_lowCharge - In the implementation block
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled;                               //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                                                                     //@synthesize glyph=_glyph - In the implementation block
@property (assign,nonatomic) double scaleFactor; 
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                                           //@synthesize empty=_empty - In the implementation block
-(void)setEmpty:(BOOL)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToSuperview;
-(void)setSeparatorVisible:(BOOL)arg1 ;
-(double)scaleFactor;
-(void)setName:(NSString *)arg1 ;
-(void)setScaleFactor:(double)arg1 ;
-(BOOL)isLowPowerModeEnabled;
-(NSArray *)requiredVisualStyleCategories;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(id)_percentChargeString:(long long)arg1 ;
-(UIImage *)glyph;
-(BOOL)isLowCharge;
-(void)setCharging:(BOOL)arg1 ;
-(BOOL)isEmpty;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isCharging;
-(NSString *)name;
-(id)_lazyPercentChargeFormatter;
-(id)_effectiveContentSizeCategoryForTraitCollection:(id)arg1 ;
-(long long)percentCharge;
-(void)didMoveToWindow;
-(void)setPercentCharge:(long long)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)setGlyph:(UIImage *)arg1 ;
-(BOOL)isSeparatorVisible;
-(void)_configureSeparatorIfNecessary;
-(void)_configureBatteryViewIfNecessary;
-(void)_configureGlyphImageViewIfNecessary;
-(void)_configurePercentChargeLabelIfNecessary;
-(void)_configureNameLabelIfNecessary;
@end
@class BCUIRingView, BCUIRingCapShadow, UIImageView, CABackdropLayer, MTVisualStylingProvider, UIImage, NSArray, NSString;

@interface BCUIChargeRing : UIView {

	BCUIRingView* _baseRing;
	BCUIRingView* _chargeRing;
	BCUIRingCapShadow* _ringCapShadow;
	UIImageView* _boltMaskImageView;
	UIImageView* _boltImageView;
	CABackdropLayer* _captureBackdrop;
	UIImageView* _glyphImageView;
	MTVisualStylingProvider* _visualStylingProvider;
	MTVisualStylingProvider* _baseRingVisualStylingProvider;
	BOOL _lowCharge;
	BOOL _charging;
	BOOL _lowPowerModeEnabled;
	double _lineWidth;
	long long _percentCharge;
	UIImage* _glyph;
	id<UIViewControllerTransitionCoordinator> _transitionCoordinator;
}
@property (assign,nonatomic) double lineWidth;                                                                    //@synthesize lineWidth=_lineWidth - In the implementation block
@property (nonatomic,copy,readonly) NSArray * requiredVisualStyleCategories; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long percentCharge;                                                             //@synthesize percentCharge=_percentCharge - In the implementation block
@property (assign,getter=isCharging,nonatomic) BOOL charging;                                                     //@synthesize charging=_charging - In the implementation block
@property (assign,getter=isLowCharge,nonatomic) BOOL lowCharge;                                                   //@synthesize lowCharge=_lowCharge - In the implementation block
@property (assign,getter=isLowPowerModeEnabled,nonatomic) BOOL lowPowerModeEnabled;                               //@synthesize lowPowerModeEnabled=_lowPowerModeEnabled - In the implementation block
@property (nonatomic,retain) UIImage * glyph;                                                                     //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy,readwrite) UIColor * strokeColor;              //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty; 
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setCharging:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(void)setGlyph:(UIImage *)arg1 ;
-(void)setLowPowerModeEnabled:(BOOL)arg1 ;
-(BOOL)isLowPowerModeEnabled;
-(BOOL)isCharging;
-(NSArray *)requiredVisualStyleCategories;
-(long long)percentCharge;
-(id)_glyphImageView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setPercentCharge:(long long)arg1 ;
-(UIImage *)glyph;
-(void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2 ;
-(id)_chargeRing;
-(BOOL)isLowCharge;
-(void)setLowCharge:(BOOL)arg1 ;
-(void)_updateVisualStylingWithProvidersFromStylingProvider:(id)arg1 ;
-(id)_visualStylingProviderForCategory:(long long)arg1 ;
-(id)_baseRing;
-(void)_updateVisualStylingForBaseRingIfNecessary;
-(void)_configureRingCapShadowIfNecessary;
-(BOOL)_shouldShowRingCapShadow;
-(void)_configureBoltMaskImageViewIfNecessary;
-(void)_configureBoltImageViewIfNecessary;
-(void)_updateVisualStylingForBolt;
-(void)_configureCaptureBackdropIfNecessary;
-(void)_stopAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(void)_beginAutomaticallyUpdatingVisualStylingForCategory:(long long)arg1 ;
-(BOOL)_isPastThresholdForRingCapShadow;
-(void)_beginAutomaticallyUpdatingPrimaryVisualStylingForView:(id)arg1 observerBlock:(/*^block*/id)arg2 ;
-(id)_ringVisualStylingProvider;
@end