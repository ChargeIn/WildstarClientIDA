//----- (00000001407DC118) ----------------------------------------------------
__int64 sub_1407DC118()
{
	uintptr_t v0; // rax
	__int64 result; // rax
	unsigned __int64 v2; // [rsp+30h] [rbp+10h] BYREF
	struct _FILETIME SystemTimeAsFileTime; // [rsp+38h] [rbp+18h] BYREF
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+20h] BYREF

	v0 = _security_cookie;
	SystemTimeAsFileTime = 0i64;
	if (_security_cookie == 0x2B992DDFA232i64)
	{
		GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
		v2 = (unsigned __int64)SystemTimeAsFileTime;
		v2 ^= GetCurrentThreadId();
		v2 ^= GetCurrentProcessId();
		QueryPerformanceCounter(&PerformanceCount);
		v0 = ((unsigned __int64)&v2 ^ v2 ^ PerformanceCount.QuadPart ^ ((unsigned __int64)PerformanceCount.LowPart << 32)) & 0xFFFFFFFFFFFFi64;
		if (v0 == 0x2B992DDFA232i64)
			v0 = 0x2B992DDFA233i64;
		_security_cookie = v0;
	}
	result = ~v0;
	qword_140C0F7B8 = result;
	return result;
}
// 140C0F7B8: using guessed type __int64 qword_140C0F7B8;

