#include "../winhttp.h"

//----- (000000014076D660) ----------------------------------------------------
_QWORD* __fastcall sub_14076D660(_QWORD* a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // rcx
	int v6; // esi
	int v7; // eax
	int* v8; // rdx
	__int64 v9; // rax
	int* v10; // rax
	int* v11; // rbx
	int* v12; // rdx
	__int64 v13; // rax
	__int64 v14; // rax
	__int64(__fastcall * *v16)(); // [rsp+20h] [rbp-99h] BYREF
	char v17[8]; // [rsp+28h] [rbp-91h] BYREF
	_WORD* v18; // [rsp+30h] [rbp-89h]
	_WORD* v19; // [rsp+38h] [rbp-81h]
	__int128 v20; // [rsp+E0h] [rbp+27h]
	int* v21; // [rsp+F0h] [rbp+37h]
	struct _FILETIME SystemTimeAsFileTime; // [rsp+120h] [rbp+67h] BYREF

	sub_1400B6F30((__int64)&v16);
	v16 = off_140B69230;
	v20 = 0i64;
	v21 = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v20 = v4;
	*((_QWORD*)&v20 + 1) = v4;
	v21 = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	if (a2 + 36000000000i64 <= *(unsigned __int64*)&SystemTimeAsFileTime)
		goto LABEL_18;
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	v6 = 0x80000000;
	v7 = 0x7FFFFFFF;
	if ((unsigned int)((a2 - *(_QWORD*)&SystemTimeAsFileTime + 36000000000i64) / 0x2710ui64) != 0x7FFFFFFF)
		v7 = (a2 - *(_QWORD*)&SystemTimeAsFileTime + 36000000000i64) / 0x2710ui64;
	if (v7 != 0x80000000)
		v6 = v7;
	if (v6 <= 0)
	{
	LABEL_18:
		v12 = (int*)sub_14034BDD0(v5, 763319);
		if (v12)
		{
			v13 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			sub_14001C480((__int64)v17, v12, (int*)((char*)v12 + 2 * v13));
		}
		else if (v18 != v19)
		{
			*v18 = 0;
			v19 = v18;
		}
	}
	else
	{
		v8 = (int*)sub_14034BDD0(v5, 763318);
		if (v8)
		{
			v9 = 0i64;
			if (*(_WORD*)v8)
			{
				do
					++v9;
				while (*((_WORD*)v8 + v9));
			}
			sub_14001C480((__int64)v17, v8, (int*)((char*)v8 + 2 * v9));
		}
		else if (v18 != v19)
		{
			*v18 = 0;
			v19 = v18;
		}
		v10 = sub_14018B280(88i64, 0);
		v11 = v10;
		if (v10)
		{
			sub_1400B6390(v10);
			*(_QWORD*)v11 = off_140B69300;
			v11[2] = v6;
			*((float*)v11 + 3) = (float)v6;
			sub_1400B7480((__int64)&v16, v11);
		}
		else
		{
			sub_1400B7480((__int64)&v16, 0i64);
		}
	}
	v14 = sub_1400B7660(&v16);
	a1[1] = 0i64;
	a1[2] = 0i64;
	a1[3] = 0i64;
	sub_14001C1B0(a1, *(int**)(v14 + 8), *(_QWORD*)(v14 + 16));
	if ((_QWORD)v20)
		sub_14018B900(v20, 0);
	sub_1400B7390(&v16);
	return a1;
}
// 14076D72D: variable 'v5' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 14076D660: using guessed type char var_E8[8];

