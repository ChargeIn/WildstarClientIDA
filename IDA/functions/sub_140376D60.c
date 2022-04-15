#include "../winhttp.h"

//----- (0000000140376D60) ----------------------------------------------------
__int64 __fastcall sub_140376D60(__int64 a1, _OWORD* a2, __int64 a3, _QWORD* a4, __int64 a5)
{
	int v8; // ecx
	int* v9; // rax
	int* v10; // rdi
	__int64 v11; // r9
	__int64 result; // rax
	__int64 v13; // rax
	__int64* v14; // rdi
	__int64* v15; // rcx
	__int64 v16; // rax
	__int64* v17; // rsi
	__int64 v18; // rax
	__int64 v19; // [rsp+38h] [rbp-10h]

	if (*a4)
	{
		if (a5)
			v8 = *(_DWORD*)(a5 + 96);
		else
			v8 = 0;
		*(_QWORD*)(a1 + 88) = *a4;
		LODWORD(v19) = v8;
		*(_QWORD*)(a1 + 96) = v19;
	}
	v9 = sub_14018B280(64i64, 0);
	v10 = v9;
	if (v9)
	{
		*((_QWORD*)v9 + 2) = 0i64;
		v9[7] = 0;
		*(_QWORD*)v9 = off_140B660C0;
		*((_OWORD*)v9 + 2) = 0i64;
		*((_OWORD*)v9 + 3) = 0i64;
	}
	else
	{
		v10 = 0i64;
	}
	*((_QWORD*)v10 + 1) = a1;
	v11 = 2i64;
	if ((*(_DWORD*)(*(_QWORD*)(a1 + 16) + 128i64) & 0x8000000) == 0)
		v11 = 18i64;
	result = (*(__int64(__fastcall**)(_QWORD, __int64, int*, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 40i64)
		+ 40i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 40i64),
			a3,
			v10 + 4,
			v11);
	if ((int)result >= 0)
	{
		v10[6] &= ~1u;
		*(_QWORD*)(a1 + 48) = v10;
		v13 = (*(__int64(__fastcall**)(int*))(*(_QWORD*)v10 + 56i64))(v10);
		v14 = (__int64*)v13;
		if (v13)
		{
			(*(void(__fastcall**)(__int64, __int64(__fastcall*)(__int64, __int64, __int64, int, int, __int64), __int64))(*(_QWORD*)v13 + 648i64))(
				v13,
				sub_140379300,
				a1);
			sub_1403793C0(a1, v14, *(_DWORD*)(a1 + 364), 0, 32);
			(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)a1 + 304i64))(a1, *(unsigned int*)(a1 + 364));
		}
		sub_1403772E0(a1, a2);
		v15 = (__int64*)(*(_QWORD*)(a1 + 16) + 5080i64);
		if (!*(_QWORD*)(a1 + 1296))
		{
			*(_QWORD*)(a1 + 1296) = v15;
			*(_QWORD*)(a1 + 1304) = *v15;
			*v15 = a1;
			v16 = *(_QWORD*)(a1 + 1304);
			if (v16)
				*(_QWORD*)(v16 + 1296) = a1 + 1304;
		}
		if (a5)
		{
			*(_QWORD*)(a1 + 40) = a5;
			v17 = (__int64*)(a5 + 64);
			if (!*(_QWORD*)(a1 + 1200))
			{
				*(_QWORD*)(a1 + 1200) = v17;
				*(_QWORD*)(a1 + 1208) = *v17;
				*v17 = a1;
				v18 = *(_QWORD*)(a1 + 1208);
				if (v18)
					*(_QWORD*)(v18 + 1200) = a1 + 1208;
			}
		}
		return 0i64;
	}
	return result;
}
// 140376DA9: variable 'v19' is possibly undefined
// 140B660C0: using guessed type __int64 (__fastcall *off_140B660C0[79])();

