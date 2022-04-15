#include "../winhttp.h"

//----- (000000014077F070) ----------------------------------------------------
void __fastcall sub_14077F070(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v3; // r14
	BOOL v4; // ebp
	__int64 v5; // rax
	unsigned int v6; // edx
	__int64 v7; // rsi
	__int64 v8[2]; // [rsp+40h] [rbp-38h] BYREF
	int v9; // [rsp+50h] [rbp-28h]
	__int64 v10; // [rsp+54h] [rbp-24h]
	int v11; // [rsp+5Ch] [rbp-1Ch]

	v1 = qword_140C65898;
	*(_DWORD*)(a1 + 240) = 1065353216;
	*(_OWORD*)(a1 + 208) = xmmword_140B7B240;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_OWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 148) = 0i64;
	*(_QWORD*)(a1 + 156) = 0i64;
	*(_QWORD*)(a1 + 164) = 0i64;
	*(_QWORD*)(a1 + 172) = 0i64;
	*(_QWORD*)(a1 + 180) = 0i64;
	*(_QWORD*)(a1 + 188) = 0i64;
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_DWORD*)(a1 + 264) = 0;
	v3 = *(_QWORD*)(v1 + 120);
	if (v3)
	{
		v4 = sub_14039E1A0(v1);
		v5 = sub_140200220(0x1A5u);
		if (v5)
			v6 = *(_DWORD*)(v5 + 4i64 * v4 + 4);
		else
			v6 = 0;
		v7 = sub_1403ACD90(qword_140C65B70, v6, *(_QWORD*)(v1 + 120));
		if (v7)
		{
			(*(void(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)a1 + 144i64))(a1, v7, a1 + 16);
			v8[0] = 0i64;
			v10 = 1i64;
			v9 = 0;
			v11 = 0;
			v8[1] = 0i64;
			sub_1403986F0((__int64)v8, **(_DWORD**)(v7 + 112), v3, v3, 0i64, 0i64, (__int64)v8, 1);
			(*(void(__fastcall**)(__int64, __int64, __int64*))(*(_QWORD*)a1 + 136i64))(a1, v7, v8);
			if (v8[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8[0] - 16) + 8i64))(v8[0] - 16);
		}
		else
		{
			*(_DWORD*)(a1 + 240) = 0;
			*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
		}
	}
	else
	{
		*(_DWORD*)(a1 + 240) = 0;
		*(_OWORD*)(a1 + 208) = xmmword_140B7AD40;
	}
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

