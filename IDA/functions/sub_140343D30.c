#include "../winhttp.h"

//----- (0000000140343D30) ----------------------------------------------------
__int64 __fastcall sub_140343D30(__int64 a1, __int16* a2)
{
	__int64 v4; // rdi
	_WORD* v5; // rcx
	__int64 v6; // r8
	__int16 v7; // ax
	char v8; // r8
	__int16 i; // ax
	_QWORD* v10; // rdx
	__int64 v11; // rax

	if (!a2)
		return 2147942487i64;
	v4 = a1 + 8;
	v5 = (_WORD*)(a1 + 8);
	v6 = 260i64;
	while (v6 != -2147483386)
	{
		v7 = *(_WORD*)((char*)v5 + (_QWORD)a2 - v4);
		if (!v7)
			break;
		*v5++ = v7;
		if (!--v6)
		{
			--v5;
			break;
		}
	}
	v8 = 0;
	*v5 = 0;
	for (i = *a2; *a2; i = *a2)
	{
		++a2;
		v8 += 29 * i;
	}
	v10 = (_QWORD*)((char*)&unk_140C7A100 + 8 * (v8 & 0x1F));
	if (!*(_QWORD*)(a1 + 616))
	{
		*(_QWORD*)(a1 + 616) = v10;
		*(_QWORD*)(a1 + 624) = *v10;
		*v10 = a1;
		v11 = *(_QWORD*)(a1 + 624);
		if (v11)
			*(_QWORD*)(v11 + 616) = a1 + 624;
	}
	sub_14034A2B0(a1 + 536);
	(**(void(__fastcall***)(__int64))a1)(a1);
	return (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64))(*(_QWORD*)qword_140C65858 + 328i64))(
		qword_140C65858,
		a1 + 528,
		v4,
		a1 + 600);
}
// 140343D88: conditional instruction was optimized away because r8.8!=0
// 140C65858: using guessed type __int64 qword_140C65858;

