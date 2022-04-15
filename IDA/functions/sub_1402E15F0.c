//----- (00000001402E15F0) ----------------------------------------------------
__int64 __fastcall sub_1402E15F0(__int64 a1, void(__fastcall*** a2)(_QWORD))
{
	__int64 v4; // rcx
	__int64 v5[13]; // [rsp+20h] [rbp-68h] BYREF

	if (!a2)
		return 2147942487i64;
	*(_QWORD*)(a1 + 16) = a2;
	(**a2)(a2);
	sub_1407E4830((int*)v5, 0i64, 0x60ui64);
	v4 = *(_QWORD*)(a1 + 16);
	v5[0] = (__int64)sub_1402E1A80;
	v5[1] = (__int64)sub_1402E1AA0;
	v5[2] = (__int64)sub_1402E1AC0;
	v5[3] = (__int64)sub_1402E1BD0;
	v5[4] = (__int64)sub_1402E1DD0;
	v5[5] = (__int64)sub_1402E1EE0;
	v5[6] = (__int64)sub_1402E1FF0;
	v5[8] = (__int64)sub_1402E2040;
	v5[9] = (__int64)sub_1402E2210;
	v5[10] = (__int64)sub_1402E2290;
	v5[11] = (__int64)sub_1402E22B0;
	(*(void(__fastcall**)(__int64, __int64*, __int64))(*(_QWORD*)v4 + 240i64))(v4, v5, a1);
	return 0i64;
}
// 1402E1AA0: using guessed type __int64 __fastcall sub_1402E1AA0();

