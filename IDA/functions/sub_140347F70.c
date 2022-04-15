#include "../winhttp.h"

//----- (0000000140347F70) ----------------------------------------------------
__int64 __fastcall sub_140347F70(__int64 a1, __int64 a2, char* a3)
{
	__int64 v5; // rsi
	unsigned __int64 v6; // rbx
	int v8; // eax
	__int64 v9; // rdx
	__int64 v10; // r8
	__int16* v11; // rax
	signed __int64 v12; // rdi
	__int16 v13; // cx
	int v14; // [rsp+20h] [rbp-248h] BYREF
	__int16 v15[262]; // [rsp+24h] [rbp-244h] BYREF
	__int64 v16; // [rsp+230h] [rbp-38h]

	if (!a2 || !a3 || !*(_WORD*)a3)
		return 2147942487i64;
	v5 = 0i64;
	v6 = 0i64;
	do
		++v6;
	while (*(_WORD*)&a3[2 * v6]);
	if (v6 < 4)
		return 2147942487i64;
	v16 = 0i64;
	v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65858 + 112i64))(qword_140C65858);
	v9 = v6 + 1;
	v14 = v8;
	if (v6 + 1 > 0x104)
		v9 = 260i64;
	if ((unsigned __int64)(v9 - 1) > 0x7FFFFFFE)
	{
		if (v9)
			v15[0] = 0;
	}
	else
	{
		v10 = 2147483646 - v9;
		v11 = v15;
		v12 = a3 - (char*)v15;
		while (v10 + v9)
		{
			v13 = *(__int16*)((char*)v11 + v12);
			if (!v13)
				break;
			*v11++ = v13;
			if (!--v9)
			{
				*(v11 - 1) = 0;
				v5 = v16;
				goto LABEL_22;
			}
		}
		if (!v9)
			--v11;
		*v11 = 0;
		v5 = v16;
	}
LABEL_22:
	sub_1403481C0((__int64*)(a1 + 16), &v14);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	return 0i64;
}
// 140C65858: using guessed type __int64 qword_140C65858;

