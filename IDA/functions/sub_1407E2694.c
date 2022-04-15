//----- (00000001407E2694) ----------------------------------------------------
__int64 sub_1407E2694()
{
	__int64 result; // rax
	struct _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

	GetStartupInfoW(&StartupInfo);
	result = 10i64;
	if ((StartupInfo.dwFlags & 1) != 0)
		return StartupInfo.wShowWindow;
	return result;
}

