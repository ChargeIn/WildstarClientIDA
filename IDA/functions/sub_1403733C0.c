//----- (00000001403733C0) ----------------------------------------------------
void __fastcall sub_1403733C0(_QWORD* a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	int v7[6]; // [rsp+20h] [rbp-18h] BYREF

	*a1 = off_140B65AA0;
	v2 = a1[9];
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		a1[9] = 0i64;
	}
	sub_14018B900(a1[8], 0);
	v3 = a1[2];
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 104i64))(v3);
		v4 = a1[2];
		v7[0] = -1;
		(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v4 + 32i64))(v4, v7);
		(*(void(__fastcall**)(_QWORD))(*(_QWORD*)a1[2] + 8i64))(a1[2]);
		a1[2] = 0i64;
	}
	v5 = a1[3];
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[3] = 0i64;
	}
	v6 = a1[39];
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
}
// 140B65AA0: using guessed type __int64 (__fastcall *off_140B65AA0[6])();
// 1403733C0: using guessed type int var_18[6];

