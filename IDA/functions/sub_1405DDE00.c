//----- (00000001405DDE00) ----------------------------------------------------
__int64 __fastcall sub_1405DDE00(__int64 a1)
{
	_QWORD* v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD**)(a1 + 208);
	if (v2)
		*v2 = *(_QWORD*)(a1 + 216);
	v3 = *(_QWORD*)(a1 + 216);
	if (v3)
		*(_QWORD*)(v3 + 208) = *(_QWORD*)(a1 + 208);
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	sub_14018B900(a1, 0);
	return a1;
}

