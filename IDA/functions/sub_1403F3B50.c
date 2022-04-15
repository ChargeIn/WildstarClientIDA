#include "../winhttp.h"

//----- (00000001403F3B50) ----------------------------------------------------
__int64 __fastcall sub_1403F3B50(_QWORD* a1, unsigned int* a2)
{
	BOOL v4; // r14d
	__int64 v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // rdx
	void(__fastcall * v8)(__int64, __int64, __int64, _QWORD); // rax
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rbx
	int v13; // ebp
	__int64 v14; // rsi
	unsigned int v15; // eax
	__int64 v16; // r9
	void(__fastcall * v17)(__int64, __int64, _QWORD, __int64, char*, _QWORD); // r10
	__int64 v18; // rcx
	char* v19; // r8
	_QWORD* v20; // rcx
	__int64 v21; // rcx
	char v23[16]; // [rsp+30h] [rbp-58h] BYREF
	__int64 v24; // [rsp+40h] [rbp-48h]

	v4 = *a2 == 0;
	sub_140400F50((__int64)v23, (__int64)a2);
	if (v4)
		sub_1403F8590(a1, (int*)a2 + 6, (__int64*)a2 + 1);
	v5 = a1[3329];
	if (v5)
	{
		do
		{
			v6 = *(_QWORD*)(v5 + 24);
			if (*(_DWORD*)(v5 + 32) == a2[2] && *(_QWORD*)(v5 + 40) == *((_QWORD*)a2 + 2))
			{
				v7 = *a2;
				v8 = *(void(__fastcall**)(__int64, __int64, __int64, _QWORD))(v5 + 8);
				v9 = *(_QWORD*)v5;
				*(_QWORD*)(v5 + 8) = 0i64;
				*(_QWORD*)v5 = 0i64;
				v8(v9, v7, v5 + 32, *(_QWORD*)(v5 + 48));
				v10 = *(_QWORD**)(v5 + 16);
				if (v10)
					*v10 = *(_QWORD*)(v5 + 24);
				v11 = *(_QWORD*)(v5 + 24);
				if (v11)
					*(_QWORD*)(v11 + 16) = *(_QWORD*)(v5 + 16);
				*(_QWORD*)(v5 + 16) = 0i64;
				*(_QWORD*)(v5 + 24) = 0i64;
				sub_14018B900(v5, 0);
			}
			v5 = v6;
		} while (v6);
	}
	v12 = a1[3330];
	if (v12)
	{
		v13 = 291;
		do
		{
			v14 = *(_QWORD*)(v12 + 24);
			if (*(_DWORD*)(v12 + 32) == a2[2] && *(_QWORD*)(v12 + 40) == *((_QWORD*)a2 + 2))
			{
				v15 = *(_DWORD*)(v12 + 56);
				if (v15 <= 8)
				{
					if (_bittest(&v13, v15))
					{
						v16 = *a2;
						v17 = *(void(__fastcall**)(__int64, __int64, _QWORD, __int64, char*, _QWORD))(v12 + 8);
						v18 = *(_QWORD*)v12;
						*(_QWORD*)(v12 + 8) = 0i64;
						*(_QWORD*)v12 = 0i64;
						v19 = v23;
						if (!v4)
							v19 = 0i64;
						v17(v18, v12 + 32, *(unsigned int*)(v12 + 56), v16, v19, *(_QWORD*)(v12 + 48));
						v20 = *(_QWORD**)(v12 + 16);
						if (v20)
							*v20 = *(_QWORD*)(v12 + 24);
						v21 = *(_QWORD*)(v12 + 24);
						if (v21)
							*(_QWORD*)(v21 + 16) = *(_QWORD*)(v12 + 16);
						*(_QWORD*)(v12 + 16) = 0i64;
						*(_QWORD*)(v12 + 24) = 0i64;
						sub_14018B900(v12, 0);
					}
				}
			}
			v12 = v14;
		} while (v14);
	}
	if (v24)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v24 - 16) + 8i64))(v24 - 16);
	return 0i64;
}

