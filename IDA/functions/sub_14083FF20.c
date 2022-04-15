#include "../winhttp.h"

//----- (000000014083FF20) ----------------------------------------------------
__int64 __fastcall sub_14083FF20(__int64 a1, __int64 a2, __int32 a3, int a4, char a5)
{
	__m128i v9; // xmm6
	__int64 v10; // rax
	char v11; // al
	__int128 v12; // xmm1
	__int128 v13; // xmm0
	unsigned int v14; // eax
	unsigned int v15; // edi
	_QWORD* v17; // rbx
	__m128i v18; // [rsp+30h] [rbp-98h] BYREF
	__m128i v19; // [rsp+40h] [rbp-88h] BYREF
	__m128i v20; // [rsp+50h] [rbp-78h] BYREF
	__int128 v21[3]; // [rsp+60h] [rbp-68h] BYREF
	__int64 v22; // [rsp+90h] [rbp-38h]
	_QWORD* v23; // [rsp+D0h] [rbp+8h] BYREF

	v18.m128i_i32[0] = a3;
	v18.m128i_i64[1] = 0i64;
	EnterCriticalSection(&stru_140C62878);
	v9 = (__m128i)v18.m128i_u64[0];
	v10 = sub_140868CC0(a1 + 1776, &v18);
	if (v10)
	{
		_InterlockedIncrement((volatile signed __int32*)(v10 + 116));
		++* (_DWORD*)(v10 + 124);
		if (a4 == 2 || (*(_BYTE*)(v10 + 120) & 4) != 0)
		{
			LeaveCriticalSection(&stru_140C62878);
			return 1i64;
		}
		a4 = 3;
	}
	LeaveCriticalSection(&stru_140C62878);
	v11 = a5;
	*(_DWORD*)(a2 + 32) = a3;
	v12 = *(_OWORD*)(a2 + 16);
	v21[0] = *(_OWORD*)a2;
	v21[1] = v12;
	v13 = *(_OWORD*)(a2 + 32);
	*(_QWORD*)&v12 = *(_QWORD*)(a2 + 48);
	v23 = 0i64;
	v21[2] = v13;
	v22 = v12;
	v14 = sub_14083F1F0(a1, (__int64)v21, (__int64*)&v23, a4, v11);
	v15 = v14;
	if (v14 == 1)
	{
		v19 = v9;
		sub_140868E00(a1 + 1776, &v19, v23);
	}
	else if (v14 != 69)
	{
		v17 = v23;
		if (v23)
		{
			v20 = v9;
			sub_140868DC0(a1 + 1776, &v20);
			sub_140842230((__int64)v17, 0);
		}
	}
	return v15;
}

