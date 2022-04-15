#include "../winhttp.h"

//----- (00000001401A6DB0) ----------------------------------------------------
unsigned __int16* __fastcall sub_1401A6DB0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // rsi
	unsigned __int16* v3; // rbx
	__int64 v5; // rbp
	unsigned __int16 v6; // cx
	__int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rcx
	_WORD* v10; // rax
	__int64 v11; // rax
	__int64 v13; // r8
	__int64 v14; // rbx

	v2 = 0i64;
	v3 = a2;
	v5 = 0i64;
	if (!a2)
		return v3;
	while (1)
	{
		while (*v3 == 32 || (unsigned __int16)(*v3 - 9) <= 4u)
			++v3;
		v6 = *v3;
		if (!*v3)
		{
			if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1))
				v2 = sub_1401A4F40(a1 + 24);
			v13 = v2;
		LABEL_34:
			sub_1401A81B0(*(_QWORD*)(a1 + 8), 0xA0670007, v13);
			return 0i64;
		}
		if (v6 < 0x80u
			&& (unsigned __int16)(v6 - 65) > 0x19u
			&& (unsigned __int16)(v6 - 97) > 0x19u
			&& v6 != 58
			&& v6 != 95)
		{
			if (*v3 == 62)
			{
				++v3;
				return v3;
			}
			if (*v3 == 47 && v3[1] == 62)
			{
				*(_DWORD*)(a1 + 88) = 1;
				return v3 + 2;
			}
			v13 = (__int64)v3;
			goto LABEL_34;
		}
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)(a1 + 8) + 256i64) + 16i64))(*(_QWORD*)(a1 + 8) + 256i64);
		v8 = v7;
		if (v7)
		{
			*(_QWORD*)v7 = off_140B5EB98;
			*(_DWORD*)(v7 + 8) = 0;
			*(_QWORD*)(v7 + 16) = 0i64;
			*(_QWORD*)(v7 + 24) = 0i64;
			*(_DWORD*)(v7 + 32) = 0;
			*(_QWORD*)(v7 + 40) = 0i64;
			*(_QWORD*)(v7 + 48) = 0i64;
			*(_QWORD*)(v7 + 56) = 0i64;
			*(_QWORD*)(v7 + 64) = 0i64;
		}
		else
		{
			v8 = 0i64;
		}
		v9 = *(_QWORD*)(a1 + 8) + 256i64;
		*(_QWORD*)(v8 + 64) = v9;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 32i64))(v9);
		v3 = sub_1401A6A00(v8, v3, *(_BYTE*)(*(_QWORD*)(a1 + 8) + 89i64));
		if (!v3)
			break;
		v10 = (_WORD*)sub_1401A4F40(v8 + 8);
		v11 = sub_1401A6B80(a1, v10);
		if (v11)
		{
			if (sub_1401A4F40(v11 + 32))
				break;
		}
		if (v5)
			*(_QWORD*)(v5 + 56) = v8;
		else
			*(_QWORD*)(a1 + 96) = v8;
		v5 = v8;
	}
	v14 = *(_QWORD*)(v8 + 64);
	(**(void(__fastcall***)(__int64, _QWORD))v8)(v8, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v14 + 24i64))(v14, v8);
	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 48i64))(a1))
		v2 = sub_1401A4F40(a1 + 24);
	sub_1401A81B0(*(_QWORD*)(a1 + 8), 0xA0670007, v2);
	return 0i64;
}
// 140B5EB98: using guessed type __int64 (__fastcall *off_140B5EB98[18])();

