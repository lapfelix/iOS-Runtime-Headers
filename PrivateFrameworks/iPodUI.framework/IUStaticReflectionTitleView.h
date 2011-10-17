/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSString, UIColor;

@interface IUStaticReflectionTitleView : UIView  {
    NSString *_title;
    UIColor *_textColor;
    UIColor *_reflectionColor;
    int _overdraw;
}

@property(retain) NSString * title;
@property(retain) UIColor * textColor;
@property(retain) UIColor * reflectionColor;
@property int overdraw;


- (id)textColor;
- (id)title;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitle:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)reflectionColor;
- (int)overdraw;
- (void)setReflectionColor:(id)arg1;
- (void)setOverdraw:(int)arg1;
- (void)dealloc;

@end