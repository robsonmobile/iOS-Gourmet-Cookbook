/*
 
 Erica Sadun, http://ericasadun.com
 
 */

#import <UIKit/UIKit.h>
@interface ShapeImageView : UIImageView
- (void) setup;
@property (nonatomic) UIBezierPath *shape;
@property (nonatomic, readonly) CAShapeLayer *shapeLayer;
@end