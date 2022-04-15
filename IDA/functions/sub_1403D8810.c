#include "../winhttp.h"

//----- (00000001403D8810) ----------------------------------------------------
__int64 __fastcall sub_1403D8810(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v5; // rdx
	int* v6; // rax
	int* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	__int64 result; // rax

	v3 = 0i64;
	if (a2)
		v5 = a2 + 8;
	else
		v5 = 0i64;
	if (a1)
		v3 = a1 + 8;
	sub_1403D8790(v3, v5);
	if (!*(_DWORD*)(a1 + 120))
	{
		v6 = sub_14018B280(432i64, 0);
		*(_DWORD*)(a1 + 120) = 1;
		*(_QWORD*)(a1 + 112) = v6;
	}
	v7 = *(int**)(a2 + 112);
	v8 = *(_QWORD*)(a1 + 112);
	if ((((unsigned __int8)v8 | (unsigned __int8)v7) & 0xF) != 0)
	{
		sub_1407DB590((int*)v8, v7, 0x1B0ui64);
		return a1;
	}
	else
	{
		v9 = 3i64;
		do
		{
			v10 = *(_OWORD*)v7;
			v8 += 128i64;
			v7 += 32;
			*(_OWORD*)(v8 - 128) = v10;
			*(_OWORD*)(v8 - 112) = *((_OWORD*)v7 - 7);
			*(_OWORD*)(v8 - 96) = *((_OWORD*)v7 - 6);
			*(_OWORD*)(v8 - 80) = *((_OWORD*)v7 - 5);
			*(_OWORD*)(v8 - 64) = *((_OWORD*)v7 - 4);
			*(_OWORD*)(v8 - 48) = *((_OWORD*)v7 - 3);
			*(_OWORD*)(v8 - 32) = *((_OWORD*)v7 - 2);
			*(_OWORD*)(v8 - 16) = *((_OWORD*)v7 - 1);
			--v9;
		} while (v9);
		result = a1;
		*(_OWORD*)v8 = *(_OWORD*)v7;
		*(_OWORD*)(v8 + 16) = *((_OWORD*)v7 + 1);
		*(_OWORD*)(v8 + 32) = *((_OWORD*)v7 + 2);
	}
	return result;
}

