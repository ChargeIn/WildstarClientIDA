#include "../winhttp.h"

//----- (0000000140556B20) ----------------------------------------------------
__int64 __fastcall sub_140556B20(__int64 a1, int a2)
{
	__int64 result; // rax
	__int64 v4; // rsi
	int v5; // r14d
	__int64 v6; // rbx
	int* v7; // rax
	int* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rcx
	int* v11; // rax
	__int64 v12; // rax
	int v13; // eax
	__int64* v14; // r8
	unsigned int v15; // edx
	__int64* v16; // rdi
	__int64 v17; // rsi
	unsigned int v18; // eax
	__int64 v19; // [rsp+40h] [rbp-C0h] BYREF
	int v20; // [rsp+48h] [rbp-B8h]
	__int64(__fastcall * *v21)(); // [rsp+50h] [rbp-B0h] BYREF
	char v22[8]; // [rsp+58h] [rbp-A8h] BYREF
	_WORD* v23; // [rsp+60h] [rbp-A0h]
	_WORD* v24; // [rsp+68h] [rbp-98h]
	__int128 v25; // [rsp+110h] [rbp+10h]
	int* v26; // [rsp+120h] [rbp+20h]
	__int64 v27; // [rsp+150h] [rbp+50h] BYREF

	v27 = a1;
	result = sub_1405A8A40(a1, a2);
	v4 = result;
	if (!result)
		return result;
	v5 = sub_140552550(result, -1);
	if (v5)
	{
		sub_1400B6F30((__int64)&v21);
		v6 = 0i64;
		v26 = 0i64;
		v25 = 0i64;
		v21 = off_140B69230;
		v7 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v25 = v7;
		*((_QWORD*)&v25 + 1) = v7;
		v26 = v7 + 4;
		if (v7)
			*(_WORD*)v7 = 0;
		v8 = sub_14018B280(96i64, 0);
		if (v8)
			v9 = (_QWORD*)sub_1404DB7E0((__int64)v8, *(_QWORD*)(qword_140C65898 + 120));
		else
			v9 = 0i64;
		sub_1400B7480((__int64)&v21, v9);
		if (v5 == 3)
		{
			v11 = (int*)sub_14034BDD0(v10, 99852);
			if (v11)
			{
				if (*(_WORD*)v11)
				{
					do
						++v6;
					while (*((_WORD*)v11 + v6));
				}
				goto LABEL_23;
			}
		}
		else if (v5 == 15)
		{
			v11 = (int*)sub_14034BDD0(v10, 344071);
			if (v11)
			{
				if (*(_WORD*)v11)
				{
					do
						++v6;
					while (*((_WORD*)v11 + v6));
				}
				goto LABEL_23;
			}
		}
		else
		{
			v11 = (int*)sub_14034BDD0(v10, 99853);
			if (v11)
			{
				if (*(_WORD*)v11)
				{
					do
						++v6;
					while (*((_WORD*)v11 + v6));
				}
			LABEL_23:
				sub_14001C480((__int64)v22, v11, (int*)((char*)v11 + 2 * v6));
			LABEL_24:
				v12 = sub_1400B7660(&v21);
				Apollo_LUAEvent(
					*(_QWORD*)(qword_140C65898 + 29504),
					"GenericFloater",
					"US",
					*(unsigned int*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64),
					*(_QWORD*)(v12 + 8));
				if ((_QWORD)v25)
					sub_14018B900(v25, 0);
				sub_1400B7390(&v21);
				return 0i64;
			}
		}
		if (v23 != v24)
		{
			*v23 = 0;
			v24 = v23;
		}
		goto LABEL_24;
	}
	v13 = qword_140C7DC74;
	if (a2 == (_DWORD)qword_140C7DC74)
		v13 = 0;
	LODWORD(qword_140C7DC74) = v13;
	if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v4 + 8)) == 4)
	{
		LODWORD(v27) = a2;
		v14 = &v27;
		v15 = 869;
	}
	else
	{
		v14 = &v19;
		v15 = 859;
		v19 = qword_140C7DC6C;
		v20 = a2;
	}
	sub_1403F4900(qword_140C65898, v15, (__int64)v14);
	sub_140557FD0((__int64)&qword_140C7DC60, v4, 1);
	if (*(_QWORD*)(qword_140C63628 + 728) && *(_QWORD*)(qword_140C63628 + 744))
	{
		v16 = *(__int64**)(qword_140C63628 + 728);
		v17 = *v16;
		v18 = sub_1400518A0(qword_140C63628, 23, 1, 0);
		(*(void(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v17 + 16))(
			v16,
			v18,
			0i64,
			0i64,
			0i64,
			0i64,
			0i64);
	}
	return 1i64;
}
// 140556BFF: variable 'v10' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;
// 140C7DC6C: using guessed type __int64 qword_140C7DC6C;
// 140C7DC74: using guessed type __int64 qword_140C7DC74;
// 140556B20: using guessed type char var_E8[8];

