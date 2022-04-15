#include "../winhttp.h"

//----- (0000000140879810) ----------------------------------------------------
__int64 __fastcall sub_140879810(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	_QWORD* v5; // rdi
	int v6; // edx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	int* v10; // rsi
	bool v11; // zf
	int v12; // eax
	int v13; // eax
	__int64 v14; // rcx
	__int64 result; // rax
	__int64 v16; // [rsp+40h] [rbp+8h] BYREF
	char v17; // [rsp+48h] [rbp+10h] BYREF

	v1 = *(_QWORD*)(a1 + 24);
	v3 = 0i64;
	v16 = 0i64;
	v4 = sub_14083EDE0(qword_140C61BA8 + 398, **(_DWORD**)(v1 + 168));
	v5 = (_QWORD*)v4;
	if (!v4)
		goto LABEL_15;
	v6 = *(_DWORD*)(v4 + 32);
	*(_DWORD*)(a1 + 40) = v6;
	if ((unsigned int)sub_14082FAF0((__int64)&off_140C10F70, v6, &v16) != 1)
		goto LABEL_15;
	*(_QWORD*)(a1 + 56) = v16;
	v7 = v5[5];
	if (!v7)
		goto LABEL_6;
	v8 = (*(__int64(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v7 + 16i64))(v7, &off_140C10F70);
	*(_QWORD*)(a1 + 48) = v8;
	if (!v8)
	{
	LABEL_15:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 72i64))(a1);
		if (v5)
			(*(void(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
		return 2i64;
	}
	sub_140857D10((__int64)v5, v8, *(_QWORD*)(*(_QWORD*)(a1 + 24) + 176i64));
LABEL_6:
	v9 = sub_1408819F0(dword_140C10F28, 40i64);
	if (v9)
		v3 = sub_140862040(v9, *(_QWORD*)(a1 + 24));
	*(_QWORD*)(a1 + 120) = v3;
	if (!v3)
		goto LABEL_15;
	v10 = (int*)(a1 + 128);
	v11 = *(_BYTE*)(*(_QWORD*)(a1 + 24) + 382i64) >= 0;
	v12 = dword_140C110B4;
	*(_DWORD*)(a1 + 132) = -1535115260;
	if (!v11)
		v12 = 375;
	*v10 = v12;
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 56) + 24i64))(*(_QWORD*)(a1 + 56), &v17);
	v13 = (*(__int64(__fastcall**)(_QWORD, __int64(__fastcall***)(), _QWORD, _QWORD, __int64))(**(_QWORD**)(a1 + 56)
		+ 48i64))(
			*(_QWORD*)(a1 + 56),
			&off_140C10F70,
			*(_QWORD*)(a1 + 120),
			*(_QWORD*)(a1 + 48),
			a1 + 128);
	switch (*(_DWORD*)(a1 + 132) & 0x3FFFF)
	{
	case 3:
	case 4:
	case 7:
	case 8:
	case 0xB:
	case 0xC:
	case 0xF:
	case 0x33:
	case 0x37:
	case 0x3B:
	case 0x3F:
		if (v13 != 1
			|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 56) + 16i64))(*(_QWORD*)(a1 + 56)) != 1)
		{
			goto LABEL_15;
		}
		v14 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(v14 + 192) = *(_QWORD*)v10;
		sub_14085EF10(v14);
		(*(void(__fastcall**)(_QWORD*))(*v5 + 16i64))(v5);
		result = 1i64;
		break;
	default:
		goto LABEL_15;
	}
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F70: using guessed type __int64 (__fastcall **off_140C10F70)();
// 140C110B4: using guessed type int dword_140C110B4;

