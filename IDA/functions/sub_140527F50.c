#include "../winhttp.h"

//----- (0000000140527F50) ----------------------------------------------------
__int64 __fastcall sub_140527F50(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	__int64 v3; // r13
	unsigned __int64 v5; // rbp
	__int64 v6; // r15
	__int64 v7; // rbx
	__int64 v8; // rbx
	int* v9; // rax
	int* v10; // r14
	int* v11; // rdx
	__int64 v12; // rcx
	_DWORD* v13; // rax
	_WORD* v14; // rax
	__int64 v15; // rbx
	int v17[4]; // [rsp+50h] [rbp-38h] BYREF
	__int64 v18; // [rsp+90h] [rbp+8h] BYREF

	*(_QWORD*)(a1 + 8) = a2;
	v2 = 0i64;
	v3 = a1 + 56;
	*(_QWORD*)a1 = off_140B6C600;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	(*(void(__fastcall**)(_QWORD, int*))(**(_QWORD**)(a1 + 8) + 56i64))(*(_QWORD*)(a1 + 8), v17);
	*(_DWORD*)(a1 + 36) = v17[0];
	*(_DWORD*)(a1 + 40) = v17[1];
	v5 = 0i64;
	*(_DWORD*)(a1 + 44) = v17[2];
	v6 = 0i64;
	*(_DWORD*)(a1 + 48) = v17[3];
	while (qword_140C658F8
		&& v5 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
		/ 0x30ui64)
	{
		v7 = qword_140C658F8;
		if (qword_140C658F8
			&& *(_QWORD*)(qword_140C658F8 + 8)
			&& v5 < *(unsigned int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(qword_140C658F8 + 64) + 32i64))(*(_QWORD*)(qword_140C658F8 + 64))
			/ 0x30ui64)
		{
			v2 = v6 + *(_QWORD*)(v7 + 8);
		}
		if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v2 + 24i64))(v2) == *(_QWORD*)(a1 + 8))
		{
			v8 = *(_QWORD*)(a1 + 24);
			v9 = sub_14018DB00(*(_QWORD*)(a1 + 16), v8 + 1, 8i64);
			v10 = v9;
			*(_QWORD*)&v9[2 * v8] = v2;
			v11 = *(int**)(a1 + 16);
			if (v11 != v9)
			{
				sub_1407DB590(v9, v11, 8i64 * *(_QWORD*)(a1 + 24));
				v12 = *(_QWORD*)(a1 + 16);
				if (v12)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
				*(_QWORD*)(a1 + 16) = v10;
			}
			*(_QWORD*)(a1 + 24) = v8 + 1;
		}
		++v5;
		v6 += 80i64;
		v2 = 0i64;
	}
	v13 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD, __int64*))(**(_QWORD**)(a1 + 8) + 32i64))(
		*(_QWORD*)(a1 + 8),
		&v18);
	*(_DWORD*)(a1 + 64) = *v13;
	*(_DWORD*)(a1 + 68) = v13[1];
	v14 = (_WORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 8) + 24i64))(*(_QWORD*)(a1 + 8));
	if (v14)
	{
		if (*v14)
		{
			sub_14018D540(&v18, (__int64)L"UI\\Maps\\%s\\UI_CRB_Revealed_0.tga", v14);
			v15 = v18;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				v18,
				0i64,
				1i64,
				2,
				0,
				0,
				0,
				v3);
			if (v15)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
		}
	}
	return a1;
}
// 140B13200: using guessed type wchar_t aUiMapsSUiCrbRe[33];
// 140B6C600: using guessed type __int64 (__fastcall *off_140B6C600[3])();
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C658F8: using guessed type __int64 qword_140C658F8;

