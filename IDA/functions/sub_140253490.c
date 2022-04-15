#include "../winhttp.h"

//----- (0000000140253490) ----------------------------------------------------
__int64 __fastcall sub_140253490(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int* a5)
{
	unsigned __int64 v5; // rbx
	int* v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0
	_DWORD* v11; // rcx
	__int64 result; // rax

	v5 = 0i64;
	*(_QWORD*)a1 = off_140B60750;
	*(_QWORD*)(a1 + 1112) = 0i64;
	*(_QWORD*)(a1 + 1104) = 0i64;
	*(_QWORD*)(a1 + 2056) = 0i64;
	*(_QWORD*)(a1 + 2064) = 0i64;
	*(_QWORD*)(a1 + 2072) = 0i64;
	*(_QWORD*)(a1 + 2080) = 0i64;
	*(_QWORD*)(a1 + 2088) = 0i64;
	*(_QWORD*)(a1 + 2096) = 0i64;
	*(_QWORD*)(a1 + 2104) = 0i64;
	*(_QWORD*)(a1 + 2112) = 0i64;
	*(_QWORD*)(a1 + 2120) = 0i64;
	*(_QWORD*)(a1 + 2128) = 0i64;
	*(_QWORD*)(a1 + 2136) = 0i64;
	*(_QWORD*)(a1 + 2144) = 0i64;
	*(_QWORD*)(a1 + 2152) = 0i64;
	*(_QWORD*)(a1 + 2160) = 0i64;
	*(_QWORD*)(a1 + 2168) = 0i64;
	*(_QWORD*)(a1 + 2176) = 0i64;
	*(_QWORD*)(a1 + 2184) = 0i64;
	*(_QWORD*)(a1 + 2192) = 0i64;
	*(_QWORD*)(a1 + 2200) = 0i64;
	*(_QWORD*)(a1 + 2208) = 0i64;
	*(_QWORD*)(a1 + 2216) = 0i64;
	*(_QWORD*)(a1 + 2224) = 0i64;
	*(_QWORD*)(a1 + 2232) = 0i64;
	*(_QWORD*)(a1 + 2240) = 0i64;
	*(_QWORD*)(a1 + 2248) = 0i64;
	*(_QWORD*)(a1 + 2256) = 0i64;
	*(_QWORD*)(a1 + 2264) = 0i64;
	*(_QWORD*)(a1 + 2272) = 0i64;
	*(_QWORD*)(a1 + 2280) = 0i64;
	*(_QWORD*)(a1 + 2288) = 0i64;
	*(_QWORD*)(a1 + 2296) = 0i64;
	*(_QWORD*)(a1 + 2448) = 0i64;
	*(_QWORD*)(a1 + 2440) = 0i64;
	*(_QWORD*)(a1 + 2464) = 0i64;
	*(_QWORD*)(a1 + 2456) = 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 24) = a3;
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 32) = 0;
	sub_1407E4830((int*)(a1 + 608), 0i64, 0x190ui64);
	sub_1407E4830((int*)(a1 + 1648), 0i64, 0x80ui64);
	sub_1407E4830((int*)(a1 + 1776), 0i64, 0xA0ui64);
	sub_1407E4830((int*)(a1 + 1936), 0i64, 0x78ui64);
	v7 = a5;
	if (a5)
	{
		v8 = a1 + 1120;
		if ((((unsigned __int8)(a1 + 96) | (unsigned __int8)a5) & 0xF) != 0)
		{
			sub_1407DB590((int*)v8, a5, 0x1E0ui64);
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
			*(_OWORD*)v8 = *(_OWORD*)v7;
			*(_OWORD*)(v8 + 16) = *((_OWORD*)v7 + 1);
			*(_OWORD*)(v8 + 32) = *((_OWORD*)v7 + 2);
			*(_OWORD*)(v8 + 48) = *((_OWORD*)v7 + 3);
			*(_OWORD*)(v8 + 64) = *((_OWORD*)v7 + 4);
			*(_OWORD*)(v8 + 80) = *((_OWORD*)v7 + 5);
		}
	}
	else
	{
		v11 = (_DWORD*)(a1 + 1128);
		do
		{
			++v5;
			*(v11 - 1) = 1065353216;
			*v11 = 1109393408;
			v11[1] = 1065353216;
			v11[2] = 1125515264;
			*(v11 - 2) = v5;
			v11[3] = 1065353216;
			v11[4] = 1120403456;
			v11[5] = 1065353216;
			v11[6] = 1120403456;
			v11[7] = 1;
			v11 += 10;
		} while (v5 < 0xC);
	}
	result = a1;
	*(_DWORD*)(a1 + 2436) = 3;
	return result;
}
// 140B60750: using guessed type __int64 (__fastcall *off_140B60750[5])();

