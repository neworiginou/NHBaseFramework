//
//  UIColor+NHExtension.h
//  NHBaseProjectFramework
//
//  Created by simope on 16/7/13.
//  Copyright © 2016年 NegHao.W. All rights reserved.
//

#import <UIKit/UIKit.h>


#define  HTBlackColor           [UIColor blackColor]
#define  HTDarkGrayColor        [UIColor darkGrayColor]
#define  HTLightGrayColor       [UIColor lightGrayColor]
#define  HTWhiteColor           [UIColor whiteColor]
#define  HTGrayColor            [UIColor grayColor]
#define  HTRedColor             [UIColor redColor]
#define  HTGreenColor           [UIColor greenColor]
#define  HTBlueColor            [UIColor blueColor]
#define  HTCyanColor            [UIColor cyanColor]
#define  HTYellowColor          [UIColor yellowColor]
#define  HTMagentaColor         [UIColor magentaColor]
#define  HTOrangeColor          [UIColor orangeColor]
#define  HTPurpleColor          [UIColor purpleColor]
#define  HTBrownColor           [UIColor brownColor]


#define  HTClearColor           [UIColor clearColor]
#define  HTRandomColor          [UIColor randomColor];

#define  HTFlashColor(red1, green1, blue1, alpha1)    \
[UIColor flashColorWithRed:red1 \
green:green1 \
blue:blue1 \
alpha:alpha1]

#define  HTHexColor(hex)        [UIColor colorWithHEX:hex]

#define  HTColorWithPatternImage(image)    \
[UIColor colorWithPatternImage:image]

#define  HTColorWithPatternImageName(imageName) \
[UIColor colorWithPatternImageName:imageName]


@interface UIColor (NHExtension)

+ (UIColor *)colorWithHEX:(uint)color;
+ (NSArray*)colorForHex:(NSString *)hexColor;
+ (UIColor *)randomColor;
+ (UIColor *)flashColorWithRed:(uint)red green:(uint)green blue:(uint)blue alpha:(float)alpha;
+ (UIColor *)colorWithPatternImageName:(NSString *)imageName;

/*颜色:得到16#转rgb   增加*/
+ (UIColor *) callColorFromHexRGB:(NSString *) inColorString;


@end
