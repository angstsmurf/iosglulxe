/* ShareFilesViewController.h: Files list overview display view controller
 for IosGlulxe, an IosGlk port of the Glulxe interpreter.
 Designed by Andrew Plotkin <erkyrath@eblong.com>
 http://eblong.com/zarf/glk/
 */

#import <UIKit/UIKit.h>

@class GlkFileRefPrompt;
@class GlkFileThumb;

@interface ShareFilesViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIDocumentInteractionControllerDelegate> {
	UITableView *tableView;
	int highlightusage;
	NSString *highlightname;
	UIDocumentInteractionController *sharedocic;
	NSString *sharetemppath;
	
	NSMutableArray *filelists; // array of (nonempty) arrays of GlkFileThumb
	NSDateFormatter *dateformatter;
}

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic) int highlightusage;
@property (nonatomic, retain) NSString *highlightname;
@property (nonatomic, retain) UIDocumentInteractionController *sharedocic;
@property (nonatomic, retain) NSString *sharetemppath;
@property (nonatomic, retain) NSMutableArray *filelists;
@property (nonatomic, retain) NSDateFormatter *dateformatter;

- (id) initWithNibName:(NSString *)nibName bundle:(NSBundle *)nibBundle;
- (void) addBlankThumb;

@end
