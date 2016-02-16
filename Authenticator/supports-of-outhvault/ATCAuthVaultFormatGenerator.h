//
//  ATCAuthVaultFormatGenerator.h
//  Authenticator
//
//  Created by Tong G. on 2/16/16.
//  Copyright © 2016 Tong Kuo. All rights reserved.
//

@import Foundation;

// ATCAuthVaultFormatGenerator class
@interface ATCAuthVaultFormatGenerator : NSObject

+ ( NSData* ) dataWithEmptyAuthVaultWithMasterPassphrase: ( NSString* )_MasterPassphrase error: ( NSError** )_Error;

@end // ATCAuthVaultFormatGenerator class