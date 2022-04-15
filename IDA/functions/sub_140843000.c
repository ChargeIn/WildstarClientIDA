#include "../winhttp.h"

//----- (0000000140843000) ----------------------------------------------------
__int64 __fastcall sub_140843000(__int64 a1, __int64 a2)
{
	__int64 v4; // r8
	__int32 v5; // edx
	__m128i v6; // xmm6
	__int64 v7; // rax
	__int64 v8; // rsi
	__m128i v10; // [rsp+20h] [rbp-28h] BYREF

	EnterCriticalSection(&stru_140C62878);
	v4 = 0i64;
	v5 = 0;
	if (*(_DWORD*)a2 <= 1u || (unsigned int)(*(_DWORD*)a2 - 6) <= 1)
		v5 = *(_DWORD*)(a2 + 32);
	if (*(_DWORD*)(a2 + 24) == 1)
		v4 = *(_QWORD*)(a2 + 40);
	v10.m128i_i32[0] = v5;
	v10.m128i_i64[1] = v4;
	v6 = v10;
	v7 = sub_140868CC0(a1 + 1776, &v10);
	v8 = v7;
	if (v7)
	{
		if ((*(_BYTE*)(v7 + 120) & 1) != 0)
		{
			v10 = v6;
			sub_140868DC0(a1 + 1776, &v10);
			LeaveCriticalSection(&stru_140C62878);
			return sub_14083F180(a1, v8, *(_QWORD*)(a2 + 8), *(_QWORD*)(a2 + 16));
		}
		else
		{
			LeaveCriticalSection(&stru_140C62878);
			sub_14083FEA0(a1, a2, 2u);
			return 2i64;
		}
	}
	else
	{
		LeaveCriticalSection(&stru_140C62878);
		sub_14083FEA0(a1, a2, 0x36u);
		return 54i64;
	}
}

