
#ifdef HAVE_CONFIG_H
#include "../../ext_config.h"
#endif

#include <php.h>
#include "../../php_ext.h"
#include "../../ext.h"

#include <Zend/zend_exceptions.h>

#include "kernel/main.h"


/*

This file is part of the php-ext-zendframework package.

For the full copyright and license information, please view the LICENSE
file that was distributed with this source code.

*/
/**
 * Interface providing events that can be attached, detached and triggered.
 */
ZEPHIR_INIT_CLASS(ZendFramework_EventManager_EventsCapableInterface) {

	ZEPHIR_REGISTER_INTERFACE(Zend\\EventManager, EventsCapableInterface, zendframework, eventmanager_eventscapableinterface, zendframework_eventmanager_eventscapableinterface_method_entry);

	return SUCCESS;

}

/**
 * Retrieve the event manager
 *
 * Lazy-loads an EventManager instance if none registered.
 *
 * @return EventManagerInterface
 */
ZEPHIR_DOC_METHOD(ZendFramework_EventManager_EventsCapableInterface, getEventManager);
