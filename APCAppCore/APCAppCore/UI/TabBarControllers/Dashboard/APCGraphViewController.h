// 
//  APCGraphViewController.h 
//  APCAppCore 
// 
// Copyright (c) 2015, Apple Inc. All rights reserved. 
// 
// Redistribution and use in source and binary forms, with or without modification,
// are permitted provided that the following conditions are met:
// 
// 1.  Redistributions of source code must retain the above copyright notice, this
// list of conditions and the following disclaimer.
// 
// 2.  Redistributions in binary form must reproduce the above copyright notice, 
// this list of conditions and the following disclaimer in the documentation and/or 
// other materials provided with the distribution. 
// 
// 3.  Neither the name of the copyright holder(s) nor the names of any contributors 
// may be used to endorse or promote products derived from this software without 
// specific prior written permission. No license is granted to the trademarks of 
// the copyright holders even if such marks are included in this software. 
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" 
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
// ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE 
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL 
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR 
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER 
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, 
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE. 
// 
 
#import <UIKit/UIKit.h>
#import "APCGraph.h"
#import "APCTableViewItem.h"

@class APCScoring;

static NSInteger const APCGraphView5DaysAgo    = -5;
static NSInteger const APCGraphView7DaysAgo    = -7;
static NSInteger const APCGraphView30DaysAgo   = -30;
static NSInteger const APCGraphView90DaysAgo   = -90;
static NSInteger const APCGraphView180DaysAgo  = -180;
static NSInteger const APCGraphView365DaysAgo  = -365;

typedef NS_ENUM(NSUInteger, APCGraphViewPeriod) {
    APCGraphViewPeriodLast5Days = 0,
    APCGraphViewPeriodLastWeek,
    APCGraphViewPeriodLastMonth,
    APCGraphViewPeriodLast3Months,
    APCGraphViewPeriodLast6Months,
    APCGraphViewPeriodLastYear
};

@interface APCGraphViewController : UIViewController <APCScoringDelegate>

@property (weak, nonatomic) IBOutlet APCLineGraphView *lineGraphView;
@property (weak, nonatomic) IBOutlet APCDiscreteGraphView *discreteGraphView;

@property (nonatomic, strong) APCTableViewDashboardGraphItem *graphItem;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *legendLabel;

@property (weak, nonatomic) IBOutlet NSLayoutConstraint *titleLabelWidthConstraint;

@property (weak, nonatomic) IBOutlet UILabel *subTitleLabel;

@property (weak, nonatomic) IBOutlet UIView *tintView;

@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentedControl;

@property (weak, nonatomic) IBOutlet UISwitch *compareSwitch;

@property (weak, nonatomic) IBOutlet UILabel *compareLabel;

@property (weak, nonatomic) IBOutlet UIButton *collapseButton;

- (IBAction)collapse:(id)sender;

@property (weak, nonatomic) IBOutlet UISwitch *toggleSwitch;

@property (weak, nonatomic) IBOutlet UIImageView *averageImageView;

@end
