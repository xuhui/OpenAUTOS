#ifndef OS_TASK_CONTEXT_H
#define OS_TASK_CONTEXT_H

#if defined(PLATFORM) &&  PLATFORM == PIC18F25K80
#include "platform/pic18f25k80/task_context.h"
#else
#error Platform not defined!
#endif

typedef PlatformTaskContextType TaskContextType;
typedef PlatformTaskContextRefType TaskContextRefType;

/**
 * Saves the context data of a task
 */
#define SaveTaskContext(TaskContextRef) PlatformSaveTaskContext((TaskContextRef))

/**
 * Loads the context data of a task
 */
#if defined(PLATFORM) &&  PLATFORM == PIC18F25K80
#define LoadTaskContext(TaskContextRef,FuncNameStr) PlatformLoadTaskContext((TaskContextRef),FuncNameStr)
#else
#define LoadTaskContext(TaskContextRef) PlatformLoadTaskContext((TaskContextRef))
#endif


#endif//OS_TASK_CONTEXT_H