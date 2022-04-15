#include "../winhttp.h"

//----- (0000000140936AA0) ----------------------------------------------------
__int64 sub_140936AA0()
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
	sub_1407DB590(v0, (int*)&unk_1409D04A4, 0i64);
	v7 = v0;
	if (v0)
		*(_WORD*)v0 = 0;
	v4 = 2;
	v3 = L"login.account";
	sub_1400198C0((__int64)qword_140C667C0, (__int64*)&v3, (__int64)v5, 1, 0i64);
	nullsub_1(v1);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return sub_1407DD89C(sub_14094C7E0);
}
// 140936B2F: variable 'v1' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 1409DE4F0: using guessed type wchar_t aLoginAccount[14];
// 140C667C0: using guessed type _QWORD qword_140C667C0[2];
// 140936AA0: using guessed type char var_28[8];

