//
//  ViewController.h
//  MarcoPollo
//
//  Created by David Eighmey
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextView *tweetTextView;

- (IBAction)postItButtonPressed:(id)sender;

@end
