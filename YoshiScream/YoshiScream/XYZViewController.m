//
//  XYZViewController.m
//  YoshiScream
//
//  Created by Yoshi on 9/28/13.
//  Copyright (c) 2013 Yoshi. All rights reserved.
//

#import "XYZViewController.h"
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>


#define METERS_PER_MILE 1609.344

@interface XYZViewController ()

@end

@implementation XYZViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)viewWillAppear:(BOOL)animated {
        // 1
    CLLocationCoordinate2D zoomLocation;
    zoomLocation.latitude = 36.001551;
    zoomLocation.longitude= -78.939573;
    
        // 2
    MKCoordinateRegion viewRegion = MKCoordinateRegionMakeWithDistance(zoomLocation, 0.5*METERS_PER_MILE, 0.5*METERS_PER_MILE);
    
        // 3
    [_mapView setRegion:viewRegion animated:YES];
}

@end
