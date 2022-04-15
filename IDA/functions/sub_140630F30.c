#include "../winhttp.h"

//----- (0000000140630F30) ----------------------------------------------------
__int64 __fastcall sub_140630F30(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	int v7; // esi
	__int64 v8; // rdi
	LARGE_INTEGER* i; // rbx
	__int64 v10; // [rsp+28h] [rbp-10h]
	__int64 v11; // [rsp+40h] [rbp+8h] BYREF

	v11 = a1;
	v2 = qword_140C65C18;
	v4 = (*(__int64(__fastcall**)(__int64))(qword_140C65C18 + 24))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(v2 + 16) + 8 * (v4 % *(_QWORD*)(v2 + 8)));
	if (!v5)
		goto LABEL_5;
	while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v2 + 32))(a2, v5 + 2))
	{
		v5 = (_QWORD*)v5[1];
		if (!v5)
			goto LABEL_5;
	}
	if (v5 == (_QWORD*)-24i64)
	{
	LABEL_5:
		v11 = *(_QWORD*)a2;
		sub_1403F4740(qword_140C65898, 0x549u, (__int64)&v11);
	}
	else
	{
		v7 = *(_DWORD*)(a2 + 8);
		v8 = *(_QWORD*)(a2 + 16);
		for (i = *(LARGE_INTEGER**)(v5[3] + 48i64); i; i = (LARGE_INTEGER*)i[15].QuadPart)
		{
			LODWORD(v10) = v7;
			sub_1406A4360((__int64)i, i + 4, "LSi", i, v8, v10);
		}
	}
	return 0i64;
}
// 140630FFA: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C18: using guessed type __int64 qword_140C65C18;

