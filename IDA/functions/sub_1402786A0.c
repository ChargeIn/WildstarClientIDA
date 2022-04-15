#include "../winhttp.h"

//----- (00000001402786A0) ----------------------------------------------------
__int64 __fastcall sub_1402786A0(__int64 a1)
{
	__int64* v2; // rax
	int* v3; // rax
	__int64 v4; // rax
	__int64 v5; // rcx
	_QWORD* v6; // rdi
	__int64 v7; // rsi
	void(__fastcall * **v8)(_QWORD); // rcx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD); // rcx
	__int64 v11; // rcx
	_QWORD* v12; // rdi
	__int64 v13; // rsi
	void(__fastcall * **v14)(_QWORD); // rcx
	__int64 v15; // rcx
	void(__fastcall * **v16)(_QWORD); // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v21; // [rsp+40h] [rbp+8h] BYREF
	__int64 v22; // [rsp+48h] [rbp+10h] BYREF
	__int64 v23; // [rsp+50h] [rbp+18h] BYREF

	v21 = 0x141DE2B70i64;
	sub_1401A3130(14, 2, &v21);
	v2 = (__int64*)sub_14018B280(184i64, 0);
	if (v2)
		sub_1402ACCF0(v2, a1);
	v3 = sub_14018B280(56i64, 0);
	if (v3)
		sub_1402ADBF0((__int64)v3, a1);
	v4 = *(_QWORD*)(a1 + 8480);
	v5 = *(_QWORD*)(a1 + 6352);
	*(_DWORD*)(a1 + 8208) = -1;
	v22 = v4;
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v5 + 56i64))(v5, 13i64, 1i64, &v22);
	v6 = (_QWORD*)(a1 + 7928);
	v7 = 4i64;
	do
	{
		v8 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
		if ((void(__fastcall***)(_QWORD)) * (v6 - 25) != v8)
		{
			if (v8)
				(**v8)(v8);
			v9 = *(v6 - 25);
			if (v9)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
			*(v6 - 25) = *(_QWORD*)(a1 + 7888);
		}
		v10 = *(void(__fastcall****)(_QWORD))(a1 + 8088);
		if ((void(__fastcall***)(_QWORD)) * v6 != v10)
		{
			if (v10)
				(**v10)(v10);
			if (*v6)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v6 + 8i64))(*v6);
			*v6 = *(_QWORD*)(a1 + 8088);
		}
		++v6;
		--v7;
	} while (v7);
	v11 = *(_QWORD*)(a1 + 6352);
	v23 = *(_QWORD*)(a1 + 8496);
	(*(void(__fastcall**)(__int64, __int64, __int64, __int64*))(*(_QWORD*)v11 + 128i64))(v11, 13i64, 1i64, &v23);
	v12 = (_QWORD*)(a1 + 7960);
	v13 = 16i64;
	do
	{
		v14 = *(void(__fastcall****)(_QWORD))(a1 + 7888);
		if ((void(__fastcall***)(_QWORD)) * (v12 - 25) != v14)
		{
			if (v14)
				(**v14)(v14);
			v15 = *(v12 - 25);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
			*(v12 - 25) = *(_QWORD*)(a1 + 7888);
		}
		v16 = *(void(__fastcall****)(_QWORD))(a1 + 8088);
		if ((void(__fastcall***)(_QWORD)) * v12 != v16)
		{
			if (v16)
				(**v16)(v16);
			if (*v12)
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)*v12 + 8i64))(*v12);
			*v12 = *(_QWORD*)(a1 + 8088);
		}
		++v12;
		--v13;
	} while (v13);
	HIDWORD(v21) = 4;
	*(_QWORD*)(a1 + 7896) = qword_140C79898;
	LODWORD(v21) = 0;
	*(_QWORD*)(a1 + 7904) = qword_140C79898;
	v17 = v21;
	LODWORD(v21) = 0;
	*(_QWORD*)(a1 + 7912) = v17;
	HIDWORD(v21) = 16;
	v18 = v21;
	LODWORD(v21) = 0;
	*(_QWORD*)(a1 + 7920) = v18;
	HIDWORD(v21) = 4;
	v19 = v21;
	v21 = 0x1000000000i64;
	*(_QWORD*)(a1 + 8096) = v19;
	*(_QWORD*)(a1 + 8104) = v21;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 288i64))(a1);
	*(_DWORD*)(a1 + 8632) = 5;
	return 0i64;
}
// 140C79898: using guessed type __int64 qword_140C79898;

