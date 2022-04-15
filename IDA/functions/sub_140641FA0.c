//----- (0000000140641FA0) ----------------------------------------------------
__int64 __fastcall sub_140641FA0(__int64 a1, unsigned int* a2)
{
	int* v3; // rax
	__int64 v4; // rcx
	__int64 v6[24]; // [rsp+20h] [rbp-E8h] BYREF
	__int128 v7; // [rsp+E0h] [rbp-28h]
	int* v8; // [rsp+F0h] [rbp-18h]

	sub_1400B6F30((__int64)v6);
	v8 = 0i64;
	v7 = 0i64;
	v6[0] = (__int64)off_140B69230;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v7 = v3;
	*((_QWORD*)&v7 + 1) = v3;
	v8 = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	if ((int)sub_1406416D0((__int64)v6, (__int64)a2, 0) >= 0)
		sub_14043B880(v4, a2, v6);
	if ((_QWORD)v7)
		sub_14018B900(v7, 0);
	sub_1400B7390(v6);
	return 0i64;
}
// 140642026: variable 'v4' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();

