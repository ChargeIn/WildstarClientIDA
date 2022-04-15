#include "../winhttp.h"

//----- (00000001404508E0) ----------------------------------------------------
void __fastcall sub_1404508E0(__int64 a1, unsigned int a2, float a3, int a4)
{
	__int64 v4; // rax
	unsigned __int64 v5; // [rsp+20h] [rbp-38h] BYREF
	float v6; // [rsp+28h] [rbp-30h]
	int v7; // [rsp+2Ch] [rbp-2Ch]
	__int64 v8; // [rsp+30h] [rbp-28h]
	__int64 v9; // [rsp+38h] [rbp-20h]
	__int64 v10; // [rsp+40h] [rbp-18h]

	v8 = 0i64;
	v5 = 0i64;
	v7 = 0;
	v9 = 0i64;
	v10 = 0i64;
	v6 = a3;
	v5 = __PAIR64__(*(_DWORD*)(qword_140C65908 + 48), a2);
	v8 = *(_QWORD*)(qword_140C7AAC0 + 24);
	if (qword_140C65898 && (v4 = *(_QWORD*)(qword_140C65898 + 120)) != 0)
		v9 = *(_QWORD*)(v4 + 424);
	else
		v9 = 0i64;
	LODWORD(v10) = a4;
	sub_1400161D0(qword_140C635F0, 0x82Cu, (__int64)&v5);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65908: using guessed type __int64 qword_140C65908;
// 140C7AAC0: using guessed type __int64 qword_140C7AAC0;

