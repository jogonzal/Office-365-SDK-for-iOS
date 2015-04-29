/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import "MSOutlookModels.h"

/**
* The implementation file for type RecurrencePattern.
*/

@implementation MSOutlookRecurrencePattern	

@synthesize odataType = _odataType;
@synthesize Type = _Type;
@synthesize Interval = _Interval;
@synthesize Month = _Month;
@synthesize DayOfMonth = _DayOfMonth;
@synthesize DaysOfWeek = _DaysOfWeek;
@synthesize FirstDayOfWeek = _FirstDayOfWeek;
@synthesize Index = _Index;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.RecurrencePattern";
	}

	return self;
}

- (void)setTypeString:(NSString *)value {

	if ([value isEqualToString:@"Daily"]) {

		self.Type = MSOutlook_RecurrencePatternType_Daily;
	}

	if ([value isEqualToString:@"Weekly"]) {

		self.Type = MSOutlook_RecurrencePatternType_Weekly;
	}

	if ([value isEqualToString:@"AbsoluteMonthly"]) {

		self.Type = MSOutlook_RecurrencePatternType_AbsoluteMonthly;
	}

	if ([value isEqualToString:@"RelativeMonthly"]) {

		self.Type = MSOutlook_RecurrencePatternType_RelativeMonthly;
	}

	if ([value isEqualToString:@"AbsoluteYearly"]) {

		self.Type = MSOutlook_RecurrencePatternType_AbsoluteYearly;
	}

	if ([value isEqualToString:@"RelativeYearly"]) {

		self.Type = MSOutlook_RecurrencePatternType_RelativeYearly;
	}
}
- (void)setFirstDayOfWeekString:(NSString *)value {

	if ([value isEqualToString:@"Sunday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Sunday;
	}

	if ([value isEqualToString:@"Monday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Monday;
	}

	if ([value isEqualToString:@"Tuesday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Tuesday;
	}

	if ([value isEqualToString:@"Wednesday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Wednesday;
	}

	if ([value isEqualToString:@"Thursday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Thursday;
	}

	if ([value isEqualToString:@"Friday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Friday;
	}

	if ([value isEqualToString:@"Saturday"]) {

		self.FirstDayOfWeek = MSOutlook_DayOfWeek_Saturday;
	}
}
- (void)setIndexString:(NSString *)value {

	if ([value isEqualToString:@"First"]) {

		self.Index = MSOutlook_WeekIndex_First;
	}

	if ([value isEqualToString:@"Second"]) {

		self.Index = MSOutlook_WeekIndex_Second;
	}

	if ([value isEqualToString:@"Third"]) {

		self.Index = MSOutlook_WeekIndex_Third;
	}

	if ([value isEqualToString:@"Fourth"]) {

		self.Index = MSOutlook_WeekIndex_Fourth;
	}

	if ([value isEqualToString:@"Last"]) {

		self.Index = MSOutlook_WeekIndex_Last;
	}
}

@end