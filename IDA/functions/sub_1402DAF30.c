//----- (00000001402DAF30) ----------------------------------------------------
__int64 __fastcall sub_1402DAF30(__int64 a1)
{
	int* v2; // rdx
	__int64 v3; // rax
	__int64 v4; // rdx
	_QWORD* v5; // rax
	__int64 v6; // r8
	_QWORD* v7; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B62D08;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v2 = sub_14018B280(24i64, 0);
	if (v2)
	{
		*((_QWORD*)v2 + 1) = 5i64;
		*((_QWORD*)v2 + 2) = 0i64;
		*(_QWORD*)v2 = &unk_140AF0B90;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = qword_140C63770;
	qword_140C63770 = (__int64)v2;
	*((_QWORD*)v2 + 2) = v3;
	v4 = 4i64;
	v5 = (_QWORD*)(a1 + 48);
	v6 = 4i64;
	do
	{
		*v5 = 0i64;
		v5[1] = 0i64;
		v5[2] = 0i64;
		v5 += 8;
		*(v5 - 5) = 0i64;
		*(v5 - 4) = 0i64;
		*(v5 - 3) = 0i64;
		*(v5 - 2) = 0i64;
		*(v5 - 1) = 0i64;
		--v6;
	} while (v6);
	*v5 = 0i64;
	v5[1] = 0i64;
	v5[2] = 0i64;
	v5[3] = 0i64;
	v5[4] = 0i64;
	v5[5] = 0i64;
	v7 = (_QWORD*)(a1 + 352);
	do
	{
		*v7 = 0i64;
		v7[1] = 0i64;
		v7[2] = 0i64;
		v7 += 8;
		*(v7 - 5) = 0i64;
		*(v7 - 4) = 0i64;
		*(v7 - 3) = 0i64;
		*(v7 - 2) = 0i64;
		*(v7 - 1) = 0i64;
		--v4;
	} while (v4);
	*v7 = 0i64;
	v7[1] = 0i64;
	v7[2] = 0i64;
	v7[3] = 0i64;
	v7[4] = 0i64;
	v7[5] = 0i64;
	*(_QWORD*)(a1 + 656) = 0i64;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B62D08: using guessed type __int64 (__fastcall *off_140B62D08[29])();
// 140C63770: using guessed type __int64 qword_140C63770;

