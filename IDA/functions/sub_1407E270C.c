//----- (00000001407E270C) ----------------------------------------------------
uintptr_t sub_1407E270C()
{
	HMODULE ModuleHandleW; // rbx
	uintptr_t result; // rax

	ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
	qword_140DC5240 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FlsAlloc");
	qword_140DC5248 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FlsFree");
	qword_140DC5250 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FlsGetValue");
	qword_140DC5258 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FlsSetValue");
	qword_140DC5260 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "InitializeCriticalSectionEx");
	qword_140DC5268 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CreateSemaphoreExW");
	qword_140DC5270 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "SetThreadStackGuarantee");
	qword_140DC5278 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CreateThreadpoolTimer");
	qword_140DC5280 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "SetThreadpoolTimer");
	qword_140DC5288 = _security_cookie ^ (unsigned __int64)GetProcAddress(
		ModuleHandleW,
		"WaitForThreadpoolTimerCallbacks");
	qword_140DC5290 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CloseThreadpoolTimer");
	qword_140DC5298 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CreateThreadpoolWait");
	qword_140DC52A0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "SetThreadpoolWait");
	qword_140DC52A8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CloseThreadpoolWait");
	qword_140DC52B0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FlushProcessWriteBuffers");
	qword_140DC52B8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "FreeLibraryWhenCallbackReturns");
	qword_140DC52C0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetCurrentProcessorNumber");
	qword_140DC52C8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetLogicalProcessorInformation");
	qword_140DC52D0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CreateSymbolicLinkW");
	qword_140DC52D8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "SetDefaultDllDirectories");
	qword_140DC52E8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "EnumSystemLocalesEx");
	qword_140DC52E0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "CompareStringEx");
	qword_140DC52F0 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetDateFormatEx");
	qword_140DC52F8 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetLocaleInfoEx");
	qword_140DC5300 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetTimeFormatEx");
	qword_140DC5308 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetUserDefaultLocaleName");
	qword_140DC5310 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "IsValidLocaleName");
	qword_140DC5318 = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "LCMapStringEx");
	result = _security_cookie ^ (unsigned __int64)GetProcAddress(ModuleHandleW, "GetCurrentPackageId");
	qword_140DC5320 = result;
	return result;
}
// 140DC5240: using guessed type __int64 qword_140DC5240;
// 140DC5248: using guessed type __int64 qword_140DC5248;
// 140DC5250: using guessed type __int64 qword_140DC5250;
// 140DC5258: using guessed type __int64 qword_140DC5258;
// 140DC5260: using guessed type __int64 qword_140DC5260;
// 140DC5268: using guessed type __int64 qword_140DC5268;
// 140DC5270: using guessed type __int64 qword_140DC5270;
// 140DC5278: using guessed type __int64 qword_140DC5278;
// 140DC5280: using guessed type __int64 qword_140DC5280;
// 140DC5288: using guessed type __int64 qword_140DC5288;
// 140DC5290: using guessed type __int64 qword_140DC5290;
// 140DC5298: using guessed type __int64 qword_140DC5298;
// 140DC52A0: using guessed type __int64 qword_140DC52A0;
// 140DC52A8: using guessed type __int64 qword_140DC52A8;
// 140DC52B0: using guessed type __int64 qword_140DC52B0;
// 140DC52B8: using guessed type __int64 qword_140DC52B8;
// 140DC52C0: using guessed type __int64 qword_140DC52C0;
// 140DC52C8: using guessed type __int64 qword_140DC52C8;
// 140DC52D0: using guessed type __int64 qword_140DC52D0;
// 140DC52D8: using guessed type __int64 qword_140DC52D8;
// 140DC52E0: using guessed type __int64 qword_140DC52E0;
// 140DC52E8: using guessed type __int64 qword_140DC52E8;
// 140DC52F0: using guessed type __int64 qword_140DC52F0;
// 140DC52F8: using guessed type __int64 qword_140DC52F8;
// 140DC5300: using guessed type __int64 qword_140DC5300;
// 140DC5308: using guessed type __int64 qword_140DC5308;
// 140DC5310: using guessed type __int64 qword_140DC5310;
// 140DC5318: using guessed type __int64 qword_140DC5318;
// 140DC5320: using guessed type __int64 qword_140DC5320;

