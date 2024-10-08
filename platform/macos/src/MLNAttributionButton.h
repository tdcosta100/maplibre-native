#import <Cocoa/Cocoa.h>

#import "MLNFoundation.h"
#import "MLNTypes.h"

NS_ASSUME_NONNULL_BEGIN

@class MLNAttributionInfo;

/// Button that looks like a hyperlink and opens a URL.
MLN_EXPORT
@interface MLNAttributionButton : NSButton

/// Returns an ``MLNAttributionButton`` instance with the given info.
- (instancetype)initWithAttributionInfo:(MLNAttributionInfo *)info;

/// The URL to open and display as a tooltip.
@property (nonatomic, readonly, nullable) NSURL *URL;

/// Opens the URL.
- (IBAction)openURL:(nullable id)sender;

@end

NS_ASSUME_NONNULL_END
