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
//  SaveRequest.h
//  CycleTracks
//
//  Copyright 2009-2010 SFCTA. All rights reserved.
//  Written by Matt Paul <mattpaul@mopimp.com> on 8/25/09.
//	For more information on the project, 
//	e-mail Billy Charlton at the SFCTA <billy.charlton@sfcta.org>

#import <Foundation/Foundation.h>


@interface SaveRequest : NSObject
{
	NSMutableURLRequest *request;
	NSString *deviceUniqueIdHash;
	NSMutableDictionary *postVars;
}

@property (nonatomic, retain) NSMutableURLRequest *request;
@property (nonatomic, retain) NSMutableDictionary *postVars;
@property (nonatomic, retain) NSString *deviceUniqueIdHash;

- initWithPostVars:(NSDictionary *)inPostVars;

@end
