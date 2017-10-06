#import <MaizeUI/MZEExpandingModuleDelegate-Protocol.h>
#import <MaizeUI/MZEContentModuleContentViewController-Protocol.h>
#import "MZEConnectivityButtonViewController.h"
#import "MZEConnectivityButtonViewControllerDelegate-Protocol.h"
#import <MPUFoundation/MPULayoutInterpolator.h>

@class MZEConnectivityModuleView;

@interface MZEConnectivityModuleViewController : UIViewController <MZEContentModuleContentViewController, MZEConnectivityButtonViewControllerDelegate> {
	CGFloat _prefferedContentExpandedHeight;
	CGFloat _prefferedContentExpandedWidth;
	NSMutableArray<MZEConnectivityButtonViewController *> *_buttonViewControllers;
	BOOL _isExpanded;
	UIViewController *_presentedSecondaryViewController;
	MPULayoutInterpolator *_widthInterpolator;
	MPULayoutInterpolator *_heightInterpolator;

}
@property (nonatomic, retain, readwrite) NSMutableArray<MZEConnectivityButtonViewController *> *buttonViewControllers;
@property (nonatomic, retain, readwrite) MZEConnectivityModuleView *containerView;
@property (nonatomic, readwrite) BOOL isExpanded;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (CGFloat)preferredExpandedContentWidth;
- (CGFloat)preferredExpandedContentHeight;
- (CGSize)_buttonSize;
- (BOOL)providesOwnPlatter;
+ (NSArray *)defaultButtonClasses;
- (MZEConnectivityButtonViewController *)_makeButtonWithClass:(Class)buttonClass;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (NSUInteger)visibleColumns;
- (NSUInteger)visibleRows;
- (NSUInteger)numberOfColumns;
- (NSUInteger)numberOfRows;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)layoutButtons;
- (BOOL)canDismissPresentedContent;
- (void)dismissPresentedContent;
- (CGRect)rootViewFrame;

- (void)buttonViewController:(MZEConnectivityButtonViewController *)buttonController willPresentSecondaryViewController:(UIViewController *)secondaryViewController;
- (void)buttonViewController:(MZEConnectivityButtonViewController *)buttonController didDismissSecondaryViewController:(UIViewController *)secondaryViewController;
@end