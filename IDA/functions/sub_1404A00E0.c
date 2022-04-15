#include "../winhttp.h"

//----- (00000001404A00E0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404A00E0(__int64 a1, __int64 a2, int a3, unsigned int a4, unsigned int a5)
{
	__int64 v5; // rcx
	unsigned int v6; // edi
	__int64 v8; // rax
	__int64* v9; // rbx
	bool v10; // zf
	__int64 v11; // rax
	unsigned int v12; // eax

	v5 = qword_140C65970;
	v6 = 0;
	if (qword_140C65970)
	{
		v8 = sub_1403D7BC0(qword_140C65970, a4);
		v9 = (__int64*)v8;
		if (v8)
		{
			v10 = (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v8 + 48i64))(v8) == 0;
			v11 = *v9;
			if (v10)
				v12 = (*(__int64(__fastcall**)(__int64*))(v11 + 64))(v9);
			else
				v12 = (*(__int64(__fastcall**)(__int64*))(v11 + 72))(v9);
			v6 = v12;
		}
	}
	return sub_1404A2090(v5, a3, v6, a5);
}
// 1404A0146: variable 'v5' is possibly undefined
// 140C65970: using guessed type __int64 qword_140C65970;

