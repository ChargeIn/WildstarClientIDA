//----- (00000001404C6970) ----------------------------------------------------
__int64 __fastcall sub_1404C6970(__int64 a1, __int64 a2)
{
	_QWORD* v2; // r8
	__int64 v3; // r9
	__int64 v4; // r8
	_QWORD* v5; // rcx

	v2 = *(_QWORD**)(a2 + 32);
	if (v2)
		*v2 = *(_QWORD*)(a2 + 40);
	v3 = *(_QWORD*)(a2 + 40);
	v4 = a2 + 40;
	if (v3)
		*(_QWORD*)(v3 + 32) = *(_QWORD*)(a2 + 32);
	v5 = (_QWORD*)(a1 + 664);
	*(_QWORD*)v4 = 0i64;
	*(_QWORD*)(a2 + 32) = v5;
	*(_QWORD*)v4 = *v5;
	*v5 = a2;
	if (*(_QWORD*)v4)
		*(_QWORD*)(*(_QWORD*)v4 + 32i64) = v4;
	return 0i64;
}

