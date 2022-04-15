//----- (00000001401CF300) ----------------------------------------------------
void __fastcall sub_1401CF300(__int64 a1)
{
	void* v2; // rcx
	__int64* i; // rbx
	_QWORD* v4; // rbx
	__int64 v5; // rcx
	_QWORD* v6; // rcx
	_QWORD* v7; // rcx

	if (*(_QWORD*)(a1 + 88))
	{
		PostQueuedCompletionStatus(*(HANDLE*)(a1 + 80), 0, 0i64, 0i64);
		(*(void(__fastcall**)(_QWORD, __int64))(**(_QWORD**)(a1 + 88) + 48i64))(*(_QWORD*)(a1 + 88), 0xFFFFFFFFi64);
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 88) + 8i64))(*(_QWORD*)(a1 + 88));
	}
	v2 = *(void**)(a1 + 80);
	if (v2)
		CloseHandle(v2);
	for (i = *(__int64**)(a1 + 208); i; i = *(__int64**)(a1 + 208))
	{
		sub_1401CEC10(i);
		sub_14018B900((__int64)i, 0);
	}
	v4 = *(_QWORD**)(a1 + 96);
	if (v4)
	{
		v5 = v4[2];
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
		if (*v4)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v4 - 16i64) + 8i64))(*v4 - 16i64);
		sub_14018B900((__int64)v4, 0);
	}
	if (*(_QWORD*)(a1 + 208))
		sub_1401A4A00((const void***)(a1 + 208));
	if (*(_QWORD*)(a1 + 200))
		sub_1401A4A00((const void***)(a1 + 200));
	if (*(_QWORD*)(a1 + 192))
		CloseHandle(*(HANDLE*)(a1 + 192));
	sub_140008410(a1 + 136);
	sub_14018B900(*(_QWORD*)(a1 + 144), 0);
	if (*(_QWORD*)(a1 + 128))
		CloseHandle(*(HANDLE*)(a1 + 128));
	sub_140195D70(a1 + 8);
	*(_DWORD*)(a1 + 8) = 0;
	v6 = *(_QWORD**)(a1 + 24);
	if (v6)
		*v6 = *(_QWORD*)(a1 + 32);
	v7 = *(_QWORD**)(a1 + 32);
	if (v7)
		*v7 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
}

