//----- (00000001404BEA10) ----------------------------------------------------
__int64 __fastcall sub_1404BEA10(_QWORD* a1)
{
	char v3[64]; // [rsp+20h] [rbp-88h] BYREF
	char v4[72]; // [rsp+60h] [rbp-48h] BYREF

	(*(void(__fastcall**)(_QWORD*, char*, __int64))(*a1 + 96i64))(a1, v3, 1i64);
	(*(void(__fastcall**)(_QWORD*, char*, _QWORD))(*a1 + 96i64))(a1, v4, 0i64);
	return (*(__int64(__fastcall**)(_QWORD*, char*, char*))(a1[4] + 16i64))(a1 + 4, v4, v3);
}

