#include "../winhttp.h"

//----- (000000014050D0B0) ----------------------------------------------------
__int64 __fastcall sub_14050D0B0(_QWORD* a1)
{
	int v2; // edi
	char* v3; // rax
	int* v4; // rbx
	__int64 v5; // rdi
	int* v6; // rax
	int* v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rax
	__int64 v11; // [rsp+30h] [rbp-108h] BYREF
	int* v12; // [rsp+38h] [rbp-100h]
	int* v13; // [rsp+40h] [rbp-F8h]
	__int64 v14[24]; // [rsp+50h] [rbp-E8h] BYREF
	__int128 v15; // [rsp+110h] [rbp-28h]
	int* v16; // [rsp+120h] [rbp-18h]

	v2 = sub_140056D60(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	sub_14018F2D0(&v11, v3);
	v4 = v12;
	if (v12 != v13)
	{
		v5 = sub_1404835C0(qword_140C65918, v2);
		if (v5)
		{
			sub_1400B7210((__int64)v14, (int*)L"$1n");
			v16 = 0i64;
			v15 = 0i64;
			v14[0] = (__int64)off_140B69230;
			v6 = sub_14018B280(16i64, 0);
			*(_QWORD*)&v15 = v6;
			*((_QWORD*)&v15 + 1) = v6;
			v16 = v6 + 4;
			if (v6)
				*(_WORD*)v6 = 0;
			v7 = sub_14018B280(96i64, 0);
			if (v7)
				v8 = (_QWORD*)sub_1404DDAF0((__int64)v7, *(_DWORD*)(v5 + 8));
			else
				v8 = 0i64;
			sub_1400B7480((__int64)v14, v8);
			v9 = sub_1400B7660(v14);
			sub_140003890((__int64*)qword_140C658A0, 0x17u, 0i64, v4, 0, *(int**)(v9 + 8));
			if ((_QWORD)v15)
				sub_14018B900(v15, 0);
			sub_1400B7390(v14);
		}
	}
	if (v4)
		sub_14018B900((__int64)v4, 0);
	return 0i64;
}
// 140B114A8: using guessed type wchar_t a1n_1[4];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C65918: using guessed type __int64 qword_140C65918;

