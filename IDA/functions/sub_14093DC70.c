//----- (000000014093DC70) ----------------------------------------------------
__int64 sub_14093DC70()
{
	__int64 v0; // rax
	int* v1; // rdi
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v6; // [rsp+30h] [rbp-38h] BYREF
	int v7; // [rsp+38h] [rbp-30h]
	char v8[8]; // [rsp+40h] [rbp-28h] BYREF
	int* v9; // [rsp+48h] [rbp-20h]
	int* v10; // [rsp+50h] [rbp-18h]
	__int64 v11; // [rsp+58h] [rbp-10h]

	v9 = 0i64;
	v10 = 0i64;
	v11 = 0i64;
	v0 = 0i64;
	v1 = 0i64;
	while (aFluxatione10[++v0] != 0)
		;
	v3 = (2 * v0) >> 1;
	if ((unsigned __int64)(v3 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v1 = sub_14018B280(2 * (v3 + 1), 0);
		v9 = v1;
		v10 = v1;
		v11 = (__int64)v1 + 2 * v3 + 2;
	}
	sub_1407DB590(v1, (int*)L"Fluxatione10", 2 * v3);
	v10 = (int*)((char*)v1 + 2 * v3);
	if (v10)
		*((_WORD*)v1 + v3) = 0;
	v6 = 0i64;
	v7 = 0;
	sub_1400198C0((__int64)qword_140C7B160, &v6, (__int64)v8, 4, (__int64)sub_1403F7320);
	nullsub_1(v4);
	if (v9)
		sub_14018B900((__int64)v9, 0);
	return sub_1407DD89C(sub_14094FE60);
}
// 14093DD42: variable 'v4' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140AF6F70: using guessed type wchar_t aFluxatione10[13];
// 140C7B160: using guessed type _QWORD qword_140C7B160[2];
// 14093DC70: using guessed type char var_28[8];
