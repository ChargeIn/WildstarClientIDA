#include "../winhttp.h"

//----- (00000001407DEB70) ----------------------------------------------------
__int64 __fastcall sub_1407DEB70(__int64 a1, _BYTE* a2, unsigned __int64 a3)
{
	__int64 v4; // rcx
	bool v5; // zf
	unsigned __int64 v7; // rax
	bool v8; // cc
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // rax
	unsigned int v11; // eax
	_QWORD* v12; // rcx
	bool v13; // cf
	unsigned __int64 i; // r8
	unsigned __int64 v15; // r8

	if (!a3)
		return a1;
	v4 = a1 - (_QWORD)a2;
	if (((unsigned __int8)a2 & 7) != 0)
	{
		while (1)
		{
			v5 = *a2 == 0;
			a2[v4] = *a2;
			if (v5)
				break;
			++a2;
			if (!--a3)
				return a1;
			if (((unsigned __int8)a2 & 7) == 0)
				goto LABEL_9;
		}
	LABEL_29:
		v12 = &a2[v4];
		if (a3 >= 0x10)
		{
			while (((unsigned __int8)v12 & 7) != 0)
			{
				v12 = (_QWORD*)((char*)v12 + 1);
				*(_BYTE*)v12 = 0;
				--a3;
			}
			v13 = a3 < 0x20;
			for (i = a3 - 32; !v13; i -= 32i64)
			{
				*v12 = 0i64;
				v12[1] = 0i64;
				v12[2] = 0i64;
				v12[3] = 0i64;
				v12 += 4;
				v13 = i < 0x20;
			}
			v15 = i + 32;
			while (1)
			{
				v13 = v15 < 8;
				v15 -= 8i64;
				if (v13)
					break;
				*v12++ = 0i64;
			}
			a3 = v15 + 8;
		}
		while (1)
		{
			v13 = a3-- == 0;
			if (v13)
				break;
			*(_BYTE*)v12 = 0;
			v12 = (_QWORD*)((char*)v12 + 1);
		}
		return a1;
	}
	else
	{
		do
		{
		LABEL_9:
			while (1)
			{
				v7 = *(_QWORD*)a2;
				v8 = a3 <= 8;
				a3 -= 8i64;
				if (v8 || (((v7 + 0x7EFEFEFEFEFEFEFFi64) ^ ~v7) & 0x8101010101010100ui64) != 0)
					break;
				*(_QWORD*)&a2[v4] = v7;
				a2 += 8;
			}
			a3 += 8i64;
			if (!a3)
				break;
			a2[v4] = v7;
			if (!(_BYTE)v7)
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			a2[v4] = BYTE1(v7);
			if (!BYTE1(v7))
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			v9 = v7 >> 16;
			a2[v4] = v9;
			if (!(_BYTE)v9)
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			a2[v4] = BYTE1(v9);
			if (!BYTE1(v9))
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			v10 = v9 >> 16;
			a2[v4] = v10;
			if (!(_BYTE)v10)
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			a2[v4] = BYTE1(v10);
			if (!BYTE1(v10))
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			v11 = WORD1(v10);
			a2[v4] = v11;
			if (!(_BYTE)v11)
				goto LABEL_29;
			++a2;
			if (!--a3)
				break;
			a2[v4] = BYTE1(v11);
			if (!BYTE1(v11))
				goto LABEL_29;
			++a2;
			--a3;
		} while (a3);
		return a1;
	}
}

