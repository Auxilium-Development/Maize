@class MZEMenuModuleViewController;

@interface MZEMenuModuleView : UIView {
	MZEMenuModuleViewController *_delegateController;
}
@property (nonatomic, retain, readwrite) MZEMenuModuleViewController *delegateController;
// - (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
// - (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
// - (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
// - (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
@end