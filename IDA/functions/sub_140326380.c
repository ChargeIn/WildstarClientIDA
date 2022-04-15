#include "../winhttp.h"

//----- (0000000140326380) ----------------------------------------------------
void __fastcall sub_140326380(__int64 a1)
{
	__int64* v2; // rcx
	__int64 v3; // rsi
	__int64 v4; // rax
	__int64 v5; // rdi
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // r9
	__int64 v9; // r10
	__int64 i; // r11
	__int64 j; // r10
	__int64 v12; // rax

	v2 = *(__int64**)(a1 + 56);
	if (v2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 64i64);
		v4 = *v2;
		v5 = *(_QWORD*)(v3 + 120);
		if (*(_BYTE*)(v3 + 109) == 1)
		{
			v9 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, __int64))(v4 + 56))(v2, 0i64, 0i64, 2i64);
			if (!v9)
				return;
			for (i = 0i64; (unsigned int)i < *(_DWORD*)(a1 + 20); v9 += 2i64 * *(unsigned int*)(v7 + 8))
			{
				v8 = 0i64;
				v7 = *(_QWORD*)(v3 + 136) + 112i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 4 * i);
				if (*(_DWORD*)(v7 + 8))
				{
					do
					{
						v6 = *(unsigned __int16*)(v5 + 2i64 * (unsigned int)(v8 + *(_DWORD*)v7));
						LOWORD(v6) = *(_WORD*)(v7 + 4) + v6;
						*(_WORD*)(v9 + 2 * v8) = v6;
						v8 = (unsigned int)(v8 + 1);
					} while ((unsigned int)v8 < *(_DWORD*)(v7 + 8));
				}
				i = (unsigned int)(i + 1);
			}
		}
		else
		{
			v8 = (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, __int64))(v4 + 56))(v2, 0i64, 0i64, 2i64);
			if (!v8)
				return;
			for (j = 0i64; (unsigned int)j < *(_DWORD*)(a1 + 20); v8 += 4i64 * *(unsigned int*)(v7 + 8))
			{
				v12 = 0i64;
				v7 = *(_QWORD*)(v3 + 136) + 112i64 * *(unsigned int*)(*(_QWORD*)(a1 + 32) + 4 * j);
				if (*(_DWORD*)(v7 + 8))
				{
					do
					{
						v6 = (unsigned int)(*(_DWORD*)(v7 + 4) + *(_DWORD*)(v5 + 4i64 * (unsigned int)(v12 + *(_DWORD*)v7)));
						*(_DWORD*)(v8 + 4 * v12) = v6;
						v12 = (unsigned int)(v12 + 1);
					} while ((unsigned int)v12 < *(_DWORD*)(v7 + 8));
				}
				j = (unsigned int)(j + 1);
			}
		}
		(*(void(__fastcall**)(_QWORD, __int64, __int64, __int64))(**(_QWORD**)(a1 + 56) + 64i64))(
			*(_QWORD*)(a1 + 56),
			v6,
			v7,
			v8);
	}
}
// 1403264A0: variable 'v6' is possibly undefined
// 1403264A0: variable 'v7' is possibly undefined
// 1403264A0: variable 'v8' is possibly undefined

