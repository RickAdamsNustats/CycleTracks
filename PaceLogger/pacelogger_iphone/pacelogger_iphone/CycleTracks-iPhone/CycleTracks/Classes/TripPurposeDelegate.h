/**  CycleTracks, Copyright 2009,2010 San Francisco County Transportation Authority
 *                                    San Francisco, CA, USA
 *
 *   @author Matt Paul <mattpaul@mopimp.com>
 *
 *   This file is part of CycleTracks.
 *
 *   CycleTracks is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   CycleTracks is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with CycleTracks.  If not, see <http://www.gnu.org/licenses/>.
 */

//
//  TripPurposeDelegate.h
//  CycleTracks
//
//  Copyright 2009-2010 SFCTA. All rights reserved.
//  Written by Matt Paul <mattpaul@mopimp.com> on 9/22/09.
//	For more information on the project, 
//	e-mail Billy Charlton at the SFCTA <billy.charlton@sfcta.org>


#define kTripPurposeCommute		0
#define kTripPurposeSchool		1
#define kTripPurposeWork		2
#define kTripPurposeExercise	3
#define kTripPurposeSocial		4
#define kTripPurposeShopping	5
#define kTripPurposeErrand		6
#define kTripPurposeOther		7

#define kTripPurposeCommuteIcon		@"commuter2.png"
#define kTripPurposeSchoolIcon		@"school.tif"
#define kTripPurposeWorkIcon		@"work-related.tif"
#define kTripPurposeExerciseIcon	@"exercise.tif"
#define kTripPurposeSocialIcon		@"social.tif"
#define kTripPurposeShoppingIcon	@"shopping.tif"
#define kTripPurposeErrandIcon		@"errands.tif"
#define kTripPurposeOtherIcon		@"other.tif"

#define kTripPurposeCommuteString	@"Commute"
#define kTripPurposeSchoolString	@"School"
#define kTripPurposeWorkString		@"Work-Related"
#define kTripPurposeExerciseString	@"Exercise"
#define kTripPurposeSocialString	@"Social"
#define kTripPurposeShoppingString	@"Shopping"
#define kTripPurposeErrandString	@"Errand"
#define kTripPurposeOtherString		@"Other"


@protocol TripPurposeDelegate <NSObject>

@required
- (NSString *)getPurposeString:(unsigned int)index;
- (NSString *)setPurpose:(unsigned int)index;

@optional
- (void)didCancelPurpose;
- (void)didPickPurpose:(unsigned int)index;

@end
