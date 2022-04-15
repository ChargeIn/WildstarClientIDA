//----- (0000000140054BE0) ----------------------------------------------------
__int64 __fastcall sub_140054BE0(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 72);
	if (!v2)
		return 1i64;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 48i64))(v2);
	v3 = *(_QWORD*)(a1 + 72);
	v6[0] = 0;
	if ((*(unsigned int(__fastcall**)(__int64, int*))(*(_QWORD*)v3 + 40i64))(v3, v6) && !*(_DWORD*)(a1 + 40))
	{
		sub_14003E2C0();
		sub_140048100(a1, *(_QWORD*)(a1 + 72), 1);
		v4 = *(_QWORD*)(a1 + 72);
		if (v4)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
			*(_QWORD*)(a1 + 72) = 0i64;
		}
	}
	return 0i64;
}
// 140054BE0: using guessed type int var_18[6];

