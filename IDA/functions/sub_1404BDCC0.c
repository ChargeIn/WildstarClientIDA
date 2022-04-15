//----- (00000001404BDCC0) ----------------------------------------------------
__int64 __fastcall sub_1404BDCC0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // rcx
	char v6[64]; // [rsp+20h] [rbp-88h] BYREF
	char v7[72]; // [rsp+60h] [rbp-48h] BYREF

	*(_QWORD*)a1 = off_140B687F0;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 220) = 1;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 276) = 254;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 144) = 0i64;
	*(_QWORD*)(a1 + 152) = 0i64;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 200) = 0;
	*(_DWORD*)(a1 + 216) = 0;
	*(_DWORD*)(a1 + 272) = 0;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 32) = off_140B68A90;
	v3 = *(_QWORD*)(*(_QWORD*)(a1 + 16) + 288i64);
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = v3;
	v4 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 288) = a1;
	sub_1404C6650(v4, 0);
	if (*(_DWORD*)(*(_QWORD*)(a1 + 16) + 128i64) != 7)
	{
		(**(void(__fastcall***)(__int64))(a1 + 32))(a1 + 32);
		(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)a1 + 96i64))(a1, v6, 1i64);
		(*(void(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, v7, 0i64);
		(*(void(__fastcall**)(__int64, char*, char*))(*(_QWORD*)(a1 + 32) + 16i64))(a1 + 32, v7, v6);
	}
	return a1;
}
// 140B687F0: using guessed type __int64 (__fastcall *off_140B687F0[21])();
// 140B68A90: using guessed type __int64 (__fastcall *off_140B68A90[17])();

