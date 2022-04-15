//----- (0000000140341AB0) ----------------------------------------------------
__int64 __fastcall sub_140341AB0(__int64 a1)
{
	_QWORD* i; // rax
	_QWORD* v3; // rdx
	__int64 v4; // rdx
	_QWORD* v5; // rdx
	__int64 v6; // rdx

	for (i = *(_QWORD**)(a1 + 80); i; i = *(_QWORD**)(a1 + 80))
	{
		v3 = (_QWORD*)i[4];
		if (v3)
			*v3 = i[5];
		v4 = i[5];
		if (v4)
			*(_QWORD*)(v4 + 32) = i[4];
		i[4] = 0i64;
		i[5] = 0i64;
		v5 = (_QWORD*)i[2];
		if (v5)
			*v5 = i[3];
		v6 = i[3];
		if (v6)
			*(_QWORD*)(v6 + 16) = i[2];
		i[2] = 0i64;
		i[3] = 0i64;
		sub_14018B900((__int64)i, 0);
	}
	return 0i64;
}
// 140341ACC: conditional instruction was optimized away because rax.8!=0

