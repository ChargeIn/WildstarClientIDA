//----- (0000000140880F30) ----------------------------------------------------
__int64 __fastcall sub_140880F30(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	char v5[8]; // [rsp+20h] [rbp-18h] BYREF
	int v6; // [rsp+28h] [rbp-10h]

	*(_WORD*)(a1 + 84) = *(_WORD*)(a1 + 124) + 1;
	v2 = *(_QWORD*)(a1 + 88);
	if (v2)
	{
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 32i64))(v2, v5);
		v3 = *(_QWORD*)(a1 + 88);
		v6 = 0;
		(*(void(__fastcall**)(__int64, char*))(*(_QWORD*)v3 + 40i64))(v3, v5);
	}
	return 1i64;
}
// 140880F30: using guessed type char var_18[8];

