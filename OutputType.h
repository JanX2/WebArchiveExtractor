//
//  OutputType.h
//  WebArchiveExtractor
//
//  Created by Rob Rohan on 10/8/07.
//  Copyright 2007 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface OutputType : NSObject {
	NSString * displayText;
	NSXMLDocumentContentKind documentContentKind;
}

- (void) setDisplayText: (NSString *) displayText;
- (NSString *) displayText;

- (void) setDocumentContentKind: (NSXMLDocumentContentKind) kind;
- (NSXMLDocumentContentKind) documentContentKind;

@end
