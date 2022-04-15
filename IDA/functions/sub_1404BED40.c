#include "../winhttp.h"

//----- (00000001404BED40) ----------------------------------------------------
void __fastcall sub_1404BED40(__int64 a1, _OWORD* a2, int a3)
{
	__int64* v4; // rcx
	__int64 v5; // rax
	_OWORD* v6; // rax
	char v7[64]; // [rsp+20h] [rbp-88h] BYREF
	char v8[72]; // [rsp+60h] [rbp-48h] BYREF

	if (a2)
	{
		v4 = **(__int64***)(a1 + 304);
		if (v4)
		{
			v5 = *v4;
			if (a3)
				v6 = (_OWORD*)(*(__int64(__fastcall**)(__int64*, char*, _QWORD))(v5 + 136))(v4, v7, 0i64);
			else
				v6 = (_OWORD*)(*(__int64(__fastcall**)(__int64*, char*, _QWORD))(v5 + 128))(v4, v8, 0i64);
			*a2 = *v6;
			a2[1] = v6[1];
			a2[2] = v6[2];
			a2[3] = v6[3];
		}
	}
}
// 1404BED40: using guessed type char var_88[64];
// 1404BED40: using guessed type char var_48[72];

