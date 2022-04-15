//----- (0000000140005A90) ----------------------------------------------------
void __fastcall sub_140005A90(_QWORD* a1)
{
	unsigned __int64 i; // rbp
	unsigned __int64 v3; // rdi
	_QWORD* v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rcx
	_QWORD* v8; // rbx
	unsigned __int64 j; // rdi
	__int64 v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rcx

	for (i = 0i64; i < a1[8]; ++i)
	{
		v3 = 0i64;
		v4 = *(_QWORD**)(a1[7] + 8 * i);
		if (v4[1])
		{
			do
			{
				v5 = *(_QWORD*)(*v4 + 8 * v3);
				if (v5)
				{
					v6 = *(_QWORD*)(v5 + 64);
					if (v6)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
					v7 = *(_QWORD*)(v5 + 56);
					if (v7)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
					sub_14018B900(v5, 0);
				}
				++v3;
				v4 = *(_QWORD**)(a1[7] + 8 * i);
			} while (v3 < v4[1]);
		}
		*(_QWORD*)(*(_QWORD*)(a1[7] + 8 * i) + 8i64) = 0i64;
		v8 = *(_QWORD**)(a1[7] + 8 * i);
		if (v8)
		{
			if (*v8)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v8 - 16i64) + 8i64))(*v8 - 16i64);
			sub_14018B900((__int64)v8, 0);
		}
	}
	a1[8] = 0i64;
	for (j = 0i64; j < a1[6]; ++j)
	{
		v10 = *(_QWORD*)(a1[5] + 8 * j);
		if (v10)
		{
			v11 = *(_QWORD*)(v10 + 64);
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			v12 = *(_QWORD*)(v10 + 56);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
			sub_14018B900(v10, 0);
		}
	}
	a1[6] = 0i64;
}

