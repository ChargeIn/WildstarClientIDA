#include "../winhttp.h"

//----- (0000000140569630) ----------------------------------------------------
__int64 __fastcall sub_140569630(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rdx
	__int64 v4; // rax
	int* v5; // rdx
	__int64 v6; // rcx
	__int64 result; // rax
	__int128 v8; // xmm0

	v2 = 0i64;
	v3 = a1 + 8;
	if (!a1)
		v3 = 0i64;
	v4 = *(_QWORD*)(a1 + 128);
	if (v4)
		v2 = v4 + 8;
	sub_1403D8790(v2, v3);
	v5 = *(int**)(a1 + 112);
	v6 = *(_QWORD*)(*(_QWORD*)(a1 + 128) + 112i64);
	if ((((unsigned __int8)v6 | (unsigned __int8)v5) & 0xF) != 0)
		return (__int64)sub_1407DB590((int*)v6, v5, 0x1B0ui64);
	result = 3i64;
	do
	{
		v8 = *(_OWORD*)v5;
		v6 += 128i64;
		v5 += 32;
		*(_OWORD*)(v6 - 128) = v8;
		*(_OWORD*)(v6 - 112) = *((_OWORD*)v5 - 7);
		*(_OWORD*)(v6 - 96) = *((_OWORD*)v5 - 6);
		*(_OWORD*)(v6 - 80) = *((_OWORD*)v5 - 5);
		*(_OWORD*)(v6 - 64) = *((_OWORD*)v5 - 4);
		*(_OWORD*)(v6 - 48) = *((_OWORD*)v5 - 3);
		*(_OWORD*)(v6 - 32) = *((_OWORD*)v5 - 2);
		*(_OWORD*)(v6 - 16) = *((_OWORD*)v5 - 1);
		--result;
	} while (result);
	*(_OWORD*)v6 = *(_OWORD*)v5;
	*(_OWORD*)(v6 + 16) = *((_OWORD*)v5 + 1);
	*(_OWORD*)(v6 + 32) = *((_OWORD*)v5 + 2);
	return result;
}

