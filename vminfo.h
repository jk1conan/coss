//
//  vminfo.h
//  FreeRDP
//  用来存储解析xml的数据
//  Created by conan on 16/1/8.
//
//

#import <Foundation/Foundation.h>

@interface vminfo : NSObject

@property (nonatomic, copy) NSString *vm;
@property (nonatomic, copy) NSString *vmip;
@property (nonatomic, copy) NSNumber *vmport;
@property (nonatomic, copy) NSString *vmusername;
@property (nonatomic, copy) NSString *vmpasswd;
@property (nonatomic, copy) NSString *remoteProgram;

@property (nonatomic, copy) NSString *gate;
@property (nonatomic, copy) NSString *gatehost;
@property (nonatomic, copy) NSNumber *gateport;
@property (nonatomic, copy) NSString *gateusername;
@property (nonatomic, copy) NSString *gatepasswd;


@end
