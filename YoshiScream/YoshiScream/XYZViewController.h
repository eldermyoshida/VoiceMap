//
//  XYZViewController.h
//  YoshiScream
//
//  Created by Yoshi on 9/28/13.
//  Copyright (c) 2013 Yoshi. All rights reserved.
//

#import <UIKit/UIViewController.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "SpeechConfig.h"
#import "SpeechAuth.h"


@interface XYZViewController : UIViewController <ATTSpeechServiceDelegate>

@property (retain, nonatomic) IBOutlet UIButton *talkButton;
@property (retain, nonatomic) IBOutlet UILabel *textLabel;
@property (retain, nonatomic) IBOutlet MKMapView *mapView;


- (void)yoshiFunction:(MKMapView *)mapView and: (NSString *)query;

    // Initialize SpeechKit for this app.
- (void) prepareSpeech;

    // Message sent by "Press to Talk" button in UI
- (IBAction) listen: (id) sender;

@end