#include "../winhttp.h"

//----- (000000014051FA40) ----------------------------------------------------
void __fastcall sub_14051FA40(__int64 a1)
{
	unsigned int v1; // edx
	int v3; // eax
	__int64 v4; // rsi
	int v5; // edi
	int* v6; // rax
	int v7; // [rsp+20h] [rbp-18h]

	v1 = *(_DWORD*)(a1 + 16);
	if (v1)
	{
		v3 = sub_1403B90B0(a1, v1);
		v4 = *(_QWORD*)(qword_140C65898 + 29504);
		v5 = v3;
		v6 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 16), 0i64);
		if (v6)
		{
			v7 = v5;
			sub_1400EA3E0(v4, "CostumeForgetResult", "oi", v6, v7);
		}
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

