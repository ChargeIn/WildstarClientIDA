#include "../winhttp.h"

//----- (00000001405F2510) ----------------------------------------------------
__int64 __fastcall sub_1405F2510(_DWORD* a1, __int64 a2)
{
	_DWORD* v2; // rdi
	unsigned int i; // esi
	__int64 v5; // rax
	__int64 v6; // r9
	unsigned int v7; // r8d
	__int64 v8; // rdx
	__int64 v9; // rbx
	bool v10; // al
	__int64 v11; // rcx
	__int64 j; // rax
	__int64 v13; // rax
	int* v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v18; // [rsp+40h] [rbp+8h]

	v2 = a1 + 56;
	a1[4] = *(_DWORD*)a2;
	a1[6] = *(_DWORD*)(a2 + 4);
	a1[7] = *(_DWORD*)(a2 + 8);
	a1[9] = *(_DWORD*)(a2 + 12);
	a1[8] = *(_DWORD*)(a2 + 16);
	sub_140008410((__int64)(a1 + 56));
	for (i = 0; i < *(_DWORD*)(a2 + 24); ++i)
	{
		v5 = *(_QWORD*)(a2 + 32);
		v6 = *((_QWORD*)v2 + 1);
		v7 = *(_DWORD*)(v5 + 8i64 * i);
		v8 = *(_QWORD*)(v6 + 8);
		v18 = *(_QWORD*)(v5 + 8i64 * i);
		v9 = v6;
		v10 = 1;
		while (v8)
		{
			v9 = v8;
			v10 = v7 < *(_DWORD*)(v8 + 32);
			if (v7 >= *(_DWORD*)(v8 + 32))
				v8 = *(_QWORD*)(v8 + 24);
			else
				v8 = *(_QWORD*)(v8 + 16);
		}
		v11 = v9;
		if (v10)
		{
			if (v9 == *(_QWORD*)(v6 + 16))
				goto LABEL_19;
			if (*(_BYTE*)v9 || *(_QWORD*)(*(_QWORD*)(v9 + 8) + 8i64) != v9)
			{
				v11 = *(_QWORD*)(v9 + 16);
				if (v11)
				{
					for (j = *(_QWORD*)(v11 + 24); j; j = *(_QWORD*)(j + 24))
						v11 = j;
				}
				else
				{
					v11 = *(_QWORD*)(v9 + 8);
					if (v9 == *(_QWORD*)(v11 + 16))
					{
						do
						{
							v13 = v11;
							v11 = *(_QWORD*)(v11 + 8);
						} while (v13 == *(_QWORD*)(v11 + 16));
					}
				}
			}
			else
			{
				v11 = *(_QWORD*)(v9 + 24);
			}
		}
		if (*(_DWORD*)(v11 + 32) < v7)
		{
		LABEL_19:
			if (v9 == v6 || v7 < *(_DWORD*)(v9 + 32))
			{
				v14 = sub_14018B280(40i64, 0);
				if (v14 != (int*)-32i64)
					*((_QWORD*)v14 + 4) = v18;
				*(_QWORD*)(v9 + 16) = v14;
				v16 = *((_QWORD*)v2 + 1);
				if (v9 == v16)
				{
					*(_QWORD*)(v16 + 8) = v14;
					*(_QWORD*)(*((_QWORD*)v2 + 1) + 24i64) = v14;
				}
				else if (v9 == *(_QWORD*)(v16 + 16))
				{
					*(_QWORD*)(v16 + 16) = v14;
				}
			}
			else
			{
				v14 = sub_14018B280(40i64, 0);
				if (v14 != (int*)-32i64)
					*((_QWORD*)v14 + 4) = v18;
				*(_QWORD*)(v9 + 24) = v14;
				v15 = *((_QWORD*)v2 + 1);
				if (v9 == *(_QWORD*)(v15 + 24))
					*(_QWORD*)(v15 + 24) = v14;
			}
			*((_QWORD*)v14 + 1) = v9;
			*((_QWORD*)v14 + 2) = 0i64;
			*((_QWORD*)v14 + 3) = 0i64;
			sub_1400081C0((__int64)v14, (_QWORD*)(*((_QWORD*)v2 + 1) + 8i64));
			++* ((_QWORD*)v2 + 2);
		}
	}
	return 0i64;
}
// 1405F261F: conditional instruction was optimized away because rdx.8==0

