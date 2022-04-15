//----- (00000001401A46B0) ----------------------------------------------------
__int64 __fastcall sub_1401A46B0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx

	v2 = *(_QWORD*)(a1 + 280);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 16i64))(v2);
	v3 = *(_QWORD*)(a1 + 272);
	if (v3)
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v3 + 48i64))(v3, 0xFFFFFFFFi64);
	v4 = *(_QWORD*)(a1 + 280);
	if (v4)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
	v5 = *(_QWORD*)(a1 + 272);
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	sub_14018B900(a1, 0);
	return a1;
}

