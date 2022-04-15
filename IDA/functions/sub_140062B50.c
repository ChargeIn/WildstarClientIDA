#include "../winhttp.h"

//----- (0000000140062B50) ----------------------------------------------------
__int64 __fastcall sub_140062B50(__int64 a1)
{
	int v2; // r15d
	unsigned __int64** v3; // r12
	unsigned __int64* v4; // rbp
	unsigned __int64 v5; // rdi
	unsigned int v6; // esi
	unsigned __int64 v7; // rdx
	unsigned __int64 v8; // r8
	int v9; // ecx
	__int64 v10; // r14
	_QWORD* v11; // rbx
	__int64 result; // rax

	v2 = 0;
	v3 = (unsigned __int64**)off_140A124D0;
	do
	{
		v4 = *v3;
		v5 = -1i64;
		do
			++v5;
		while (*((_BYTE*)v4 + v5));
		v6 = v5;
		v7 = v5;
		v8 = (v5 >> 5) + 1;
		if (v5 >= v8)
		{
			do
			{
				v9 = *((unsigned __int8*)v4 + v7 - 1);
				v7 -= v8;
				v6 ^= (v6 >> 2) + 32 * v6 + v9;
			} while (v7 >= v8);
		}
		v10 = *(_QWORD*)(a1 + 32);
		v11 = *(_QWORD**)(*(_QWORD*)v10 + 8 * ((int)v6 & (unsigned __int64)(*(_DWORD*)(v10 + 12) - 1)));
		if (v11)
		{
			while (v11[2] != v5 || (unsigned int)sub_1407E6AF0(v4, (__int64)(v11 + 4), v5))
			{
				v11 = (_QWORD*)*v11;
				if (!v11)
					goto LABEL_10;
			}
			if ((*((_BYTE*)v11 + 9) & 3 & (unsigned __int8)~*(_BYTE*)(v10 + 32)) != 0)
				*((_BYTE*)v11 + 9) ^= 3u;
		}
		else
		{
		LABEL_10:
			v11 = sub_140062560(a1, (int*)v4, v5, v6);
		}
		*((_BYTE*)v11 + 9) |= 0x20u;
		result = (unsigned int)++v2;
		++v3;
		*((_BYTE*)v11 + 10) = v2;
	} while (v2 < 21);
	return result;
}
// 140A124D0: using guessed type char *off_140A124D0[31];

