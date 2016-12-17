/* DisplayTextViewController.h: Transcript display view controller
 for IosGlulxe, an IosGlk port of the Glulxe interpreter.
 Designed by Andrew Plotkin <erkyrath@eblong.com>
 http://eblong.com/zarf/glk/
 */

#import <UIKit/UIKit.h>

@class GlkFileThumb;

@interface DisplayTextViewController : UIViewController <UIActionSheetDelegate>

@property (nonatomic, retain) IBOutlet UITextView *textview;
@property (nonatomic, retain) IBOutlet UILabel *titlelabel;
@property (nonatomic, retain) IBOutlet UILabel *datelabel;
@property (nonatomic, retain) GlkFileThumb *thumb;

- (id) initWithNibName:(NSString *)nibName thumb:(GlkFileThumb *)thumb bundle:(NSBundle *)nibBundle;

@end
