#include "../winhttp.h"

//----- (00000001402D35B0) ----------------------------------------------------
void __fastcall sub_1402D35B0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rax
	__int64 v4; // rcx
	unsigned int v5; // r9d
	int* v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	int v9; // eax
	_QWORD** i; // rbx

	v2 = a1[12];
	if (v2)
	{
		v3 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD*)v2 + 56i64))(v2, 0i64, 0i64, 2i64);
		if (v3)
		{
			v4 = a1[2];
			v5 = 0;
			v6 = *(int**)(v4 + 64);
			v7 = *(_QWORD*)(v4 + 80);
			if (*(_DWORD*)(v4 + 56))
			{
				v8 = v3 + 16;
				do
				{
					v9 = *v6;
					++v5;
					v6 += 3;
					*(_DWORD*)(v8 - 16) = v9;
					v7 += 20i64;
					*(_DWORD*)(v8 - 12) = *(v6 - 2);
					v8 += 32i64;
					*(_DWORD*)(v8 - 40) = *(v6 - 1);
					*(_DWORD*)(v8 - 36) = *(_DWORD*)(v7 - 20);
					*(_DWORD*)(v8 - 32) = *(_DWORD*)(v7 - 16);
					*(_DWORD*)(v8 - 28) = *(_DWORD*)(v7 - 12);
					*(_DWORD*)(v8 - 24) = *(_DWORD*)(v7 - 8);
					*(_DWORD*)(v8 - 20) = *(_DWORD*)(v7 - 4);
				} while (v5 < *(_DWORD*)(a1[2] + 56i64));
			}
			(*(void(__fastcall**)(_QWORD, __int64, int*))(*(_QWORD*)a1[12] + 64i64))(a1[12], v7, v6);
		}
	}
	for (i = (_QWORD**)a1[14]; i != (_QWORD**)a1[15]; ++i)
	{
		if (*i)
			sub_1402D9440(*i);
	}
}

