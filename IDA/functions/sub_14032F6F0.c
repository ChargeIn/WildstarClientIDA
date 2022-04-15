//----- (000000014032F6F0) ----------------------------------------------------
__int64 __fastcall sub_14032F6F0(__int64 a1, __int64 a2, unsigned __int16* a3)
{
	__int64* v3; // rdi
	int* v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rcx
	_QWORD* v15; // rdx
	__int64 v16; // rdx
	LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

	v3 = (__int64*)(a1 + 56);
	*(_QWORD*)(a1 + 8) = a3;
	if (a1 == -56)
		return 2147500037i64;
	v7 = sub_14018B280(24i64, 0);
	if (v7)
		v8 = sub_1401AE310((__int64)v7);
	else
		v8 = 0i64;
	*v3 = v8;
	v9 = *(unsigned int*)(*(_QWORD*)(a1 + 8) + 44i64);
	if (!(_DWORD)v9)
	{
		QueryPerformanceCounter(&PerformanceCount);
		v8 = *v3;
		v9 = PerformanceCount.LowPart - ::PerformanceCount.LowPart;
	}
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v8 + 16i64))(v8, v9);
	*(_QWORD*)(a1 + 40) = a2;
	v10 = *(_QWORD*)(352i64 * *a3 + *(_QWORD*)(a2 + 840));
	*(_WORD*)(a1 + 400) = 0;
	for (*(_QWORD*)(a1 + 48) = v10; *(_QWORD*)(a1 + 384); *(_QWORD*)(v11 + 16) = 0i64)
	{
		v11 = *(_QWORD*)(a1 + 384);
		v12 = *(_QWORD**)(v11 + 8);
		if (v12)
			*v12 = *(_QWORD*)(v11 + 16);
		v13 = *(_QWORD*)(v11 + 16);
		if (v13)
			*(_QWORD*)(v13 + 8) = *(_QWORD*)(v11 + 8);
		*(_QWORD*)(v11 + 8) = 0i64;
	}
	for (; *(_QWORD*)(a1 + 392); *(_QWORD*)(v14 + 16) = 0i64)
	{
		v14 = *(_QWORD*)(a1 + 392);
		v15 = *(_QWORD**)(v14 + 8);
		if (v15)
			*v15 = *(_QWORD*)(v14 + 16);
		v16 = *(_QWORD*)(v14 + 16);
		if (v16)
			*(_QWORD*)(v16 + 8) = *(_QWORD*)(v14 + 8);
		*(_QWORD*)(v14 + 8) = 0i64;
	}
	(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 120i64))(a1, 0i64);
	return 0i64;
}

