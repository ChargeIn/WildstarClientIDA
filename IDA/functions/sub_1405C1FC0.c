#include "../winhttp.h"

//----- (00000001405C1FC0) ----------------------------------------------------
__int64 __fastcall sub_1405C1FC0(_DWORD* a1, int* a2)
{
	int v3; // ecx
	int v5; // eax
	__int64 v6; // rcx
	__int16* v7; // rax
	int v8; // eax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rsi
	int v12; // ebx
	__int64 v13; // rcx
	int v14; // eax
	int v15; // edx
	int* v16; // rdx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64(__fastcall * *v20)(); // [rsp+30h] [rbp-E8h] BYREF
	char v21[8]; // [rsp+38h] [rbp-E0h] BYREF
	_WORD* v22; // [rsp+40h] [rbp-D8h]
	_WORD* v23; // [rsp+48h] [rbp-D0h]
	__int128 v24; // [rsp+F0h] [rbp-28h]
	int* v25; // [rsp+100h] [rbp-18h]

	v3 = *a2;
	if ((unsigned int)(*a2 - 30) <= 1)
	{
		v8 = dword_140C636A8;
		a1[8] = v3;
		a1[9] = v8;
		a1[10] = a2[1];
		sub_1400B6F30((__int64)&v20);
		v24 = 0i64;
		v20 = off_140B69230;
		v25 = 0i64;
		v9 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v24 = v9;
		*((_QWORD*)&v24 + 1) = v9;
		v25 = v9 + 4;
		if (v9)
			*(_WORD*)v9 = 0;
		v10 = sub_14018B280(88i64, 0);
		v11 = v10;
		if (v10)
		{
			v12 = a2[1];
			sub_1400B6390(v10);
			v11[2] = v12;
			*(_QWORD*)v11 = off_140B69300;
			*((float*)v11 + 3) = (float)v12;
		}
		else
		{
			v11 = 0i64;
		}
		sub_1400B7480((__int64)&v20, v11);
		v14 = a1[1];
		if (v14 && (unsigned int)(v14 - 3) > 4)
			v15 = (*a2 != 30) + 496195;
		else
			v15 = (*a2 != 30) + 441679;
		v16 = (int*)sub_14034BDD0(v13, v15);
		if (v16)
		{
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			sub_14001C480((__int64)v21, v16, (int*)((char*)v16 + 2 * v17));
		}
		else if (v22 != v23)
		{
			*v22 = 0;
			v23 = v22;
		}
		v18 = sub_1400B7660(&v20);
		sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, *(int**)(v18 + 8), 0, 0i64);
		if ((_QWORD)v24)
			sub_14018B900(v24, 0);
		sub_1400B7390(&v20);
	}
	else
	{
		v5 = sub_1405C42C0(v3);
		if (v5)
		{
			v7 = sub_14034BDD0(v6, v5);
			sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, (int*)v7, 0, 0i64);
		}
	}
	return 0i64;
}
// 1405C1FF2: variable 'v6' is possibly undefined
// 1405C2120: variable 'v13' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C636A8: using guessed type int dword_140C636A8;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 1405C1FC0: using guessed type char var_E0[8];

