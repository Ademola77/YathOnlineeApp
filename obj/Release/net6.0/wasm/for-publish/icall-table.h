#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
186,
193,
194,
195,
196,
197,
198,
199,
200,
201,
204,
205,
371,
372,
374,
403,
404,
405,
425,
426,
427,
428,
429,
520,
521,
522,
525,
566,
567,
568,
571,
573,
575,
577,
582,
590,
591,
592,
593,
594,
595,
596,
597,
598,
599,
600,
601,
602,
603,
604,
605,
606,
607,
608,
609,
610,
611,
612,
613,
614,
615,
616,
700,
701,
702,
703,
704,
705,
706,
707,
708,
709,
710,
711,
712,
713,
714,
715,
716,
717,
718,
719,
720,
721,
722,
723,
724,
858,
859,
867,
870,
872,
878,
879,
881,
882,
886,
888,
889,
890,
891,
893,
894,
895,
898,
899,
902,
903,
904,
979,
980,
982,
990,
991,
992,
993,
994,
998,
999,
1000,
1001,
1002,
1003,
1005,
1006,
1007,
1009,
1010,
1012,
1016,
1017,
1018,
1291,
1506,
1507,
8121,
8122,
8124,
8125,
8126,
8127,
8128,
8130,
8132,
8134,
8135,
8143,
8145,
8149,
8150,
8152,
8154,
8156,
8168,
8177,
8178,
8180,
8181,
8182,
8183,
8184,
8186,
8188,
9200,
9204,
9206,
9207,
9208,
9209,
9279,
9280,
9281,
9298,
9299,
9300,
9301,
9335,
9382,
9385,
9394,
9395,
9396,
9397,
9662,
9663,
9668,
9669,
9717,
9718,
9719,
9747,
9753,
9760,
9770,
9773,
9865,
9875,
9885,
9886,
9887,
9888,
9889,
9890,
9896,
9912,
9933,
9934,
9943,
9945,
9952,
9953,
9956,
9958,
9963,
9969,
9970,
9977,
9979,
9989,
9992,
9993,
9994,
10005,
10017,
10023,
10024,
10025,
10027,
10028,
10038,
10057,
10079,
10080,
10081,
10082,
10083,
10100,
10105,
10110,
10141,
10142,
10631,
10632,
10712,
10791,
11052,
11053,
11062,
11063,
11064,
11070,
11148,
11320,
11321,
11994,
11995,
12810,
12829,
12836,
12837,
12839,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementType_raw (int,int);
int ves_icall_System_Array_IsValueOfElementType_raw (int,int,int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy_raw (int,int,int,int,int,int);
int ves_icall_System_Array_GetLength_raw (int,int,int);
int ves_icall_System_Array_GetLowerBound_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
int ves_icall_System_Array_GetValueImpl_raw (int,int,int);
void ves_icall_System_Array_SetGenericValue_icall (int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
int ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
int ves_icall_System_Enum_ToObject_raw (int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType_raw (int,int);
int ves_icall_System_Enum_get_underlying_type_raw (int,int);
int ves_icall_System_Enum_InternalHasFlag_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
int ves_icall_System_GC_GetCollectionCount (int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Abs_double (double);
float ves_icall_System_Math_Abs_single (float);
double ves_icall_System_Math_Acos (double);
double ves_icall_System_Math_Acosh (double);
double ves_icall_System_Math_Asin (double);
double ves_icall_System_Math_Asinh (double);
double ves_icall_System_Math_Atan (double);
double ves_icall_System_Math_Atan2 (double,double);
double ves_icall_System_Math_Atanh (double);
double ves_icall_System_Math_Cbrt (double);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Cosh (double);
double ves_icall_System_Math_Exp (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sinh (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_Tanh (double);
double ves_icall_System_Math_FusedMultiplyAdd (double,double,double);
int ves_icall_System_Math_ILogB (double);
double ves_icall_System_Math_Log2 (double);
double ves_icall_System_Math_ModF (double,int);
float ves_icall_System_MathF_Acos (float);
float ves_icall_System_MathF_Acosh (float);
float ves_icall_System_MathF_Asin (float);
float ves_icall_System_MathF_Asinh (float);
float ves_icall_System_MathF_Atan (float);
float ves_icall_System_MathF_Atan2 (float,float);
float ves_icall_System_MathF_Atanh (float);
float ves_icall_System_MathF_Cbrt (float);
float ves_icall_System_MathF_Ceiling (float);
float ves_icall_System_MathF_Cos (float);
float ves_icall_System_MathF_Cosh (float);
float ves_icall_System_MathF_Exp (float);
float ves_icall_System_MathF_Floor (float);
float ves_icall_System_MathF_Log (float);
float ves_icall_System_MathF_Log10 (float);
float ves_icall_System_MathF_Pow (float,float);
float ves_icall_System_MathF_Sin (float);
float ves_icall_System_MathF_Sinh (float);
float ves_icall_System_MathF_Sqrt (float);
float ves_icall_System_MathF_Tan (float);
float ves_icall_System_MathF_Tanh (float);
float ves_icall_System_MathF_FusedMultiplyAdd (float,float,float);
int ves_icall_System_MathF_ILogB (float);
float ves_icall_System_MathF_Log2 (float);
float ves_icall_System_MathF_ModF (float,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
int ves_icall_RuntimeType_make_array_type_raw (int,int,int);
int ves_icall_RuntimeType_make_byref_type_raw (int,int);
int ves_icall_RuntimeType_MakePointerType_raw (int,int);
int ves_icall_RuntimeType_MakeGenericType_raw (int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
void ves_icall_RuntimeType_GetPacking_raw (int,int,int,int);
int ves_icall_System_Activator_CreateInstanceInternal_raw (int,int);
int ves_icall_RuntimeType_get_DeclaringMethod_raw (int,int);
int ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericArguments_raw (int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition_raw (int,int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetInterfaces_raw (int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_get_DeclaringType_raw (int,int);
int ves_icall_RuntimeType_get_Name_raw (int,int);
int ves_icall_RuntimeType_get_Namespace_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_HasInstantiation_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsComObject_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetModule_raw (int,int);
int ves_icall_RuntimeTypeHandle_IsGenericVariable_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of (int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
int ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_String_InternalIsInterned_raw (int,int);
int ves_icall_System_String_InternalIntern_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
int64_t ves_icall_System_Threading_Interlocked_Add_Long (int,int64_t);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
int ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw (int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw (int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int mono_object_hash_icall_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
void mono_digest_get_public_token (int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_System_Reflection_AssemblyName_ParseAssemblyName (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_location_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw (int,int);
int ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw (int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw (int,int);
void ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw (int,int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw (int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
int ves_icall_CustomAttributeBuilder_GetBlob_raw (int,int,int,int,int,int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_Debugger_IsLogging ();
void ves_icall_System_Diagnostics_Debugger_Log (int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
void ves_icall_Mono_RuntimeMarshal_FreeAssemblyName (int,int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 186,
ves_icall_System_Array_InternalCreate,
// token 193,
ves_icall_System_Array_GetCorElementTypeOfElementType_raw,
// token 194,
ves_icall_System_Array_IsValueOfElementType_raw,
// token 195,
ves_icall_System_Array_CanChangePrimitive,
// token 196,
ves_icall_System_Array_FastCopy_raw,
// token 197,
ves_icall_System_Array_GetLength_raw,
// token 198,
ves_icall_System_Array_GetLowerBound_raw,
// token 199,
ves_icall_System_Array_GetGenericValue_icall,
// token 200,
ves_icall_System_Array_GetValueImpl_raw,
// token 201,
ves_icall_System_Array_SetGenericValue_icall,
// token 204,
ves_icall_System_Array_SetValueImpl_raw,
// token 205,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 371,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 372,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 374,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 403,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 404,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 405,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 425,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 426,
ves_icall_System_Enum_ToObject_raw,
// token 427,
ves_icall_System_Enum_InternalGetCorElementType_raw,
// token 428,
ves_icall_System_Enum_get_underlying_type_raw,
// token 429,
ves_icall_System_Enum_InternalHasFlag_raw,
// token 520,
ves_icall_System_Environment_get_ProcessorCount,
// token 521,
ves_icall_System_Environment_get_TickCount,
// token 522,
ves_icall_System_Environment_get_TickCount64,
// token 525,
ves_icall_System_Environment_FailFast_raw,
// token 566,
ves_icall_System_GC_GetCollectionCount,
// token 567,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 568,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 571,
ves_icall_System_GC_SuppressFinalize_raw,
// token 573,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 575,
ves_icall_System_GC_GetGCMemoryInfo,
// token 577,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 582,
ves_icall_System_Object_MemberwiseClone_raw,
// token 590,
ves_icall_System_Math_Abs_double,
// token 591,
ves_icall_System_Math_Abs_single,
// token 592,
ves_icall_System_Math_Acos,
// token 593,
ves_icall_System_Math_Acosh,
// token 594,
ves_icall_System_Math_Asin,
// token 595,
ves_icall_System_Math_Asinh,
// token 596,
ves_icall_System_Math_Atan,
// token 597,
ves_icall_System_Math_Atan2,
// token 598,
ves_icall_System_Math_Atanh,
// token 599,
ves_icall_System_Math_Cbrt,
// token 600,
ves_icall_System_Math_Ceiling,
// token 601,
ves_icall_System_Math_Cos,
// token 602,
ves_icall_System_Math_Cosh,
// token 603,
ves_icall_System_Math_Exp,
// token 604,
ves_icall_System_Math_Floor,
// token 605,
ves_icall_System_Math_Log,
// token 606,
ves_icall_System_Math_Log10,
// token 607,
ves_icall_System_Math_Pow,
// token 608,
ves_icall_System_Math_Sin,
// token 609,
ves_icall_System_Math_Sinh,
// token 610,
ves_icall_System_Math_Sqrt,
// token 611,
ves_icall_System_Math_Tan,
// token 612,
ves_icall_System_Math_Tanh,
// token 613,
ves_icall_System_Math_FusedMultiplyAdd,
// token 614,
ves_icall_System_Math_ILogB,
// token 615,
ves_icall_System_Math_Log2,
// token 616,
ves_icall_System_Math_ModF,
// token 700,
ves_icall_System_MathF_Acos,
// token 701,
ves_icall_System_MathF_Acosh,
// token 702,
ves_icall_System_MathF_Asin,
// token 703,
ves_icall_System_MathF_Asinh,
// token 704,
ves_icall_System_MathF_Atan,
// token 705,
ves_icall_System_MathF_Atan2,
// token 706,
ves_icall_System_MathF_Atanh,
// token 707,
ves_icall_System_MathF_Cbrt,
// token 708,
ves_icall_System_MathF_Ceiling,
// token 709,
ves_icall_System_MathF_Cos,
// token 710,
ves_icall_System_MathF_Cosh,
// token 711,
ves_icall_System_MathF_Exp,
// token 712,
ves_icall_System_MathF_Floor,
// token 713,
ves_icall_System_MathF_Log,
// token 714,
ves_icall_System_MathF_Log10,
// token 715,
ves_icall_System_MathF_Pow,
// token 716,
ves_icall_System_MathF_Sin,
// token 717,
ves_icall_System_MathF_Sinh,
// token 718,
ves_icall_System_MathF_Sqrt,
// token 719,
ves_icall_System_MathF_Tan,
// token 720,
ves_icall_System_MathF_Tanh,
// token 721,
ves_icall_System_MathF_FusedMultiplyAdd,
// token 722,
ves_icall_System_MathF_ILogB,
// token 723,
ves_icall_System_MathF_Log2,
// token 724,
ves_icall_System_MathF_ModF,
// token 858,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 859,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 867,
ves_icall_RuntimeType_make_array_type_raw,
// token 870,
ves_icall_RuntimeType_make_byref_type_raw,
// token 872,
ves_icall_RuntimeType_MakePointerType_raw,
// token 878,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 879,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 881,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 882,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 886,
ves_icall_RuntimeType_GetPacking_raw,
// token 888,
ves_icall_System_Activator_CreateInstanceInternal_raw,
// token 889,
ves_icall_RuntimeType_get_DeclaringMethod_raw,
// token 890,
ves_icall_System_RuntimeType_getFullName_raw,
// token 891,
ves_icall_RuntimeType_GetGenericArguments_raw,
// token 893,
ves_icall_RuntimeType_GetGenericParameterPosition_raw,
// token 894,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 895,
ves_icall_RuntimeType_GetFields_native_raw,
// token 898,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 899,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 902,
ves_icall_RuntimeType_get_DeclaringType_raw,
// token 903,
ves_icall_RuntimeType_get_Name_raw,
// token 904,
ves_icall_RuntimeType_get_Namespace_raw,
// token 979,
ves_icall_RuntimeTypeHandle_GetAttributes_raw,
// token 980,
ves_icall_reflection_get_token_raw,
// token 982,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 990,
ves_icall_RuntimeTypeHandle_GetCorElementType_raw,
// token 991,
ves_icall_RuntimeTypeHandle_HasInstantiation_raw,
// token 992,
ves_icall_RuntimeTypeHandle_IsComObject_raw,
// token 993,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 994,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 998,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 999,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 1000,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 1001,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 1002,
ves_icall_RuntimeTypeHandle_IsGenericVariable_raw,
// token 1003,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 1005,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 1006,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition_raw,
// token 1007,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 1009,
ves_icall_RuntimeTypeHandle_is_subclass_of,
// token 1010,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 1012,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 1016,
ves_icall_System_String_FastAllocateString_raw,
// token 1017,
ves_icall_System_String_InternalIsInterned_raw,
// token 1018,
ves_icall_System_String_InternalIntern_raw,
// token 1291,
ves_icall_System_Type_internal_from_handle_raw,
// token 1506,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1507,
ves_icall_System_ValueType_Equals_raw,
// token 8121,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 8122,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 8124,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 8125,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 8126,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 8127,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 8128,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 8130,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 8132,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 8134,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 8135,
ves_icall_System_Threading_Interlocked_Add_Long,
// token 8143,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 8145,
mono_monitor_exit_icall_raw,
// token 8149,
ves_icall_System_Threading_Monitor_Monitor_test_synchronised_raw,
// token 8150,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 8152,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 8154,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 8156,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 8168,
ves_icall_System_Threading_Thread_GetCurrentProcessorNumber_raw,
// token 8177,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 8178,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 8180,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 8181,
ves_icall_System_Threading_Thread_GetState_raw,
// token 8182,
ves_icall_System_Threading_Thread_SetState_raw,
// token 8183,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 8184,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 8186,
ves_icall_System_Threading_Thread_YieldInternal,
// token 8188,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 9200,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 9204,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 9206,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 9207,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 9208,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 9209,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 9279,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 9280,
ves_icall_System_GCHandle_InternalFree_raw,
// token 9281,
ves_icall_System_GCHandle_InternalGet_raw,
// token 9298,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 9299,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 9300,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 9301,
ves_icall_System_Runtime_InteropServices_Marshal_IsPinnableType_raw,
// token 9335,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 9382,
mono_object_hash_icall_raw,
// token 9385,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 9394,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 9395,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 9396,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_RunClassConstructor_raw,
// token 9397,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 9662,
ves_icall_System_Reflection_Assembly_GetExecutingAssembly_raw,
// token 9663,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 9668,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 9669,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 9717,
mono_digest_get_public_token,
// token 9718,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 9719,
ves_icall_System_Reflection_AssemblyName_ParseAssemblyName,
// token 9747,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 9753,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 9760,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 9770,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 9773,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 9865,
ves_icall_System_Reflection_RuntimeAssembly_get_EntryPoint_raw,
// token 9875,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 9885,
ves_icall_System_Reflection_RuntimeAssembly_get_location_raw,
// token 9886,
ves_icall_System_Reflection_RuntimeAssembly_get_code_base_raw,
// token 9887,
ves_icall_System_Reflection_RuntimeAssembly_get_fullname_raw,
// token 9888,
ves_icall_System_Reflection_RuntimeAssembly_InternalImageRuntimeVersion_raw,
// token 9889,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 9890,
ves_icall_System_Reflection_RuntimeAssembly_GetModulesInternal_raw,
// token 9896,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 9912,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 9933,
ves_icall_reflection_get_token_raw,
// token 9934,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 9943,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 9945,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 9952,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 9953,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 9956,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 9958,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 9963,
ves_icall_reflection_get_token_raw,
// token 9969,
ves_icall_get_method_info_raw,
// token 9970,
ves_icall_get_method_attributes,
// token 9977,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 9979,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 9989,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 9992,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 9993,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 9994,
ves_icall_reflection_get_token_raw,
// token 10005,
ves_icall_InternalInvoke_raw,
// token 10017,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 10023,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 10024,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 10025,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 10027,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 10028,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 10038,
ves_icall_InternalInvoke_raw,
// token 10057,
ves_icall_reflection_get_token_raw,
// token 10079,
ves_icall_reflection_get_token_raw,
// token 10080,
ves_icall_System_Reflection_RuntimeModule_GetMDStreamVersion_raw,
// token 10081,
ves_icall_System_Reflection_RuntimeModule_InternalGetTypes_raw,
// token 10082,
ves_icall_System_Reflection_RuntimeModule_GetGuidInternal_raw,
// token 10083,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 10100,
ves_icall_reflection_get_token_raw,
// token 10105,
ves_icall_RuntimeParameterInfo_GetTypeModifiers_raw,
// token 10110,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 10141,
ves_icall_reflection_get_token_raw,
// token 10142,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 10631,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 10632,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 10712,
ves_icall_CustomAttributeBuilder_GetBlob_raw,
// token 10791,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 11052,
ves_icall_ModuleBuilder_basic_init_raw,
// token 11053,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 11062,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 11063,
ves_icall_ModuleBuilder_getToken_raw,
// token 11064,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 11070,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 11148,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 11320,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 11321,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 11994,
ves_icall_System_Diagnostics_Debugger_IsLogging,
// token 11995,
ves_icall_System_Diagnostics_Debugger_Log,
// token 12810,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 12829,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 12836,
ves_icall_Mono_RuntimeMarshal_FreeAssemblyName,
// token 12837,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 12839,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_handles [] = {
0,
1,
1,
0,
1,
1,
1,
0,
1,
0,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
1,
0,
1,
1,
1,
1,
0,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
0,
0,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
1,
0,
0,
0,
0,
0,
0,
0,
};
