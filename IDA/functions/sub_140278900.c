//----- (0000000140278900) ----------------------------------------------------
__int64 __fastcall sub_140278900(__int64 a1)
{
	bool v2; // zf
	__int64 v3; // rbx
	_QWORD* v4; // rbx
	_QWORD* v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v9; // [rsp+30h] [rbp+8h] BYREF

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6352) + 880i64))(*(_QWORD*)(a1 + 6352));
	v2 = *(_QWORD*)(a1 + 8592) == 0i64;
	*(_DWORD*)(a1 + 7176) = 1023;
	if (!v2)
	{
		do
		{
			v3 = *(_QWORD*)(a1 + 8592);
			if (v3)
			{
				sub_1402ACFC0(*(_QWORD**)(a1 + 8592));
				sub_14018B900(v3, 0);
			}
		} while (*(_QWORD*)(a1 + 8592));
	}
	while (*(_QWORD*)(a1 + 8600))
	{
		v4 = *(_QWORD**)(a1 + 8600);
		if (v4)
		{
			*(_DWORD*)(*v4 + 7176i64) |= 8u;
			v5 = (_QWORD*)v4[5];
			if (v5)
				*v5 = v4[6];
			v6 = v4[6];
			if (v6)
				*(_QWORD*)(v6 + 40) = v4[5];
			v4[5] = 0i64;
			v4[6] = 0i64;
			v7 = v4[4];
			if (v7)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 16i64))(v7);
			sub_14018B900((__int64)v4, 0);
		}
	}
	v9 = 0x141DE2B60i64;
	sub_1401A3130(14, 2, &v9);
	return 0i64;
}

