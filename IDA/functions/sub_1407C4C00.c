#include "../winhttp.h"

//----- (00000001407C4C00) ----------------------------------------------------
__int64 __fastcall sub_1407C4C00(__int64 a1, _DWORD* a2)
{
	int v2; // xmm1_4
	__int64 v5; // rcx
	int v6; // edi
	__int64 v7; // rax
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v13; // rcx
	__int64 v14; // rdx
	int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rdx
	__int64* i; // rbx
	__int64 v19; // [rsp+80h] [rbp+8h] BYREF
	__int64 v20; // [rsp+88h] [rbp+10h] BYREF

	v2 = a2[9];
	*(_DWORD*)(a1 + 2972) = a2[8];
	*(_DWORD*)(a1 + 2976) = v2;
	*(_DWORD*)(a1 + 2980) = 0;
	v5 = *(_QWORD*)(a1 + 6560);
	if (!v5 || a2[11] != *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 24i64))(v5) + 4))
	{
		v20 = 0i64;
		v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 120i64))(
			qword_140C65670,
			(unsigned int)a2[11],
			0i64,
			0i64,
			5,
			1,
			0,
			0,
			&v20);
		if (v6 < 0)
		{
		LABEL_21:
			if (v20)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
			return (unsigned int)v6;
		}
		v7 = v20;
		if (*(_QWORD*)(a1 + 6560) != v20)
		{
			if (v20)
			{
				(**(void(__fastcall***)(__int64))v20)(v20);
				v7 = v20;
			}
			v8 = *(_QWORD*)(a1 + 6560);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				v7 = v20;
			}
			*(_QWORD*)(a1 + 6560) = v7;
		}
		v9 = *(_QWORD*)(a1 + 6560);
		v19 = 0i64;
		if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 24i64))(v9) + 20) > 1u)
		{
			v6 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 120i64))(
				qword_140C65670,
				(unsigned int)a2[11],
				0i64,
				0i64,
				5,
				1,
				0,
				0,
				&v19);
			if (v6 < 0)
				goto LABEL_19;
		}
		v10 = v19;
		if (*(_QWORD*)(a1 + 6568) != v19)
		{
			if (v19)
			{
				(**(void(__fastcall***)(__int64))v19)(v19);
				v10 = v19;
			}
			v11 = *(_QWORD*)(a1 + 6568);
			if (v11)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
				v10 = v19;
			}
			*(_QWORD*)(a1 + 6568) = v10;
		}
		v6 = (*(__int64(__fastcall**)(__int64, _DWORD*))(*(_QWORD*)a1 + 328i64))(a1, a2);
		if (v6 < 0)
		{
		LABEL_19:
			if (v19)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
			goto LABEL_21;
		}
		if (v19)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
		if (v20)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	}
	v13 = *(_QWORD*)(a1 + 6576);
	if (!v13 || a2[10] != *(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13) + 4))
	{
		v14 = (unsigned int)a2[10];
		v19 = 0i64;
		v15 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v14,
			(unsigned int)v14,
			1i64,
			0,
			5,
			1,
			0,
			0,
			&v19);
		v16 = v19;
		v6 = v15;
		if (v15 < 0)
		{
			if (v19)
				(*(void (**)(void))(*(_QWORD*)v19 + 8i64))();
			return (unsigned int)v6;
		}
		if (*(_QWORD*)(a1 + 6576) != v19)
		{
			if (v19)
			{
				(**(void (***)(void))v19)();
				v16 = v19;
			}
			v17 = *(_QWORD*)(a1 + 6576);
			if (v17)
			{
				(*(void(__fastcall**)(_QWORD))(*(_QWORD*)v17 + 8i64))(*(_QWORD*)(a1 + 6576));
				v16 = v19;
			}
			*(_QWORD*)(a1 + 6576) = v16;
		}
		if (v16)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	}
	for (i = *(__int64**)(a1 + 1248); i; i = (__int64*)i[13])
		sub_1407D20E0(i);
	return 0i64;
}
// 140C65670: using guessed type __int64 qword_140C65670;

