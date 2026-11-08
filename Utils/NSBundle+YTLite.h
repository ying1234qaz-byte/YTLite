#import <Foundation/Foundation.h>

#if __has_include(<roothide.h>)
#import <roothide.h>
#else
// `jbroot` is supplied by roothide. Sideloaded/rootful builds load the
// bundled resource first, so the normal filesystem path is the correct
// fallback and does not require the roothide SDK.
#define jbroot(path) path
#endif

NS_ASSUME_NONNULL_BEGIN

@interface NSBundle (YTLite)

// Returns YTLite default bundle. Supports rootless if defined in compilation parameters
@property (class, nonatomic, readonly) NSBundle *ytl_defaultBundle;

@end

NS_ASSUME_NONNULL_END
