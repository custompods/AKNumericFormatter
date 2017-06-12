//
// This file is subject to the terms and conditions defined in
// file 'LICENSE', which is part of this source code package.
//

#if __has_feature(modules)
@import UIKit;
#else
#import <UIKit/UIKit.h>
#endif



@class AKNumericFormatter;

@interface UITextField(AKNumericFormatter)

@property(nonatomic, strong) AKNumericFormatter* numericFormatter;

-(void)formatCurrentText;

// Method for iOS < 6 compatibility.
// Call it from your UITextFieldDelegate's textField:shouldChangeCharactersInRange:replacementString: method
// when replacementString's length is zero.
-(void)alertDeleteBackwards;

@end
