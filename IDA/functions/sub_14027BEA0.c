#include "../winhttp.h"

//----- (000000014027BEA0) ----------------------------------------------------
__int64 __fastcall sub_14027BEA0(__int64 a1, __m128i* a2, __int64* a3)
{
	unsigned __int64 v5; // rdi
	_QWORD* v6; // rbx
	int* v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	void(__fastcall * **v10)(_QWORD); // rcx
	int v11; // esi
	__int64 v12; // rcx
	__int64 v13; // rbx
	HANDLE EventW; // rcx
	__int64 v16; // [rsp+20h] [rbp-248h] BYREF
	__m128i* v17; // [rsp+28h] [rbp-240h] BYREF
	int v18[132]; // [rsp+30h] [rbp-238h] BYREF

	v17 = a2;
	if (!a3 || !a2 || !a2->m128i_i16[0])
		return 2147942487i64;
	v17 = sub_140264000(v18, (unsigned __int64)a2, a2, *(_DWORD*)(a1 + 176));
	sub_14003D8F0(&v16, a1 + 24);
	v5 = (*(__int64(__fastcall**)(__m128i**))(a1 + 7080))(&v17);
	v6 = *(_QWORD**)(*(_QWORD*)(a1 + 7072) + 8 * (v5 % *(_QWORD*)(a1 + 7064)));
	if (!v6)
		goto LABEL_8;
	while (v5 != *v6 || !(*(unsigned int(__fastcall**)(__m128i**, _QWORD*))(a1 + 7088))(&v17, v6 + 2))
	{
		v6 = (_QWORD*)v6[1];
		if (!v6)
			goto LABEL_8;
	}
	if (v6 == (_QWORD*)-24i64)
	{
	LABEL_8:
		v7 = sub_14018B280(168i64, 0);
		v8 = (__int64)v7;
		if (v7)
		{
			*(_QWORD*)v7 = off_140B61EA8;
			*((_QWORD*)v7 + 7) = 0i64;
			*((_QWORD*)v7 + 8) = 0i64;
			*((_QWORD*)v7 + 15) = 0i64;
			*((_QWORD*)v7 + 16) = 0i64;
			*((_QWORD*)v7 + 17) = 0i64;
			*((_QWORD*)v7 + 18) = 0i64;
			*((_QWORD*)v7 + 13) = 0i64;
			v7[28] = 0;
			*((_QWORD*)v7 + 19) = 0i64;
			*((_QWORD*)v7 + 20) = 0i64;
			v7[2] = 1;
			*((_QWORD*)v7 + 2) = a1;
			*((_QWORD*)v7 + 4) = 0i64;
			v7[10] = 0;
			*((_QWORD*)v7 + 6) = 0i64;
			*((_QWORD*)v7 + 9) = 0i64;
			*((_QWORD*)v7 + 10) = 0i64;
			v9 = *(_DWORD*)(a1 + 240);
			*(_QWORD*)(v8 + 96) = 0i64;
			*(_DWORD*)(v8 + 88) = -2147483638;
			*(_DWORD*)(v8 + 92) = v9 - 1;
		}
		else
		{
			v8 = 0i64;
		}
		v11 = sub_1402A9290(v8, v17->m128i_i32);
		if (v11 < 0)
		{
			if (v8)
			{
				sub_1402A9100(v8);
				sub_14018B900(v8, 0);
			}
			goto LABEL_18;
		}
		*a3 = v8;
	}
	else
	{
		v10 = (void(__fastcall***)(_QWORD))v6[3];
		*a3 = (__int64)v10;
		(**v10)(v10);
	}
	v11 = 0;
LABEL_18:
	v12 = v16;
	if (*(_QWORD*)(v16 + 8) <= 1ui64)
	{
		*(_DWORD*)v16 = 0;
		_InterlockedExchange64((volatile __int64*)(v12 + 8), 0i64);
		if (*(_QWORD*)(v16 + 16))
		{
			v13 = v16;
			if (!*(_QWORD*)(v16 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v13 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v13 + 24));
		}
	}
	else
	{
		--* (_QWORD*)(v16 + 8);
	}
	return (unsigned int)v11;
}
// 140B61EA8: using guessed type __int64 (__fastcall *off_140B61EA8[12])();
// 14027BEA0: using guessed type int var_238[132];

