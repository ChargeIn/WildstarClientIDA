#include "../winhttp.h"

//----- (0000000140888580) ----------------------------------------------------
__int64 __fastcall sub_140888580(__int64 a1, __int64 a2, int a3)
{
	unsigned int v6; // esi
	_QWORD* v7; // rcx
	_QWORD* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rdi
	unsigned __int64 v11; // rax
	unsigned __int64 v12; // r8
	__int64 v13; // rdx
	_QWORD* v14; // rcx

	if (!*(_DWORD*)(a2 + 44))
		return 31i64;
	v6 = sub_140884CC0((_DWORD*)a1, a2, a3);
	if (v6 == 1)
	{
		v7 = (_QWORD*)sub_1408819F0(dword_140C111C0, 80i64 * *(unsigned int*)(a2 + 44));
		*(_QWORD*)(a1 + 304) = v7;
		if (!v7)
			return 2i64;
		v8 = &v7[10 * *(unsigned int*)(a2 + 44)];
		do
		{
			if (v7)
			{
				*v7 = 0i64;
				v7[7] = 0i64;
			}
			v9 = *(_QWORD*)(a1 + 296);
			if (v9)
			{
				*v7 = v9;
				*(_QWORD*)(a1 + 296) = v7;
			}
			else
			{
				*(_QWORD*)(a1 + 296) = v7;
				*v7 = 0i64;
			}
			v7 += 10;
		} while (v7 < v8);
		v10 = 40i64 * (unsigned int)(*(_DWORD*)(a2 + 44) + *(_DWORD*)(a1 + 244));
		v11 = sub_1408819F0(dword_140C111C0, v10);
		*(_QWORD*)(a1 + 288) = v11;
		if (!v11)
			return 2i64;
		v12 = v10 + v11;
		do
		{
			if (v11)
			{
				*(_DWORD*)(v11 + 20) &= ~4u;
				*(_DWORD*)(v11 + 20) |= 0xBu;
				*(_QWORD*)v11 = 0i64;
				*(_QWORD*)(v11 + 8) = 0i64;
				*(_DWORD*)(v11 + 16) = 0;
				*(_QWORD*)(v11 + 24) = 0i64;
				*(_QWORD*)(v11 + 32) = 0i64;
			}
			v13 = *(_QWORD*)(a1 + 280);
			v14 = (_QWORD*)v11;
			v11 += 40i64;
			if (v13)
			{
				*v14 = v13;
				*(_QWORD*)(a1 + 280) = v14;
			}
			else
			{
				*(_QWORD*)(a1 + 280) = v14;
				*v14 = 0i64;
			}
		} while (v11 < v12);
	}
	return v6;
}
// 140C111C0: using guessed type int dword_140C111C0;

