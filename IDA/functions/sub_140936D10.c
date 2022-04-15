#include "../winhttp.h"

//----- (0000000140936D10) ----------------------------------------------------
__int64 sub_140936D10()
{
	int* v0; // rbx
	__int64 v1; // rcx
	const wchar_t* v3; // [rsp+30h] [rbp-38h] BYREF
	int v4; // [rsp+38h] [rbp-30h]
	char v5[8]; // [rsp+40h] [rbp-28h] BYREF
	int* v6; // [rsp+48h] [rbp-20h]
	int* v7; // [rsp+50h] [rbp-18h]
	__int64 v8; // [rsp+58h] [rbp-10h]

	v0 = sub_14018B280(2i64, 0);
	v8 = (__int64)v0 + 2;
	v6 = v0;
	sub_1407DB590(v0, (int*)&unk_1409D053C, 0i64);
	v7 = v0;
	if (v0)
		*(_WORD*)v0 = 0;
	v4 = 2;
	v3 = L"login.character";
	sub_1400198C0((__int64)&unk_140C66A40, (__int64*)&v3, (__int64)v5, 3, 0i64);
	nullsub_1(v1);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return sub_1407DD89C(sub_14094C880);
}
// 140936D9F: variable 'v1' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 14094C880: using guessed type __int64 __fastcall sub_14094C880();
// 1409DE570: using guessed type wchar_t aLoginCharacter[16];
// 140936D10: using guessed type char var_28[8];

