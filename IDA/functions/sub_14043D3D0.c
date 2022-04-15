#include "../winhttp.h"

//----- (000000014043D3D0) ----------------------------------------------------
__int64 __fastcall sub_14043D3D0(__int64 a1, _DWORD* a2)
{
	int v5; // ecx
	__int64 v6; // rdi
	int v7; // eax
	int v8; // eax
	__int64 v9; // rcx
	__int64 v10; // rcx
	double v11; // xmm0_8
	int v12; // eax
	int v13; // eax
	unsigned int v14; // eax
	unsigned int v15; // eax
	unsigned int* v16; // rdi
	__int64 i; // rsi
	__int64 v18; // r8
	_QWORD* v19; // rax
	__int64 v20; // rcx

	if (!a2)
		return 1i64;
	if (a2[5]
		&& a2[5] != (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(qword_140C65898 + 72) + 8i64))(qword_140C65898 + 72))
	{
		return 2i64;
	}
	v5 = a2[6];
	if (v5 && !(unsigned int)sub_14043D7E0(v5))
		return 3i64;
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (!v6)
		return 4i64;
	v7 = a2[16];
	if (v7 && *(_DWORD*)(v6 + 220) != v7)
		return 5i64;
	v8 = a2[17];
	if (v8 && *(_DWORD*)(v6 + 216) != v8)
		return 6i64;
	if (a2[15])
	{
		v9 = *(_QWORD*)(v6 + 272);
		if (!v9 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) != a2[15])
			return 7i64;
	}
	if (a2[18])
	{
		v10 = *(_QWORD*)(v6 + 272);
		if (!v10)
			return 8i64;
		v11 = (*(double(__fastcall**)(__int64))(*(_QWORD*)v10 + 32i64))(v10);
		v12 = a2[19];
		if (v12)
		{
			if (*(float*)&v11 < (float)v12)
				return 8i64;
		}
		v13 = a2[20];
		if (v13)
		{
			if (*(float*)&v11 > (float)v13)
				return 8i64;
		}
	}
	v14 = a2[8];
	if (v14 && *(_DWORD*)(v6 + 56) > v14)
		return 10i64;
	v15 = a2[7];
	if (v15 && *(_DWORD*)(v6 + 56) < v15)
		return 9i64;
	v16 = a2 + 9;
	for (i = 0i64; i < 3; ++i)
	{
		if (!(unsigned int)sub_14043D870(*v16, v16[3]))
			return 11i64;
		++v16;
	}
	v18 = (unsigned int)a2[22];
	if ((_DWORD)v18
		&& !(*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
			+ 24i64))(
				qword_140C659A0,
				0i64,
				v18,
				0i64,
				0i64,
				0))
	{
		return 12i64;
	}
	if (!a2[2])
		return sub_14043D650(a1, a2[21], a2[4], 0);
	if (!a2[21])
		return sub_14043D650(a1, a2[21], a2[4], 0);
	v19 = *(_QWORD**)qword_140C7CD58;
	if (*(_QWORD*)qword_140C7CD58 == qword_140C7CD58)
		return sub_14043D650(a1, a2[21], a2[4], 0);
	while (1)
	{
		v20 = v19[2];
		if (*(_QWORD*)(v20 + 16))
		{
			if (*(_DWORD**)(v20 + 56) == a2)
				break;
		}
		v19 = (_QWORD*)*v19;
		if (v19 == (_QWORD*)qword_140C7CD58)
			return sub_14043D650(a1, a2[21], a2[4], 0);
	}
	return 13i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C7CD58: using guessed type __int64 qword_140C7CD58;

