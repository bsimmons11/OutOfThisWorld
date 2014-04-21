//
//  OWSpaceImageViewController.h
//  Out of this World
//
//  Created by Brady Simmons on 4/19/14.
//  Copyright (c) 2014 Lorux. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWSpaceImageViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@end
