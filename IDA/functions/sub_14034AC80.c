//----- (000000014034AC80) ----------------------------------------------------
__int64 __fastcall sub_14034AC80(__int64 a1, _QWORD* a2)
{
	unsigned int v3; // edi
	__int64 v4; // rdx
	int v5; // eax
	_QWORD v7[3]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v8; // [rsp+38h] [rbp-30h]
	__int64 v9; // [rsp+40h] [rbp-28h]
	__int64 v10; // [rsp+48h] [rbp-20h]
	__int64 v11; // [rsp+50h] [rbp-18h]

	v7[0] = *a2;
	v7[1] = a2[1];
	v7[2] = a2[2];
	v8 = a2[3];
	v9 = a2[4];
	v10 = a2[5];
	v11 = a2[6];
	LODWORD(v8) = 1;
	if (!sub_140883410())
		sub_140883510(a1);
	v3 = 0;
	v4 = a1 + 8;
	if (!a1)
		v4 = 0i64;
	v5 = sub_140882EE0((__int64)v7, v4);
	*(_DWORD*)(a1 + 16) = v5;
	if (v5 == -1)
		return (unsigned int)-2147467259;
	return v3;
}
// 14034AC80: using guessed type _QWORD var_48[3];

