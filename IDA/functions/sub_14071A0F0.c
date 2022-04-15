//----- (000000014071A0F0) ----------------------------------------------------
void __fastcall sub_14071A0F0(_QWORD* a1)
{
	__int64 v2; // rcx

	v2 = a1[26];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[26] = 0i64;
	}
	if (*((_DWORD*)a1 + 50) && !*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 16i64))(a1) + 12) && !a1[18])
		(*(void(__fastcall**)(_QWORD*, _QWORD))(*a1 + 80i64))(a1, 0i64);
}

