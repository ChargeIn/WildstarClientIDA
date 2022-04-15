//----- (000000014038FDB0) ----------------------------------------------------
void __fastcall sub_14038FDB0(_QWORD* a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	__int64 v5; // rcx
	_QWORD* v6; // r8
	_QWORD* v7; // rcx
	__int64 v8; // rax
	_QWORD* v9; // rcx
	__int64 v10; // rcx
	_QWORD* v11; // rcx
	__int64 v12; // rcx

	v2 = (_QWORD*)a1[2];
	if (v2)
		*v2 = a1[3];
	v3 = a1[3];
	if (v3)
		*(_QWORD*)(v3 + 16) = a1[2];
	v4 = (_QWORD*)a1[4];
	a1[2] = 0i64;
	a1[3] = 0i64;
	if (v4)
		*v4 = a1[5];
	v5 = a1[5];
	if (v5)
		*(_QWORD*)(v5 + 32) = a1[4];
	v6 = (_QWORD*)a1[1];
	a1[4] = 0i64;
	a1[5] = 0i64;
	if (!v6[146] && !v6[130])
	{
		v7 = (_QWORD*)(v6[2] + 5264i64);
		v6[130] = v7;
		v6[131] = *v7;
		*v7 = v6;
		v8 = v6[131];
		if (v8)
			*(_QWORD*)(v8 + 1040) = v6 + 131;
	}
	v9 = (_QWORD*)a1[4];
	if (v9)
		*v9 = a1[5];
	v10 = a1[5];
	if (v10)
		*(_QWORD*)(v10 + 32) = a1[4];
	a1[4] = 0i64;
	a1[5] = 0i64;
	v11 = (_QWORD*)a1[2];
	if (v11)
		*v11 = a1[3];
	v12 = a1[3];
	if (v12)
		*(_QWORD*)(v12 + 16) = a1[2];
	a1[3] = 0i64;
	a1[2] = 0i64;
}

