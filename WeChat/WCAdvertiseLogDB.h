//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCAdvertiseLogDB : MMObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
}

- (void).cxx_destruct;
- (_Bool)deleteADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2;
- (id)getADLogs:(unsigned int)arg1 toLocalId:(unsigned int)arg2 limit:(unsigned int)arg3;
- (_Bool)insertADLogItem:(id)arg1;
- (unsigned int)getMaxLocalId;
- (id)getLogTable;
- (id)DBContext;
- (void)closeDB;
- (id)initWithPath:(id)arg1;

@end
