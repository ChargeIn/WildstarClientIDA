#include "../winhttp.h"

//----- (0000000140607120) ----------------------------------------------------
void __fastcall sub_140607120(__int64 a1, __int64 a2, __int64 a3)
{
	int* v5; // rax
	__int64 v6; // rbx
	_WORD* v7; // r8
	_WORD* v8; // rcx
	__int64 v9; // rdx
	bool v10; // al

	if (a2)
	{
		v5 = sub_14018B280(376i64, 0);
		v6 = (__int64)v5;
		if (v5)
		{
			sub_14079E980((__int64)v5);
			*(_QWORD*)v6 = off_140B6F2F8;
			*(_DWORD*)(v6 + 304) = 0;
			sub_1407E4830((int*)(v6 + 308), 0i64, 0x40ui64);
		}
		else
		{
			v6 = 0i64;
		}
		v7 = *(_WORD**)(a3 + 24);
		v8 = (_WORD*)(v6 + 32);
		v9 = 33i64;
		while (v9 != -2147483613 && *v7)
		{
			*v8++ = *v7++;
			if (!--v9)
			{
				--v8;
				break;
			}
		}
		*v8 = 0;
		*(_QWORD*)(v6 + 16) = *(_QWORD*)a3;
		*(_QWORD*)(v6 + 24) = *(_QWORD*)(a3 + 8);
		*(_DWORD*)(v6 + 100) = *(_DWORD*)(a3 + 32);
		*(_DWORD*)(v6 + 104) = *(_DWORD*)(a3 + 36);
		*(_DWORD*)(v6 + 108) = *(_DWORD*)(a3 + 40);
		*(_DWORD*)(v6 + 112) = *(_DWORD*)(a3 + 52);
		*(_DWORD*)(v6 + 120) = *(unsigned __int8*)(a3 + 48);
		*(_QWORD*)(v6 + 272) = *(_QWORD*)(a3 + 88);
		*(_QWORD*)(v6 + 280) = *(_QWORD*)(a3 + 96);
		*(_DWORD*)(v6 + 152) = *(_DWORD*)(a3 + 56);
		*(_DWORD*)(v6 + 208) = *(_DWORD*)(a3 + 144);
		*(_DWORD*)(v6 + 212) = *(_DWORD*)(a3 + 148);
		*(_DWORD*)(v6 + 216) = *(_DWORD*)(a3 + 152);
		*(_DWORD*)(v6 + 224) = *(_DWORD*)(a3 + 160);
		*(_DWORD*)(v6 + 232) = *(_DWORD*)(a3 + 168);
		*(_QWORD*)(v6 + 264) = 0i64;
		sub_1403705B0((__int64*)(v6 + 256), *(int**)(a3 + 184), *(unsigned int*)(a3 + 180));
		*(_DWORD*)(v6 + 8) = *(_DWORD*)(a3 + 16);
		*(_DWORD*)(v6 + 12) = *(_DWORD*)(a3 + 192);
		v10 = *(_DWORD*)(a2 + 16) == *(_DWORD*)(v6 + 16) && *(_QWORD*)(a2 + 24) == *(_QWORD*)(v6 + 24);
		*(_DWORD*)(v6 + 304) = v10;
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 16i64))(v6, a2);
		if ((int)sub_14079EC20(a2, v6) < 0)
		{
			(**(void(__fastcall***)(__int64, __int64))v6)(v6, 1i64);
			sub_1400035B0();
		}
	}
}
// 1406071CA: conditional instruction was optimized away because rdx.8!=0
// 140B6F2F8: using guessed type __int64 (__fastcall *off_140B6F2F8[270])();

