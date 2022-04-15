#include "../winhttp.h"

//----- (000000014035ED70) ----------------------------------------------------
__int64 __fastcall sub_14035ED70(__int64 a1, __int64 a2, __int64 a3, __int64* a4)
{
	__int64 v5; // rax
	__int64 v6; // r8
	__int64 v7; // rbp
	unsigned int v8; // ebx
	_OWORD* v9; // rsi
	__int128* v10; // r14
	__int64 v11; // rcx
	int v12; // eax
	__int128 v13; // xmm0
	void* v15; // [rsp+20h] [rbp-68h]
	__int128 v16; // [rsp+30h] [rbp-58h] BYREF
	int v17; // [rsp+44h] [rbp-44h]
	int v18; // [rsp+50h] [rbp-38h] BYREF
	__int64 v19; // [rsp+58h] [rbp-30h]
	int v20; // [rsp+64h] [rbp-24h]

	LODWORD(v16) = 1;
	v18 = 1;
	*((_QWORD*)&v16 + 1) = a3;
	v19 = a2;
	v17 = 0;
	v20 = 0;
	v15 = &unk_140C3FE88;
	(*(void(__fastcall**)(__int64, int*, __int128*))(*(_QWORD*)qword_140C65670 + 520i64))(
		qword_140C65670,
		&v18,
		&v16);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
	LODWORD(v15) = 0;
	v5 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, void*))(*(_QWORD*)qword_140C65670 + 272i64))(
		qword_140C65670,
		144i64,
		0i64,
		0i64,
		v15);
	v7 = v5;
	if (v5)
	{
		v8 = 0;
		v9 = (_OWORD*)v5;
		v16 = 0i64;
		v10 = &v16;
		do
		{
			v11 = *a4;
			if (*a4)
			{
				v12 = *(_DWORD*)(v11 + 76);
				*v9 = *(_OWORD*)(v11 + 128);
				v13 = *(_OWORD*)(v11 + 144);
				*(_DWORD*)v10 = v12;
				v9[1] = v13;
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					v8,
					*(_QWORD*)(*a4 + 80),
					0i64,
					0i64);
				(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 352i64))(
					qword_140C65670,
					v8 + 4,
					*(_QWORD*)(*a4 + 88),
					0i64,
					0i64);
			}
			++v8;
			v9 += 2;
			v10 = (__int128*)((char*)v10 + 4);
			++a4;
		} while (v8 < 4);
		*(_OWORD*)(v7 + 128) = v16;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 280i64))(qword_140C65670);
	}
	(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 664i64))(
		qword_140C65670,
		0xFFFFFFFFi64,
		v6,
		0i64,
		0i64,
		0i64);
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 672i64))(qword_140C65670);
}
// 14035EEFF: variable 'v6' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

