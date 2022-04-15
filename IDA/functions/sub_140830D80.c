#include "../winhttp.h"

//----- (0000000140830D80) ----------------------------------------------------
int __fastcall sub_140830D80(__int64 a1, __int64 a2)
{
	int* v3; // rbx
	_QWORD* v4; // r8
	int result; // eax
	__int64 v6; // rcx
	_QWORD* v7; // rdx
	int* v8; // r10
	__int64 v9; // r9
	__int64 v10; // rdi
	int v11; // ecx
	int v12; // ebx

	v3 = (int*)(a1 + 48);
	v4 = 0i64;
	result = 356059465 * a2;
	v6 = (unsigned int)a2 % 0xC1;
	v7 = *(_QWORD**)&v3[2 * v6 + 2];
	v8 = &v3[2 * v6];
	if (v7)
	{
		while (v7[1] != a2)
		{
			v4 = v7;
			v7 = (_QWORD*)*v7;
			if (!v7)
				return result;
		}
		v9 = *v7;
		v10 = v7[2];
		if (!*v7)
		{
			do
				v6 = (unsigned int)(v6 + 1);
			while ((unsigned int)v6 < 0xC1 && !*(_QWORD*)&v3[2 * v6 + 2]);
		}
		if (v4)
			*v4 = v9;
		else
			*((_QWORD*)v8 + 1) = v9;
		sub_140881720(*v3, (__int64)v7);
		--v3[388];
		result = *(_DWORD*)(v10 + 136) & 0x7FFFFFFF;
		v11 = result ^ (result ^ (result - 1)) & 0x3FFFFFFF;
		*(_DWORD*)(v10 + 136) = v11;
		if ((v11 & 0x3FFFFFFF) == 0)
		{
			v12 = dword_140C10F20;
			sub_14084BD30(v10);
			return sub_140881720(v12, v10);
		}
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

