//----- (00000001405A9880) ----------------------------------------------------
void __fastcall sub_1405A9880(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	_QWORD* v4; // rcx
	_QWORD* v5; // rcx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 96);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 96) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 104);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 104) = 0i64;
	}
	sub_140195D70(a1 + 112);
	*(_DWORD*)(a1 + 112) = 0;
	v4 = *(_QWORD**)(a1 + 128);
	if (v4)
		*v4 = *(_QWORD*)(a1 + 136);
	v5 = *(_QWORD**)(a1 + 136);
	if (v5)
		*v5 = *(_QWORD*)(a1 + 128);
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	v6 = *(_QWORD*)(a1 + 64);
	if (v6)
		sub_14018B900(v6, 0);
}

