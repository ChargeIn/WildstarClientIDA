#include "../winhttp.h"

//----- (0000000140039380) ----------------------------------------------------
__int64 __fastcall sub_140039380(__int64 a1)
{
	__int64 v2; // rcx
	char v3; // si
	__int64 v4; // rdx
	int* v5; // rdi
	u_short v6; // bp
	_QWORD* v7; // rax
	__int64 v8; // r14
	int* v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v13; // rax
	__int64 v15; // [rsp+28h] [rbp-130h] BYREF
	__int64 v16; // [rsp+30h] [rbp-128h]
	__int64 v17[2]; // [rsp+50h] [rbp-108h] BYREF
	char v18; // [rsp+60h] [rbp-F8h]
	int* v19; // [rsp+70h] [rbp-E8h]
	int* v20; // [rsp+78h] [rbp-E0h]
	int* v21; // [rsp+80h] [rbp-D8h]
	__int128 v22; // [rsp+110h] [rbp-48h]
	int* v23; // [rsp+120h] [rbp-38h]

	v2 = *(_QWORD*)(a1 + 232);
	v3 = 0;
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 232) = 0i64;
	}
	v5 = sub_14018B280(160i64, 0);
	if (v5)
	{
		v6 = word_140C3ADBC;
		v3 = 1;
		v7 = sub_14018F0E0(&v15, *(unsigned __int16**)(qword_140C635F0 + 5880));
		v18 = 0;
		v8 = (__int64)v7;
		v9 = sub_14018B280(8i64, 0);
		v19 = v9;
		v20 = v9;
		v21 = v9 + 2;
		if (v9)
			*(_BYTE*)v9 = 0;
		sub_140334F90((__int64)v17, v8, v6);
		if (v16)
			sub_14018B900(v16, 0);
		v10 = sub_140029F00((__int64)v5, 0, (__int64)v17);
	}
	else
	{
		v10 = 0i64;
	}
	v11 = *(_QWORD*)(a1 + 232);
	if (v11 != v10)
	{
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 232) = v10;
	}
	if ((v3 & 1) != 0 && v19)
		sub_14018B900((__int64)v19, 0);
	if (*(_QWORD*)(a1 + 72))
	{
		sub_1400B7090((__int64)v17, 571021);
		v17[0] = (__int64)off_140B69230;
		v23 = 0i64;
		v22 = 0i64;
		v12 = sub_14018B280(16i64, 0);
		*(_QWORD*)&v22 = v12;
		*((_QWORD*)&v22 + 1) = v12;
		v23 = v12 + 4;
		if (v12)
			*(_WORD*)v12 = 0;
		v13 = sub_1400B7660(v17);
		Apollo_LUAEvent(*(_QWORD*)(a1 + 72), "NetworkStatus", byte_1409D0F64, *(_QWORD*)(v13 + 8), 0);
		if ((_QWORD)v22)
			sub_14018B900(v22, 0);
		sub_1400B7390(v17);
	}
	return sub_14002A050(*(_QWORD*)(a1 + 232), v4, *(_QWORD*)(qword_140C635F0 + 5680));
}
// 140039598: variable 'v4' is possibly undefined
// 1409D0F64: using guessed type _BYTE byte_1409D0F64[3];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3ADBC: using guessed type __int16 word_140C3ADBC;
// 140C635F0: using guessed type __int64 qword_140C635F0;

