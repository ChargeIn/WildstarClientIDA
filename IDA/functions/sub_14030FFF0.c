#include "../winhttp.h"

//----- (000000014030FFF0) ----------------------------------------------------
int __fastcall sub_14030FFF0(__int64 a1)
{
	void(__fastcall * **v2)(_QWORD, __int64); // rcx
	__int64* v3; // rdi
	__int64 v4; // r9
	__int64 v5; // rcx
	_QWORD* v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx
	__int64 v13; // r8
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rax
	_QWORD* v21; // rcx
	__int64 v22; // rcx

	*(_QWORD*)a1 = off_140B64180;
	*(_QWORD*)(a1 + 488) = 0i64;
	while (*(_QWORD*)(a1 + 456))
	{
		v2 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 456);
		if (v2)
			(**v2)(v2, 1i64);
	}
	v3 = (__int64*)(a1 + 136);
	if (*(_QWORD*)(a1 + 136))
	{
		do
			sub_1400035B0();
		while (*(_QWORD*)(v4 + 32));
	}
	for (; *v3; *(_QWORD*)(v5 + 32) = 0i64)
	{
		*(_QWORD*)(*v3 + 16) = 0i64;
		v5 = *v3;
		v6 = *(_QWORD**)(*v3 + 24);
		if (v6)
			*v6 = *(_QWORD*)(v5 + 32);
		v7 = *(_QWORD*)(v5 + 32);
		if (v7)
			*(_QWORD*)(v7 + 24) = *(_QWORD*)(v5 + 24);
		*(_QWORD*)(v5 + 24) = 0i64;
	}
	*(_QWORD*)(a1 + 1584) = off_140B627D0;
	*(_QWORD*)(a1 + 1560) = off_140B627D0;
	*(_QWORD*)(a1 + 1536) = off_140B627D0;
	*(_QWORD*)(a1 + 1512) = off_140B627D0;
	*(_QWORD*)(a1 + 1488) = off_140B627D0;
	v8 = *(_QWORD*)(a1 + 1416);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	v9 = *(_QWORD*)(a1 + 1408);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
	v10 = *(_QWORD*)(a1 + 1400);
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v10 + 8i64))(v10);
	v11 = *(_QWORD*)(a1 + 552);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
	v12 = 0i64;
	if (*(_QWORD*)(a1 + 536))
	{
		v13 = 0i64;
		do
		{
			++v12;
			v13 += 16i64;
			**(_QWORD**)(v13 + *(_QWORD*)(a1 + 528) - 16) = 0i64;
		} while (v12 < *(_QWORD*)(a1 + 536));
	}
	v14 = *(_QWORD*)(a1 + 528);
	if (v14)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
	v15 = *(_QWORD*)(a1 + 504);
	if (v15)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v15 - 16) + 8i64))(v15 - 16);
	v16 = *(_QWORD*)(a1 + 464);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v16 - 16) + 8i64))(v16 - 16);
	if (*(_QWORD*)(a1 + 456))
		sub_1401A4A00((const void***)(a1 + 456));
	v17 = *(_QWORD*)(a1 + 440);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	if (*(_QWORD*)(a1 + 200))
		sub_1401A4A00((const void***)(a1 + 200));
	v18 = *(_QWORD*)(a1 + 168);
	if (v18)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v18 - 16) + 8i64))(v18 - 16);
	v19 = *(_QWORD*)(a1 + 152);
	if (v19)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
	if (*(_QWORD*)(a1 + 144))
		sub_1401A4A00((const void***)(a1 + 144));
	if (*v3)
		sub_1401A4A00((const void***)(a1 + 136));
	if (*(_QWORD*)(a1 + 128))
		CloseHandle(*(HANDLE*)(a1 + 128));
	if (*(_QWORD*)(a1 + 96))
		CloseHandle(*(HANDLE*)(a1 + 96));
	v20 = *(_QWORD*)(a1 + 64);
	if (v20)
		LODWORD(v20) = CloseHandle(*(HANDLE*)(a1 + 64));
	v21 = *(_QWORD**)(a1 + 24);
	if (v21)
	{
		v20 = *(_QWORD*)(a1 + 32);
		*v21 = v20;
	}
	v22 = *(_QWORD*)(a1 + 32);
	if (v22)
	{
		v20 = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(v22 + 24) = v20;
	}
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	return v20;
}
// 14031006D: variable 'v4' is possibly undefined
// 140B627D0: using guessed type __int64 (__fastcall *off_140B627D0[17])();
// 140B64180: using guessed type __int64 (__fastcall *off_140B64180[10])();

