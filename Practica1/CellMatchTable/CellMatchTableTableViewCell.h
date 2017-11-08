//  CellMatchTableTableViewCell.h
//  Practica1
//
//  Created by Jose Trinidad Fajardo Flores on 11/8/17.
//  Copyright © 2017 Jose Trinidad Fajardo Flores. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CellMatchTableTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *lblLocalTeam;
@property (weak, nonatomic) IBOutlet UILabel *lblAwayTeam;
@property (weak, nonatomic) IBOutlet UILabel *lblHour;

@end
