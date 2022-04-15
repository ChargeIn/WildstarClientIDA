#include "../winhttp.h"

//----- (0000000140037DB0) ----------------------------------------------------
__int64 __fastcall sub_140037DB0(__int64 a1, __int64 a2)
{
	char v2; // bl
	int v5; // eax
	int* v6; // rax
	int* v7; // rbp
	int** v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // rax
	__int64 v12[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v13; // [rsp+E0h] [rbp-28h]
	int* v14; // [rsp+F0h] [rbp-18h]
	__int64 v15; // [rsp+118h] [rbp+10h] BYREF

	v2 = 0;
	LODWORD(v15) = 0;
	if (*(_DWORD*)a2 == 21)
	{
		sub_1400B7090((__int64)v12, 613657);
		v12[0] = (__int64)off_140B69230;
		v14 = 0i64;
		v13 = 0i64;
		v6 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v13 = v6;
		*((_QWORD*)&v13 + 1) = v6;
		v14 = v6 + 4;
		if (v6)
			*(_WORD*)v6 = 0;
		v7 = sub_14018B280(96i64, 0);
		if (v7)
		{
			v2 = 1;
			v8 = (int**)sub_14018D540(&v15, (__int64)L"%-1.1f", (float)(*(float*)(a2 + 8) * 24.0));
			v9 = (_QWORD*)sub_1404DDB40((__int64)v7, *v8);
		}
		else
		{
			v9 = 0i64;
		}
		sub_1400B7480((__int64)v12, v9);
		if ((v2 & 1) != 0 && v15)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		v10 = sub_1400B7660(v12);
		sub_1400384B0(a1, *(_QWORD*)(v10 + 8));
		if ((_QWORD)v13)
			sub_14018B900(v13, 0);
		sub_1400B7390(v12);
	}
	else
	{
		v5 = sub_1400A7750(*(_DWORD*)a2);
		sub_1400383A0(a1, v5, *(_DWORD*)(a2 + 4));
	}
	return 0i64;
}
// 1409F5928: using guessed type wchar_t a11f[7];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

