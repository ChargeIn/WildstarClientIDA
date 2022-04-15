#include "../winhttp.h"

//----- (0000000140882B40) ----------------------------------------------------
__int64 __fastcall sub_140882B40(__int64 a1, char* a2, __int64 a3, __int64 a4, __int64 a5, _QWORD* a6, char a7)
{
	unsigned int v11; // r15d
	__int64 v12; // rbx
	unsigned int v13; // r14d
	__int64 v14; // rcx
	_QWORD** v15; // r14
	__int64 v16; // rax
	_BYTE* v17; // rdi
	__int64 v18[5]; // [rsp+30h] [rbp-28h] BYREF
	char v19; // [rsp+68h] [rbp+10h] BYREF

	if (!a2 || *(float*)a4 < 0.0 || *(_BYTE*)(a4 + 13) > 0x64u)
		return 31i64;
	v11 = -1;
	if (a3)
	{
		v11 = *(_DWORD*)(a3 + 28);
		*(_BYTE*)(a3 + 26) = 1;
	}
	v12 = sub_1408819F0(dword_140C111C0, 40i64);
	if (!v12)
		return 2i64;
	v19 = a7;
	v13 = (*(__int64(__fastcall**)(__int64, char*, _QWORD, __int64, char*, __int64))(*(_QWORD*)qword_140C62938 + 16i64))(
		qword_140C62938,
		a2,
		0i64,
		a3,
		&v19,
		v12);
	if (v13 != 1)
	{
		sub_140881720(dword_140C111C0, v12);
		return v13;
	}
	v14 = *(unsigned int*)(v12 + 32);
	if ((unsigned int)v14 < (unsigned int)((qword_140C62948 - qword_140C62940) >> 3))
	{
		v15 = *(_QWORD***)(qword_140C62940 + 8 * v14);
		if (v15)
		{
			v18[0] = 0i64;
			v16 = ((__int64(__fastcall*)(_QWORD**, __int64, _QWORD, __int64, __int64, __int64*))(*v15)[7])(
				v15,
				v12,
				v11,
				a4,
				a5,
				v18);
			v17 = (_BYTE*)v16;
			if (v16)
			{
				if (v19)
				{
					*(_BYTE*)(v16 + 117) |= 0x10u;
					*(_QWORD*)(v16 + 40) = v12;
				}
				else if ((unsigned int)sub_1408857A0(v16, v12, a2, (_QWORD*)a3, 0) != 1)
				{
					v17[117] = v17[117] & 0xB7 | 8;
					(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v17 + 16i64))(v17);
					return 2i64;
				}
				*a6 = v18[0];
				return 1i64;
			}
			if (v19)
				(*(void(__fastcall**)(_QWORD*, __int64))(*v15[32] + 8i64))(v15[32], v12);
		}
	}
	sub_140881720(dword_140C111C0, v12);
	return 2i64;
}
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62938: using guessed type __int64 qword_140C62938;
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;
// 140882B40: using guessed type __int64 var_28[5];

