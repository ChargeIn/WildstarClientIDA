#include "../winhttp.h"

//----- (00000001405C8BB0) ----------------------------------------------------
void __fastcall sub_1405C8BB0(__int64 a1, _QWORD* a2)
{
	int* v4; // rbp
	__int64* v5; // rcx
	__int64 v6; // rbx
	int v7; // edi
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // rax
	void* v11; // rdx
	__int64 v12; // rbx
	__int16* v13; // rax
	__int64 v14; // rbx
	__int16* v15; // rax
	__int64* v16; // rcx
	__int64 v17; // [rsp+30h] [rbp-18h] BYREF
	__int64 v18; // [rsp+38h] [rbp-10h]

	switch ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1))
	{
	case 1u:
		v4 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(a1 + 320), 0i64);
		if (!v4)
		{
			v5 = (__int64*)a2[85];
			if (v5)
				sub_1400C5810(v5);
		}
		v6 = qword_140C65898;
		v7 = *(_DWORD*)(a1 + 320);
		v18 = 0i64;
		v17 = 0i64;
		sub_1405CABD0(qword_140C65898 + 160, v7, &v17);
		sub_1405CABD0(v6 + 184, v7, &v17);
		sub_1405CABD0(v6 + 280, v7, &v17);
		sub_1405CABD0(v6 + 304, v7, &v17);
		v8 = v17;
		if (v18)
			(*(void(__fastcall**)(_QWORD*, void*, __int64))(*a2 + 120i64))(a2, &unk_1409F35B4, 3i64);
		else
			(*(void(__fastcall**)(_QWORD*, void*, __int64, int*, int))(*a2 + 120i64))(a2, &unk_1409F35CC, 2i64, v4, 1);
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		return;
	case 2u:
		v9 = sub_140778230(*(_QWORD*)(qword_140C65898 + 29520), *(_DWORD*)(a1 + 332));
		if (!v9)
			goto LABEL_21;
		(*(void(__fastcall**)(_QWORD*, void*, __int64, _QWORD))(*a2 + 120i64))(
			a2,
			&unk_1409F3684,
			8i64,
			*(_QWORD*)(v9 + 16));
		return;
	case 7u:
		sub_14039DFB0();
		v10 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
		if (!v10)
			goto LABEL_21;
		v11 = &unk_1409F3654;
		goto LABEL_15;
	case 0xAu:
		if (sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 512)))
			goto LABEL_13;
		return;
	case 0xBu:
		if (!sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 512)))
			goto LABEL_21;
		v12 = *a2;
		v13 = sub_1405C6000(*(unsigned int*)(a1 + 516));
		(*(void(__fastcall**)(_QWORD*, void*, __int64, _QWORD, __int16*))(v12 + 120))(
			a2,
			&unk_1409F36C4,
			13i64,
			*(unsigned int*)(a1 + 516),
			v13);
		break;
	case 0xCu:
		v14 = *a2;
		v15 = sub_1405C6000(*(unsigned int*)(a1 + 516));
		(*(void(__fastcall**)(_QWORD*, void*, __int64, _QWORD, __int16*))(v14 + 120))(
			a2,
			&unk_1409F3644,
			13i64,
			*(unsigned int*)(a1 + 516),
			v15);
		return;
	default:
	LABEL_13:
		v10 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)a1 + 128i64))(a1, 1i64);
		if (v10)
		{
			v11 = &unk_1409F3614;
		LABEL_15:
			(*(void(__fastcall**)(_QWORD*, void*, __int64, __int64))(*a2 + 120i64))(a2, v11, 4i64, v10);
		}
		else
		{
		LABEL_21:
			v16 = (__int64*)a2[85];
			if (v16)
				sub_1400C5810(v16);
		}
		break;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

