//
//  DownloadManager.h
//  Vienna
//
//  Created by Steve on 10/7/05.
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

@class DownloadItem;

@interface DownloadManager : NSObject <NSURLSessionDownloadDelegate>

@property (class, readonly, nonatomic) DownloadManager *sharedInstance NS_SWIFT_NAME(shared);

@property (readonly, nonatomic) NSArray<DownloadItem *> *downloadsList;
@property (readonly, nonatomic) BOOL hasActiveDownloads;

+ (BOOL)isFileDownloaded:(NSString *)filename;
+ (NSString *)fullDownloadPath:(NSString *)filename;

- (void)clearList;
- (void)cancelItem:(DownloadItem *)item;
- (void)removeItem:(DownloadItem *)item;
- (void)downloadFileFromURL:(NSString *)url;
- (void)downloadFileFromURL:(NSString *)url withFilename:(NSString *)filename;

@end
