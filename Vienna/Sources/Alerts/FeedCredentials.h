//
//  FeedCredentials.h
//  Vienna
//
//  Created by Steve on 6/24/05.
//  Copyright (c) 2004-2005 Steve Palmer. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

@import Cocoa;

@class Folder;

@interface FeedCredentials : NSWindowController
{
	IBOutlet NSWindow * credentialsWindow;
	IBOutlet NSButton * cancelButton;
	IBOutlet NSButton * okButton;
	IBOutlet NSSecureTextField * password;
	IBOutlet NSTextField * userName;
	IBOutlet NSTextField * promptString;
	Folder * folder;
}

@property NSArray * topObjects;

// Public functions
-(void)credentialsForFolder:(NSWindow *)window folder:(Folder *)folder;
-(IBAction)doCancelButton:(id)sender;
-(IBAction)doOKButton:(id)sender;
@end
