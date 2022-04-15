//----- (00000001401C80A0) ----------------------------------------------------
__int64 sub_1401C80A0()
{
	__int64 v0; // rbx
	_DWORD* v1; // rdx
	DWORD dwNumberOfProcessors; // eax
	__int64 v3; // rax
	unsigned __int64 v4; // kr00_8
	int* v5; // rax
	unsigned __int64 v6; // r8
	unsigned int i; // eax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 result; // rax
	__int64 v11; // rcx
	__int64 v12; // rdx
	__int64(__fastcall * v13)(__int64(__fastcall*)(__int64, _QWORD), __int64, unsigned int); // rax
	struct _SYSTEM_INFO SystemInfo; // [rsp+30h] [rbp-38h] BYREF

	v0 = qword_140C63758;
	v1 = (_DWORD*)(qword_140C63758 + 104);
	*(_DWORD*)(qword_140C63758 + 40) = 0;
	*(_DWORD*)(v0 + 108) = 0;
	*v1 = 0;
	*(_QWORD*)(v0 + 112) = 0i64;
	TlsSetValue(*(_DWORD*)(v0 + 4), v1);
	GetSystemInfo(&SystemInfo);
	dwNumberOfProcessors = SystemInfo.dwNumberOfProcessors;
	if (SystemInfo.dwNumberOfProcessors > 0x20)
		dwNumberOfProcessors = 32;
	*(_DWORD*)(v0 + 184) = dwNumberOfProcessors;
	v4 = dwNumberOfProcessors;
	v3 = 16i64 * dwNumberOfProcessors;
	if (!is_mul_ok(v4, 0x10ui64))
		v3 = -1i64;
	v5 = sub_14018B280(v3, 0);
	v6 = 16i64 * *(unsigned int*)(v0 + 184);
	*(_QWORD*)(v0 + 192) = v5;
	sub_1407E4830(v5, 0i64, v6);
	for (i = 0; i < *(_DWORD*)(v0 + 184); *(_QWORD*)(v9 + 8) = 0i64)
	{
		v8 = i++;
		v9 = *(_QWORD*)(v0 + 192) + 16 * v8;
		*(_DWORD*)v9 = 1;
		*(_DWORD*)(v9 + 4) = 1;
	}
	result = sub_1401A1120((int**)(v0 + 176), 0);
	if ((int)result >= 0)
	{
		v11 = *(_QWORD*)(v0 + 192);
		v12 = *(unsigned int*)(v0 + 184);
		*(_QWORD*)&SystemInfo.dwOemId = "Task";
		SystemInfo.lpMaximumApplicationAddress = sub_1401C8750;
		*(_QWORD*)&SystemInfo.dwNumberOfProcessors = v11;
		v13 = sub_1401C8B60;
		if (!sub_1401C8750)
			v13 = 0i64;
		SystemInfo.lpMinimumApplicationAddress = (LPVOID)0x700000001i64;
		SystemInfo.dwActiveProcessorMask = (DWORD_PTR)v13;
		SystemInfo.dwAllocationGranularity = v12;
		result = sub_1401A0EB0((__int64)&SystemInfo, v12, (__int64*)(v0 + 200));
		if ((int)result >= 0)
			return 0i64;
	}
	return result;
}
// 140C63758: using guessed type __int64 qword_140C63758;

