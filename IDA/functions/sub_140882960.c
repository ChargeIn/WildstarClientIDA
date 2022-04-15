#include "../winhttp.h"

//----- (0000000140882960) ----------------------------------------------------
__int64 __fastcall sub_140882960(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, _QWORD* a6, char a7)
{
	unsigned int v10; // edi
	unsigned int v11; // eax
	__int64 v12; // rbx
	unsigned int v14; // r14d
	__int64 v15; // rcx
	_QWORD** v16; // r14
	__int64 v17; // rax
	_BYTE* v18; // rdi
	__int64 v19[5]; // [rsp+30h] [rbp-28h] BYREF
	char v20; // [rsp+78h] [rbp+20h] BYREF

	if (*(float*)a4 < 0.0 || *(_BYTE*)(a4 + 13) > 0x64u)
		return 31i64;
	v10 = -1;
	if (a3)
	{
		v11 = *(_DWORD*)(a3 + 28);
		*(_BYTE*)(a3 + 26) = 1;
		if (v11 == -1)
		{
			if (!*(_DWORD*)a3)
				v10 = a2;
		}
		else
		{
			v10 = v11;
		}
	}
	v12 = sub_1408819F0(dword_140C111C0, 40i64);
	if (!v12)
		return 2i64;
	v20 = a7;
	v14 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, char*, __int64))(*(_QWORD*)qword_140C62938 + 8i64))(
		qword_140C62938,
		a2,
		0i64,
		a3,
		&v20,
		v12);
	if (v14 != 1)
	{
		sub_140881720(dword_140C111C0, v12);
		return v14;
	}
	v15 = *(unsigned int*)(v12 + 32);
	if ((unsigned int)v15 < (unsigned int)((qword_140C62948 - qword_140C62940) >> 3))
	{
		v16 = *(_QWORD***)(qword_140C62940 + 8 * v15);
		if (v16)
		{
			v19[0] = 0i64;
			v17 = ((__int64(__fastcall*)(_QWORD**, __int64, _QWORD, __int64, __int64, __int64*))(*v16)[7])(
				v16,
				v12,
				v10,
				a4,
				a5,
				v19);
			v18 = (_BYTE*)v17;
			if (v17)
			{
				if (v20)
				{
					*(_BYTE*)(v17 + 117) |= 0x10u;
					*(_QWORD*)(v17 + 40) = v12;
				}
				else if ((unsigned int)sub_140885760(v17, v12, a2, (_QWORD*)a3, 0) != 1)
				{
					v18[117] = v18[117] & 0xB7 | 8;
					(*(void(__fastcall**)(_BYTE*))(*(_QWORD*)v18 + 16i64))(v18);
					return 2i64;
				}
				*a6 = v19[0];
				return 1i64;
			}
			if (v20)
				(*(void(__fastcall**)(_QWORD*, __int64))(*v16[32] + 8i64))(v16[32], v12);
		}
	}
	sub_140881720(dword_140C111C0, v12);
	return 2i64;
}
// 140C111C0: using guessed type int dword_140C111C0;
// 140C62938: using guessed type __int64 qword_140C62938;
// 140C62940: using guessed type __int64 qword_140C62940;
// 140C62948: using guessed type __int64 qword_140C62948;
// 140882960: using guessed type __int64 var_28[5];

