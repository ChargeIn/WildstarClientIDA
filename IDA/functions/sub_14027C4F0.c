#include "../winhttp.h"

//----- (000000014027C4F0) ----------------------------------------------------
__int64 __fastcall sub_14027C4F0(__int64 a1, int* a2, __int64* a3)
{
	const __m128i* v4; // rbx
	unsigned __int64 v6; // rdi
	_QWORD* v7; // rbx
	int* v8; // rax
	__int64 v9; // rbx
	int v10; // eax
	void(__fastcall * **v11)(_QWORD); // rcx
	int v12; // esi
	__int64 v13; // rcx
	__int64 v15; // rbx
	HANDLE EventW; // rcx
	__int64 v17; // [rsp+20h] [rbp-248h] BYREF
	__m128i* v18; // [rsp+28h] [rbp-240h] BYREF
	__m128i v19[33]; // [rsp+30h] [rbp-238h] BYREF

	v4 = (const __m128i*)a2;
	v18 = (__m128i*)a2;
	if (!a3 || !a2 || !*(_WORD*)a2)
		return 2147942487i64;
	if (sub_1401B5110(*(__int64*)&qword_140C63788, v19, (__int64)a3, (__int64)a2))
		v4 = sub_140263F30(v19, (__int64)v4);
	v18 = (__m128i*)v4;
	sub_14003D8F0(&v17, a1 + 24);
	v6 = (*(__int64(__fastcall**)(__m128i**))(a1 + 7160))(&v18);
	v7 = *(_QWORD**)(*(_QWORD*)(a1 + 7152) + 8 * (v6 % *(_QWORD*)(a1 + 7144)));
	if (!v7)
		goto LABEL_10;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(__m128i**, _QWORD*))(a1 + 7168))(&v18, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			goto LABEL_10;
	}
	if (v7 == (_QWORD*)-24i64)
	{
	LABEL_10:
		v8 = sub_14018B280(152i64, 0);
		v9 = (__int64)v8;
		if (v8)
		{
			*(_QWORD*)v8 = &off_140B61F10;
			*((_QWORD*)v8 + 12) = 0i64;
			*((_QWORD*)v8 + 13) = 0i64;
			*((_QWORD*)v8 + 14) = 0i64;
			*((_QWORD*)v8 + 15) = 0i64;
			*((_QWORD*)v8 + 10) = 0i64;
			v8[22] = 0;
			*((_QWORD*)v8 + 17) = 0i64;
			*((_QWORD*)v8 + 18) = 0i64;
			v8[2] = 1;
			*((_QWORD*)v8 + 2) = a1;
			*((_QWORD*)v8 + 3) = 0i64;
			v8[8] = 0;
			v8[18] = 0;
			*((_QWORD*)v8 + 5) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			*((_QWORD*)v8 + 7) = 0i64;
			v10 = *(_DWORD*)(a1 + 240) - 1;
			*(_DWORD*)(v9 + 128) = -2147483638;
			*(_DWORD*)(v9 + 76) = v10;
		}
		else
		{
			v9 = 0i64;
		}
		v12 = sub_1402AAD80(v9, v18->m128i_i32);
		if (v12 < 0)
		{
			if (v9)
			{
				sub_1402AAB20(v9);
				sub_14018B900(v9, 0);
			}
			goto LABEL_20;
		}
		*a3 = v9;
	}
	else
	{
		v11 = (void(__fastcall***)(_QWORD))v7[3];
		*a3 = (__int64)v11;
		(**v11)(v11);
	}
	v12 = 0;
LABEL_20:
	v13 = v17;
	if (*(_QWORD*)(v17 + 8) <= 1ui64)
	{
		*(_DWORD*)v17 = 0;
		_InterlockedExchange64((volatile __int64*)(v13 + 8), 0i64);
		if (*(_QWORD*)(v17 + 16))
		{
			v15 = v17;
			if (!*(_QWORD*)(v17 + 24))
			{
				EventW = CreateEventW(0i64, 0, 0, 0i64);
				if (_InterlockedCompareExchange64((volatile signed __int64*)(v15 + 24), (signed __int64)EventW, 0i64))
					CloseHandle(EventW);
			}
			SetEvent(*(HANDLE*)(v15 + 24));
		}
		return (unsigned int)v12;
	}
	else
	{
		--* (_QWORD*)(v17 + 8);
		return (unsigned int)v12;
	}
}
// 140B61F10: using guessed type __int64 (__fastcall *off_140B61F10)();
// 14027C4F0: using guessed type __m128i var_238[33];

