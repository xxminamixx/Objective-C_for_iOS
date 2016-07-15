//
//  Fetcher.h
//  iOS Education
//
//  Created by Minami Kyohei on 2016/07/15.
//  Copyright © 2016年 Minami Kyohei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Fetcher : NSObject

- (void) sendSynchronousFoodFetcher;
- (void) sendAsynchronousFoodFetcher;
- (void) wikipediaAPIFetcher;

@end
