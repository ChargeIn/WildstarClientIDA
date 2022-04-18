#include "../winhttp.h"

//----- (000000014054EF90) ----------------------------------------------------
__int64 __fastcall sub_14054EF90(_DWORD* a1, _DWORD* a2)
{
	__int64 v3; // rcx
	bool v5; // zf
	int v6; // eax
	int* v7; // rdx
	int* v8; // rcx
	__int64 v9; // rax
	__int128 v10; // xmm0

	if (*a2 || a1[2] && !a2[1])
	{
		v5 = a1[6] == 0;
		a1[5] = dword_140C636A8 + *a2;
		if (v5 && *a2)
			a1[6] = 1;
		v6 = a1[2];
		if (!v6)
			v6 = 1;
		v7 = a2 + 2;
		v8 = a1 + 8;
		a1[3] = v6;
		a1[4] = 0;
		if ((((unsigned __int8)((_BYTE)a1 + 32) | (unsigned __int8)v7) & 0xF) != 0)
		{
			sub_1407DB590(v8, v7, 0x118ui64);
		}
		else
		{
			v9 = 2i64;
			do
			{
				v10 = *(_OWORD*)v7;
				v8 += 32;
				v7 += 32;
				*((_OWORD*)v8 - 8) = v10;
				*((_OWORD*)v8 - 7) = *((_OWORD*)v7 - 7);
				*((_OWORD*)v8 - 6) = *((_OWORD*)v7 - 6);
				*((_OWORD*)v8 - 5) = *((_OWORD*)v7 - 5);
				*((_OWORD*)v8 - 4) = *((_OWORD*)v7 - 4);
				*((_OWORD*)v8 - 3) = *((_OWORD*)v7 - 3);
				*((_OWORD*)v8 - 2) = *((_OWORD*)v7 - 2);
				*((_OWORD*)v8 - 1) = *((_OWORD*)v7 - 1);
				--v9;
			} while (v9);
			*(_OWORD*)v8 = *(_OWORD*)v7;
			*((_QWORD*)v8 + 2) = *((_QWORD*)v7 + 2);
		}
		if (qword_140C65898)
			Apollo_LUAEvent(*(_QWORD*)(qword_140C65898 + 29504), "PlayerCampStart", byte_1409D139F);
	}
	else
	{
		v3 = qword_140C65898;
		*((_QWORD*)a1 + 1) = 0i64;
		*((_QWORD*)a1 + 2) = 0i64;
		a1[6] = 0;
		if (v3)
		{
			Apollo_LUAEvent(*(_QWORD*)(v3 + 29504), "PlayerCampCancel", byte_1409D139B);
			return 0i64;
		}
	}
	return 0i64;
}
// 1409D139B: using guessed type _BYTE byte_1409D139B[4];
// 1409D139F: using guessed type _BYTE byte_1409D139F[10];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

