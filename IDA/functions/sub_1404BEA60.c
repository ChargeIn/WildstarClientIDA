#include "../winhttp.h"

//----- (00000001404BEA60) ----------------------------------------------------
__int64 __fastcall sub_1404BEA60(__int64 a1, __int64 a2)
{
	__int64* v3; // rcx
	_DWORD* v4; // rsi
	__int64 v5; // rax
	char v7[64]; // [rsp+20h] [rbp-98h] BYREF
	char v8[88]; // [rsp+60h] [rbp-58h] BYREF
	__int64 v9; // [rsp+C0h] [rbp+8h] BYREF
	__int64 v10; // [rsp+C8h] [rbp+10h] BYREF

	v10 = a2;
	*(_QWORD*)a1 = off_140B687F0;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
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
	*(_DWORD*)(a1 + 220) = 1;
	*(_DWORD*)(a1 + 272) = 0;
	*(_DWORD*)(a1 + 276) = 254;
	*(_QWORD*)(a1 + 288) = 0i64;
	v3 = (__int64*)(a1 + 304);
	*(v3 - 34) = (__int64)off_140B68A90;
	*(v3 - 38) = (__int64)off_140B688A0;
	v3[1] = 0i64;
	*v3 = 0i64;
	sub_140033260(v3, &v10);
	v4 = (_DWORD*)v10;
	v5 = *(_QWORD*)(v10 + 288);
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = v5;
	*(_QWORD*)(a1 + 288) = a1;
	sub_1404C6650((__int64)v4, 0);
	v9 = 0i64;
	if ((*(int(__fastcall**)(_DWORD*, __int64*))(*(_QWORD*)v4 + 208i64))(v4, &v9) >= 0)
		sub_1404BFEE0((__int64*)a1, v9);
	if (v4[32] != 7)
	{
		(**(void(__fastcall***)(__int64))(a1 + 32))(a1 + 32);
		(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)a1 + 96i64))(a1, v7, 1i64);
		(*(void(__fastcall**)(__int64, char*, _QWORD))(*(_QWORD*)a1 + 96i64))(a1, v8, 0i64);
		(*(void(__fastcall**)(__int64, char*, char*))(*(_QWORD*)(a1 + 32) + 16i64))(a1 + 32, v8, v7);
	}
	return a1;
}
// 140B687F0: using guessed type __int64 (__fastcall *off_140B687F0[21])();
// 140B688A0: using guessed type __int64 (__fastcall *off_140B688A0[61])();
// 140B68A90: using guessed type __int64 (__fastcall *off_140B68A90[17])();

