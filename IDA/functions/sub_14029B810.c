//----- (000000014029B810) ----------------------------------------------------
__int64 __fastcall sub_14029B810(__int64 a1)
{
	signed __int32 v2; // edx
	__int64* v3; // rsi
	__int64 v4; // rax
	signed __int32 v5; // ecx
	__int64 v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rcx
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rcx
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // rcx
	int v16[6]; // [rsp+20h] [rbp-18h] BYREF

	*(_QWORD*)a1 = off_140B61B70;
	if (*(_QWORD*)(a1 + 80))
	{
		v2 = *(_DWORD*)(a1 + 72);
		if (v2)
		{
			while (v2 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v2 + 1, v2))
			{
				v2 = *(_DWORD*)(a1 + 72);
				if (!v2)
					goto LABEL_14;
			}
			v3 = *(__int64**)(a1 + 80);
			if (v3)
			{
				(*(void(__fastcall**)(_QWORD))(*v3 + 104))(*(_QWORD*)(a1 + 80));
				v4 = *v3;
				v16[0] = -1;
				(*(void(__fastcall**)(__int64*, int*))(v4 + 32))(v3, v16);
				v5 = *(_DWORD*)(a1 + 72);
				if (v5)
				{
					while (v5 != _InterlockedCompareExchange((volatile signed __int32*)(a1 + 72), v5 - 1, v5))
					{
						v5 = *(_DWORD*)(a1 + 72);
						if (!v5)
							goto LABEL_14;
					}
					if (v5 == 1)
					{
						v6 = *(_QWORD*)(a1 + 80);
						if (v6)
						{
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
							*(_QWORD*)(a1 + 80) = 0i64;
						}
					}
				}
			}
		}
	}
LABEL_14:
	v7 = *(_QWORD*)(a1 + 64);
	if (v7)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		*(_QWORD*)(a1 + 64) = 0i64;
	}
	if (*(_QWORD*)(a1 + 48))
	{
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 6160i64, a1 + 48);
		sub_14018B900(*(_QWORD*)(a1 + 48), 0);
	}
	v8 = *(_QWORD**)(a1 + 144);
	if (v8)
		*v8 = *(_QWORD*)(a1 + 152);
	v9 = *(_QWORD*)(a1 + 152);
	if (v9)
		*(_QWORD*)(v9 + 144) = *(_QWORD*)(a1 + 144);
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	v10 = *(_QWORD**)(a1 + 128);
	if (v10)
		*v10 = *(_QWORD*)(a1 + 136);
	v11 = *(_QWORD*)(a1 + 136);
	if (v11)
		*(_QWORD*)(v11 + 32) = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v12 = *(_QWORD**)(a1 + 112);
	if (v12)
		*v12 = *(_QWORD*)(a1 + 120);
	v13 = *(_QWORD*)(a1 + 120);
	if (v13)
		*(_QWORD*)(v13 + 16) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	result = sub_14012F590(a1 + 72);
	v15 = *(_QWORD*)(a1 + 64);
	if (v15)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	return result;
}
// 140B61B70: using guessed type __int64 (__fastcall *off_140B61B70[7])();
// 14029B810: using guessed type int var_18[6];

