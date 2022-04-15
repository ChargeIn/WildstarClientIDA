#include "../winhttp.h"

//----- (00000001402CB5A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1402CB5A0(__int64 a1)
{
	unsigned int v1; // ebp
	unsigned __int64 v3; // rsi
	__int64 i; // r14
	__int64 v5; // rdi
	unsigned int j; // esi
	__int64 v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 result; // rax
	__int64 v10; // r8
	__int64 v11; // rcx
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v1 = 0;
	v3 = 0i64;
	for (i = 0i64; ; i += 416i64)
	{
		v5 = *(_QWORD*)(a1 + 24);
		v12[0] = -1;
		if (*(_DWORD*)(v5 + 24) != 3)
			sub_1402C9AE0(v5, (__int64)v12, 1);
		if (v3 >= *(unsigned int*)(*(_QWORD*)(v5 + 64) + 32i64))
			break;
		sub_1402D02D0(i + *(_QWORD*)(a1 + 248), (__int128*)(a1 + 80));
		++v3;
	}
	for (j = 0; ; ++j)
	{
		v7 = *(_QWORD*)(a1 + 24);
		v12[0] = -1;
		if (*(_DWORD*)(v7 + 24) != 3)
			sub_1402C9AE0(v7, (__int64)v12, 3);
		if (j >= *(_DWORD*)(*(_QWORD*)(v7 + 64) + 128i64))
			break;
		sub_1402D26C0(*(_QWORD*)(a1 + 264) + 384i64 * j);
	}
	v8 = *(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 288);
	result = (unsigned __int64)(v8 + ((unsigned __int128)(v8 * (__int128)(__int64)0xB21642C8590B2165ui64) >> 64)) >> 63;
	if (v8 / 368)
	{
		v10 = 0i64;
		do
		{
			sub_1402D6030(*(_QWORD*)(a1 + 288) + 368 * v10, a1 + 80);
			++v1;
			v11 = *(_QWORD*)(a1 + 296) - *(_QWORD*)(a1 + 288);
			v10 = v1;
			result = (unsigned __int64)(v11 + ((unsigned __int128)(v11 * (__int128)(__int64)0xB21642C8590B2165ui64) >> 64)) >> 63;
		} while (v1 < (unsigned __int64)(v11 / 368));
	}
	return result;
}

