//----- (000000014029B080) ----------------------------------------------------
__int64 __fastcall sub_14029B080(__int64 a1, unsigned int a2)
{
	unsigned __int64 i; // rdi
	__int64 v5; // rcx
	__int64 v6; // rcx
	signed __int32 v7; // ecx
	__int64 v8; // rcx
	signed __int32 v9; // ecx
	__int64 v10; // rcx
	signed __int32 v11; // ecx
	__int64 v12; // rcx

	for (i = 0i64; i < *(_QWORD*)(a1 + 176); ++i)
		sub_14018B900(*(_QWORD*)(*(_QWORD*)(a1 + 168) + 8 * i), 0);
	*(_QWORD*)(a1 + 176) = 0i64;
	v5 = *(_QWORD*)(a1 + 96);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 104);
	if (v6)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	*(_DWORD*)(a1 + 160) = a2;
	v7 = *(_DWORD*)(a1 + 112);
	if (v7)
	{
		while (v7 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 112), v7 - 1, v7))
		{
			v7 = *(_DWORD*)(a1 + 112);
			if (!v7)
				goto LABEL_14;
		}
		if (v7 == 1)
		{
			v8 = *(_QWORD*)(a1 + 120);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(a1 + 120) = 0i64;
			}
		}
	}
LABEL_14:
	v9 = *(_DWORD*)(a1 + 128);
	if (v9)
	{
		while (v9 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 128), v9 - 1, v9))
		{
			v9 = *(_DWORD*)(a1 + 128);
			if (!v9)
				goto LABEL_21;
		}
		if (v9 == 1)
		{
			v10 = *(_QWORD*)(a1 + 136);
			if (v10)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
				*(_QWORD*)(a1 + 136) = 0i64;
			}
		}
	}
LABEL_21:
	v11 = *(_DWORD*)(a1 + 144);
	if (v11)
	{
		while (v11 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 144), v11 - 1, v11))
		{
			v11 = *(_DWORD*)(a1 + 144);
			if (!v11)
				goto LABEL_28;
		}
		if (v11 == 1)
		{
			v12 = *(_QWORD*)(a1 + 152);
			if (v12)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
				*(_QWORD*)(a1 + 152) = 0i64;
			}
		}
	}
LABEL_28:
	sub_14029CD30(a1);
	*(_DWORD*)(a1 + 24) = 1;
	return a2;
}

