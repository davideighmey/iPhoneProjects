//
//  AlbumDataController.h
//  SpinCity
//
//  Created by David Eighmey
//

#import <Foundation/Foundation.h>

@class Album;

@interface AlbumDataController : NSObject

- (NSUInteger)albumCount;
- (Album *)albumAtIndex:(NSUInteger)index;
- (void)addAlbumWithTitle:(NSString *)title artist:(NSString *)artist summary:(NSString *)summary price:(float)price locationInStore:(NSString*)locationInStore;

@end
