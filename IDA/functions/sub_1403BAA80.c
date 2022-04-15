//----- (00000001403BAA80) ----------------------------------------------------
void __fastcall sub_1403BAA80(__int64 a1, unsigned int a2)
{
	__int64 v2; // rbp
	__int64 v3; // r9
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rbx
	_QWORD* v7; // rax
	unsigned __int64 i; // rdi
	__int64 v9; // rsi
	__int64 v10; // rcx
	_QWORD* v11; // rdi
	__int64 v12; // [rsp+40h] [rbp+18h] BYREF

	if (a2)
	{
		v2 = a1 + 2720;
		v3 = *(_QWORD*)(a1 + 2728);
		v4 = v3;
		v5 = *(_QWORD*)(v3 + 8);
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < a2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v4 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		}
		if (v4 == v3 || (v12 = v4, a2 < *(_DWORD*)(v4 + 32)))
			v12 = v3;
		v6 = v12;
		if (v12 != *(_QWORD*)(a1 + 2728))
		{
			v7 = *(_QWORD**)(v12 + 40);
			for (i = 0i64; i < v7[1]; ++i)
			{
				v9 = *(_QWORD*)(*v7 + 8 * i);
				if (v9)
				{
					v10 = *(_QWORD*)(v9 + 24);
					if (v10)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
					sub_14018B900(v9, 0);
				}
				v7 = *(_QWORD**)(v6 + 40);
			}
			v11 = *(_QWORD**)(v6 + 40);
			if (v11)
			{
				if (*v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v11 - 16i64) + 8i64))(*v11 - 16i64);
				sub_14018B900((__int64)v11, 0);
			}
			v12 = v6;
			sub_1403D5A90(v2, &v12);
		}
	}
}

