#include "../winhttp.h"

//----- (00000001405F4B60) ----------------------------------------------------
__int64 __fastcall sub_1405F4B60(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rax
	unsigned int v6; // esi
	__int64 v7; // rax
	__int64 v8; // r9
	unsigned int v9; // r8d
	__int64 v10; // rbx
	__int64 v11; // rdx
	bool v12; // al
	__int64 v13; // rcx
	__int64 i; // rax
	__int64 v15; // rax
	int* v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v20; // [rsp+40h] [rbp+8h]

	*(_QWORD*)a1 = a2;
	v5 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 32) = v5;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_BYTE*)v5 = 0;
	v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 16i64) = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24i64) = *(_QWORD*)(a1 + 32);
	*(_DWORD*)(a1 + 8) = *(_DWORD*)a3;
	*(_DWORD*)(a1 + 12) = *(_DWORD*)(a3 + 8);
	*(_DWORD*)(a1 + 16) = *(_DWORD*)(a3 + 24);
	*(_DWORD*)(a1 + 20) = dword_140C636A8 - *(_DWORD*)(a3 + 28);
	while (v6 < *(_DWORD*)(a3 + 12))
	{
		v7 = *(_QWORD*)(a3 + 16);
		v8 = *(_QWORD*)(a1 + 32);
		v9 = *(_DWORD*)(v7 + 8i64 * v6);
		v10 = v8;
		HIDWORD(v20) = *(_DWORD*)(v7 + 8i64 * v6 + 4);
		v11 = *(_QWORD*)(v8 + 8);
		LODWORD(v20) = v9;
		v12 = 1;
		while (v11)
		{
			v10 = v11;
			v12 = v9 < *(_DWORD*)(v11 + 32);
			if (v9 >= *(_DWORD*)(v11 + 32))
				v11 = *(_QWORD*)(v11 + 24);
			else
				v11 = *(_QWORD*)(v11 + 16);
		}
		v13 = v10;
		if (v12)
		{
			if (v10 == *(_QWORD*)(v8 + 16))
				goto LABEL_19;
			if (*(_BYTE*)v10 || *(_QWORD*)(*(_QWORD*)(v10 + 8) + 8i64) != v10)
			{
				v13 = *(_QWORD*)(v10 + 16);
				if (v13)
				{
					for (i = *(_QWORD*)(v13 + 24); i; i = *(_QWORD*)(i + 24))
						v13 = i;
				}
				else
				{
					v13 = *(_QWORD*)(v10 + 8);
					if (v10 == *(_QWORD*)(v13 + 16))
					{
						do
						{
							v15 = v13;
							v13 = *(_QWORD*)(v13 + 8);
						} while (v15 == *(_QWORD*)(v13 + 16));
					}
				}
			}
			else
			{
				v13 = *(_QWORD*)(v10 + 24);
			}
		}
		if (*(_DWORD*)(v13 + 32) < v9)
		{
		LABEL_19:
			if (v10 == v8 || v9 < *(_DWORD*)(v10 + 32))
			{
				v16 = sub_14018B280(40i64, 0);
				if (v16 != (int*)-32i64)
					*((_QWORD*)v16 + 4) = v20;
				*(_QWORD*)(v10 + 16) = v16;
				v18 = *(_QWORD*)(a1 + 32);
				if (v10 == v18)
				{
					*(_QWORD*)(v18 + 8) = v16;
					*(_QWORD*)(*(_QWORD*)(a1 + 32) + 24i64) = v16;
				}
				else if (v10 == *(_QWORD*)(v18 + 16))
				{
					*(_QWORD*)(v18 + 16) = v16;
				}
			}
			else
			{
				v16 = sub_14018B280(40i64, 0);
				if (v16 != (int*)-32i64)
					*((_QWORD*)v16 + 4) = v20;
				*(_QWORD*)(v10 + 24) = v16;
				v17 = *(_QWORD*)(a1 + 32);
				if (v10 == *(_QWORD*)(v17 + 24))
					*(_QWORD*)(v17 + 24) = v16;
			}
			*((_QWORD*)v16 + 1) = v10;
			*((_QWORD*)v16 + 2) = 0i64;
			*((_QWORD*)v16 + 3) = 0i64;
			sub_1400081C0((__int64)v16, (_QWORD*)(*(_QWORD*)(a1 + 32) + 8i64));
			++* (_QWORD*)(a1 + 40);
		}
		++v6;
	}
	return a1;
}
// 1405F4C9F: conditional instruction was optimized away because rdx.8==0
// 140C636A8: using guessed type int dword_140C636A8;

