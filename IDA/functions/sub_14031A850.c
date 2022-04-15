//----- (000000014031A850) ----------------------------------------------------
void __fastcall sub_14031A850(__int64 a1, __int64 a2)
{
	_QWORD* v3; // rcx
	__int64 v4; // rcx

	if (a1)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
	v3 = *(_QWORD**)(a2 + 112);
	if (v3)
		*v3 = *(_QWORD*)(a2 + 120);
	v4 = *(_QWORD*)(a2 + 120);
	if (v4)
		*(_QWORD*)(v4 + 112) = *(_QWORD*)(a2 + 112);
	*(_QWORD*)(a2 + 112) = 0i64;
	*(_QWORD*)(a2 + 120) = 0i64;
	*(_QWORD*)(a2 + 112) = 0i64;
	*(_QWORD*)(a2 + 120) = 0i64;
	sub_14018B900(a2, 0);
}

