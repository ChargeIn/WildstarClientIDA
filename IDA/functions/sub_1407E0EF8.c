#include "../winhttp.h"

//----- (00000001407E0EF8) ----------------------------------------------------
unsigned __int64 __fastcall sub_1407E0EF8(int* a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
	int* v6; // r15
	unsigned __int64 v8; // rdi
	unsigned __int64 v9; // rbp
	unsigned int v10; // r12d
	unsigned __int64 v11; // r13
	unsigned int v12; // ebx
	int v13; // eax
	unsigned int v14; // eax
	__int64 v15; // rcx
	unsigned __int64 v16; // [rsp+60h] [rbp+18h]

	v16 = a3;
	v6 = a1;
	if (!a2 || !a3)
		return 0i64;
	if (!a4 || !a1 || a3 > 0xFFFFFFFFFFFFFFFFui64 / a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0i64;
	}
	v8 = a3 * a2;
	v9 = a3 * a2;
	if ((*(_DWORD*)(a4 + 24) & 0x10C) != 0)
		v10 = *(_DWORD*)(a4 + 36);
	else
		v10 = 4096;
	if (v8)
	{
		do
		{
			if ((*(_DWORD*)(a4 + 24) & 0x108) != 0 && (v11 = *(unsigned int*)(a4 + 8), (_DWORD)v11))
			{
				if ((v11 & 0x80000000) != 0i64)
					goto LABEL_28;
				if (v9 < v11)
					LODWORD(v11) = v9;
				sub_1407DB590(*(int**)a4, v6, (unsigned int)v11);
				*(_DWORD*)(a4 + 8) -= v11;
				*(_QWORD*)a4 += (unsigned int)v11;
				v9 -= (unsigned int)v11;
				v6 = (int*)((char*)v6 + (unsigned int)v11);
			}
			else if (v9 < v10)
			{
				if ((unsigned int)sub_1407E88EC(*(char*)v6, a4) == -1)
					return (v8 - v9) / a2;
				v6 = (int*)((char*)v6 + 1);
				--v9;
				v10 = 1;
				if (*(int*)(a4 + 36) > 0)
					v10 = *(_DWORD*)(a4 + 36);
			}
			else
			{
				if ((*(_DWORD*)(a4 + 24) & 0x108) != 0 && (unsigned int)sub_1407E1164((_DWORD*)a4))
					return (v8 - v9) / a2;
				if (v10)
					v12 = v9 - v9 % v10;
				else
					v12 = v9;
				v13 = sub_1407EA35C(a4);
				v14 = sub_1407EEF4C(v13, v6, v12);
				if (v14 == -1)
					goto LABEL_28;
				v15 = v14;
				if (v14 > v12)
					v15 = v12;
				v9 -= v15;
				v6 = (int*)((char*)v6 + v15);
				if (v14 < v12)
				{
				LABEL_28:
					*(_DWORD*)(a4 + 24) |= 0x20u;
					return (v8 - v9) / a2;
				}
			}
		} while (v9);
		return v16;
	}
	return a3;
}

