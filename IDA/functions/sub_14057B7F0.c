//----- (000000014057B7F0) ----------------------------------------------------
__int64 __fastcall sub_14057B7F0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx

	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v2 - 16) + 8i64))(v2 - 16);
	v3 = *(_QWORD*)(a1 + 16);
	if (v3)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v3 - 16) + 8i64))(v3 - 16);
	sub_14018B900(a1, 0);
	return a1;
}

