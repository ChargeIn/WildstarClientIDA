//----- (0000000140401490) ----------------------------------------------------
void __fastcall sub_140401490(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx

	sub_14018B900(*(_QWORD*)(a1 + 80), 0);
	sub_14018B900(*(_QWORD*)(a1 + 72), 0);
	v2 = *(_QWORD*)(a1 + 120);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = *(_QWORD*)(a1 + 96);
	if (v3)
		sub_14018B900(v3, 0);
	sub_140195D70(a1);
	*(_DWORD*)a1 = 0;
	v4 = *(_QWORD**)(a1 + 16);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 24);
	v5 = *(_QWORD**)(a1 + 24);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 16) = 0i64;
}

