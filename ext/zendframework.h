
/* This file was generated automatically by Zephir do not modify it! */

#ifndef ZEPHIR_CLASS_ENTRIES_H
#define ZEPHIR_CLASS_ENTRIES_H

#include "zendframework/di/dependencyinjectioninterface.zep.h"
#include "zendframework/di/exception/circulardependencyexception.zep.h"
#include "zendframework/di/exception/classnotfoundexception.zep.h"
#include "zendframework/di/exception/exceptioninterface.zep.h"
#include "zendframework/di/exception/invalidargumentexception.zep.h"
#include "zendframework/di/exception/invalidcallbackexception.zep.h"
#include "zendframework/di/exception/invalidparamnameexception.zep.h"
#include "zendframework/di/exception/invalidpositionexception.zep.h"
#include "zendframework/di/exception/missingpropertyexception.zep.h"
#include "zendframework/di/exception/runtimeexception.zep.h"
#include "zendframework/di/exception/undefinedreferenceexception.zep.h"
#include "zendframework/di/locatorinterface.zep.h"
#include "zendframework/di/servicelocatorinterface.zep.h"
#include "zendframework/eventmanager/event.zep.h"
#include "zendframework/eventmanager/eventinterface.zep.h"
#include "zendframework/eventmanager/eventmanagerawareinterface.zep.h"
#include "zendframework/eventmanager/eventmanagerinterface.zep.h"
#include "zendframework/eventmanager/eventscapableinterface.zep.h"
#include "zendframework/eventmanager/exception/domainexception.zep.h"
#include "zendframework/eventmanager/exception/exceptioninterface.zep.h"
#include "zendframework/eventmanager/exception/invalidargumentexception.zep.h"
#include "zendframework/eventmanager/exception/invalidcallbackexception.zep.h"
#include "zendframework/eventmanager/filter/filterinterface.zep.h"
#include "zendframework/eventmanager/listeneraggregateinterface.zep.h"
#include "zendframework/eventmanager/sharedeventaggregateawareinterface.zep.h"
#include "zendframework/eventmanager/sharedeventmanagerawareinterface.zep.h"
#include "zendframework/eventmanager/sharedeventmanagerinterface.zep.h"
#include "zendframework/eventmanager/sharedlisteneraggregateinterface.zep.h"
#include "zendframework/filter/filterinterface.zep.h"
#include "zendframework/loader/exception/badmethodcallexception.zep.h"
#include "zendframework/loader/exception/domainexception.zep.h"
#include "zendframework/loader/exception/exceptioninterface.zep.h"
#include "zendframework/loader/exception/invalidargumentexception.zep.h"
#include "zendframework/loader/exception/invalidpathexception.zep.h"
#include "zendframework/loader/exception/missingresourcenamespaceexception.zep.h"
#include "zendframework/loader/exception/pluginloaderexception.zep.h"
#include "zendframework/loader/exception/runtimeexception.zep.h"
#include "zendframework/loader/exception/securityexception.zep.h"
#include "zendframework/loader/pluginclasslocator.zep.h"
#include "zendframework/loader/shortnamelocator.zep.h"
#include "zendframework/loader/splautoloader.zep.h"
#include "zendframework/log/loggerawareinterface.zep.h"
#include "zendframework/log/loggerinterface.zep.h"
#include "zendframework/servicemanager/abstractfactoryinterface.zep.h"
#include "zendframework/servicemanager/configinterface.zep.h"
#include "zendframework/servicemanager/delegatorfactoryinterface.zep.h"
#include "zendframework/servicemanager/exception/circulardependencyfoundexception.zep.h"
#include "zendframework/servicemanager/exception/circularreferenceexception.zep.h"
#include "zendframework/servicemanager/exception/exceptioninterface.zep.h"
#include "zendframework/servicemanager/exception/invalidargumentexception.zep.h"
#include "zendframework/servicemanager/exception/invalidservicenameexception.zep.h"
#include "zendframework/servicemanager/exception/runtimeexception.zep.h"
#include "zendframework/servicemanager/exception/servicenotcreatedexception.zep.h"
#include "zendframework/servicemanager/exception/servicenotfoundexception.zep.h"
#include "zendframework/servicemanager/factoryinterface.zep.h"
#include "zendframework/servicemanager/initializerinterface.zep.h"
#include "zendframework/servicemanager/mutablecreationoptionsinterface.zep.h"
#include "zendframework/servicemanager/servicelocatorawareinterface.zep.h"
#include "zendframework/servicemanager/servicelocatorinterface.zep.h"
#include "zendframework/stdlib/arrayserializableinterface.zep.h"
#include "zendframework/stdlib/callbackhandler.zep.h"
#include "zendframework/stdlib/dispatchableinterface.zep.h"
#include "zendframework/stdlib/exception/badmethodcallexception.zep.h"
#include "zendframework/stdlib/exception/domainexception.zep.h"
#include "zendframework/stdlib/exception/exceptioninterface.zep.h"
#include "zendframework/stdlib/exception/extensionnotloadedexception.zep.h"
#include "zendframework/stdlib/exception/invalidargumentexception.zep.h"
#include "zendframework/stdlib/exception/invalidcallbackexception.zep.h"
#include "zendframework/stdlib/exception/logicexception.zep.h"
#include "zendframework/stdlib/exception/runtimeexception.zep.h"
#include "zendframework/stdlib/extractor/extractioninterface.zep.h"
#include "zendframework/stdlib/initializableinterface.zep.h"
#include "zendframework/stdlib/message.zep.h"
#include "zendframework/stdlib/messageinterface.zep.h"
#include "zendframework/stdlib/parameterobjectinterface.zep.h"
#include "zendframework/stdlib/parametersinterface.zep.h"
#include "zendframework/stdlib/requestinterface.zep.h"
#include "zendframework/stdlib/responseinterface.zep.h"
#include "zendframework/stdlib/splpriorityqueue.zep.h"
#include "zendframework/stdlib/splqueue.zep.h"
#include "zendframework/stdlib/splstack.zep.h"
#include "zendframework/validator/exception/badmethodcallexception.zep.h"
#include "zendframework/validator/exception/exceptioninterface.zep.h"
#include "zendframework/validator/exception/extensionnotloadedexception.zep.h"
#include "zendframework/validator/exception/invalidargumentexception.zep.h"
#include "zendframework/validator/exception/invalidmagicmimefileexception.zep.h"
#include "zendframework/validator/exception/runtimeexception.zep.h"
#include "zendframework/validator/translator/translatorawareinterface.zep.h"
#include "zendframework/validator/translator/translatorinterface.zep.h"
#include "zendframework/validator/validatorinterface.zep.h"

#endif