
extern zend_class_entry *zendframework_inputfilter_unknowninputscapableinterface_ce;

ZEPHIR_INIT_CLASS(ZendFramework_InputFilter_UnknownInputsCapableInterface);

ZEPHIR_INIT_FUNCS(zendframework_inputfilter_unknowninputscapableinterface_method_entry) {
	PHP_ABSTRACT_ME(ZendFramework_InputFilter_UnknownInputsCapableInterface, hasUnknown, NULL)
	PHP_ABSTRACT_ME(ZendFramework_InputFilter_UnknownInputsCapableInterface, getUnknown, NULL)
  PHP_FE_END
};