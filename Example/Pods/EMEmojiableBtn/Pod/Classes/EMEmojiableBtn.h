//
//  EMEmojiableBtn.h
//  Pods
//
//  Created by Erekle on 4/2/16.
//
//

#import <UIKit/UIKit.h>
#import "EMEmojiableOption.h"
#import "EMEmojiableBtnConfig.h"

@protocol EMEmojiableBtnDelegate;
@interface EMEmojiableBtn : UIButton
@property (strong,nonatomic) NSArray<EMEmojiableOption *> *dataset;
@property (weak,readwrite) id <EMEmojiableBtnDelegate> delegate;

- (instancetype)initWithFrame:(CGRect)frame withConfig:(EMEmojiableBtnConfig*)conf;
@end

@protocol EMEmojiableBtnDelegate <NSObject>
@optional
- (void)EMEmojiableBtn:(EMEmojiableBtn*)button selectedOption:(NSUInteger)index;
- (void)EMEmojiableBtnCanceledAction:(EMEmojiableBtn*)button;
@end
