//  SimpleSpeechUIViewController.h
//  SimpleSpeech
//
// Licensed by AT&T under 'Software Development Kit Tools Agreement' 2012.
// TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION: http://developer.att.com/sdk_agreement/
// Copyright 2012 AT&T Intellectual Property. All rights reserved.
// For more information contact developer.support@att.com http://developer.att.com

#import <UIKit/UIViewController.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import "ATTSpeechKit.h"


@interface SimpleSpeechUIViewController : UIViewController <ATTSpeechServiceDelegate>

@property (retain, nonatomic) IBOutlet UILabel* textLabel;
@property (retain, nonatomic) IBOutlet UIButton* talkButton;
@property (retain, nonatomic) IBOutlet MKMapView *mapView;


- (void)yoshiFunction:(MKMapView *)mapView and: (NSString *)query;

// Initialize SpeechKit for this app.
- (void) prepareSpeech;

// Message sent by "Press to Talk" button in UI
- (IBAction) buttonPressed: (id) sender;

@end

