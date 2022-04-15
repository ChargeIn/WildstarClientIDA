#include "../winhttp.h"

//----- (000000014077EA40) ----------------------------------------------------
void** __fastcall sub_14077EA40(__int64 a1)
{
	void** result; // rax
	__int64 v3; // rdi
	unsigned int v4; // eax
	void** v5; // rsi
	__int64 v6[2]; // [rsp+40h] [rbp-28h] BYREF
	int v7; // [rsp+50h] [rbp-18h]
	__int64 v8; // [rsp+54h] [rbp-14h]
	int v9; // [rsp+5Ch] [rbp-Ch]
	void* retaddr; // [rsp+68h] [rbp+0h] BYREF

	result = &retaddr;
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
	v3 = *(_QWORD*)(qword_140C65898 + 25744);
	if (v3)
	{
		v4 = sub_1403982A0(qword_140C65898, 1);
		*(_DWORD*)(a1 + 276) = v4;
		result = (void**)sub_1403ACD90(qword_140C65B70, v4, v3);
		v5 = result;
		if (result)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 56i64))(a1);
			v6[0] = 0i64;
			v8 = 1i64;
			v7 = 0;
			v9 = 0;
			v6[1] = 0i64;
			sub_1403986F0((__int64)v6, *(_DWORD*)v5[14], *(_QWORD*)(qword_140C65898 + 120), v3, 0i64, 0i64, (__int64)v6, 1);
			result = (void**)(*(__int64(__fastcall**)(__int64, void**, __int64*))(*(_QWORD*)a1 + 136i64))(a1, v5, v6);
			if (v6[0])
				return (void**)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v6[0] - 16) + 8i64))(v6[0] - 16);
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
	return result;
}
// 140B7AD40: using guessed type __int128 xmmword_140B7AD40;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

