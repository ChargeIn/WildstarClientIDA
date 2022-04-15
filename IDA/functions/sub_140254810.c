#include "../winhttp.h"

//----- (0000000140254810) ----------------------------------------------------
__int64 __fastcall sub_140254810(__int64 a1, int* a2)
{
	int v4; // r9d
	int v5; // r10d
	int v6; // r11d
	unsigned int v7; // ecx
	unsigned int* v8; // r8
	int v9; // edx
	int v10; // eax
	unsigned int v11; // esi
	unsigned int v12; // ebp
	int v13; // ebx
	unsigned int v14; // r14d
	unsigned int v15; // r15d
	__int64 v16; // r10
	unsigned int v17; // r12d
	unsigned int v18; // r15d
	__int64 v19; // r10
	unsigned int v20; // r14d
	unsigned int v21; // r14d
	unsigned int v22; // r15d
	unsigned int v23; // r14d
	unsigned int v24; // r15d
	unsigned int v25; // r14d
	unsigned int v26; // r15d
	__int64 v28; // [rsp+48h] [rbp-70h]
	unsigned int v29; // [rsp+50h] [rbp-68h] BYREF
	unsigned int v30; // [rsp+54h] [rbp-64h]
	unsigned int v31; // [rsp+58h] [rbp-60h]
	unsigned int v32; // [rsp+5Ch] [rbp-5Ch]
	unsigned int v33; // [rsp+60h] [rbp-58h]
	unsigned int v34; // [rsp+64h] [rbp-54h]
	unsigned int v35; // [rsp+68h] [rbp-50h]
	unsigned int v36; // [rsp+6Ch] [rbp-4Ch]
	unsigned int v37; // [rsp+70h] [rbp-48h]
	unsigned int v38; // [rsp+74h] [rbp-44h]
	unsigned int v39; // [rsp+78h] [rbp-40h]
	unsigned int v40; // [rsp+7Ch] [rbp-3Ch]
	unsigned int v41; // [rsp+80h] [rbp-38h]
	unsigned int v42; // [rsp+84h] [rbp-34h]

	sub_140255750(a1);
	v4 = *a2;
	if (*a2 <= 0 || a2[1] <= 0)
		return 2147500037i64;
	v5 = qword_140C77768;
	v6 = HIDWORD(qword_140C77768);
	v7 = 0;
	v8 = &v29;
	do
	{
		v8 += 2;
		v9 = v4 >> v7;
		v10 = a2[1] >> v7;
		if (v4 >> v7 < v5)
			v9 = v5;
		if (v10 < v6)
			v10 = v6;
		++v7;
		*(v8 - 2) = v9;
		*(v8 - 1) = v10;
	} while (v7 < 7);
	v11 = v30;
	v12 = v29;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v29,
		v30,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1648);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1656);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1664);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		0,
		0,
		0,
		a1 + 1672);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		0,
		0,
		0,
		a1 + 1680);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		0,
		0,
		0,
		a1 + 1688);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		17,
		5,
		0,
		0,
		0,
		a1 + 1696);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		17,
		5,
		0,
		0,
		0,
		a1 + 1704);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		17,
		5,
		0,
		0,
		0,
		a1 + 1712);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		23,
		5,
		0,
		0,
		0,
		a1 + 1720);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		16,
		5,
		0,
		0,
		0,
		a1 + 1728);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1936);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v12,
		v11,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1944);
	if (v13 < 0)
		goto LABEL_37;
	v14 = v32;
	v15 = v31;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v31,
		v32,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1952);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v15,
		v14,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1960);
	if (v13 < 0)
		goto LABEL_37;
	v16 = *(_QWORD*)qword_140C65670;
	v28 = a1 + 1968;
	v17 = v34;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(v16 + 88))(
		qword_140C65670,
		v33,
		v34,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1968);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v33,
		v17,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1976);
	if (v13 < 0)
		goto LABEL_37;
	v18 = v35;
	v19 = *(_QWORD*)qword_140C65670;
	v28 = a1 + 1984;
	v20 = v36;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(v19 + 88))(
		qword_140C65670,
		v35,
		v36,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1984);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v18,
		v20,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 1992);
	if (v13 < 0)
		goto LABEL_37;
	v21 = v38;
	v22 = v37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v37,
		v38,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 2000);
	if (v13 < 0)
		goto LABEL_37;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v22,
		v21,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 2008);
	if (v13 < 0)
		goto LABEL_37;
	v23 = v40;
	v24 = v39;
	v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
		qword_140C65670,
		v39,
		v40,
		1i64,
		0,
		5,
		1,
		0,
		0,
		a1 + 2016);
	if (v13 < 0
		|| (v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v24,
			v23,
			1i64,
			0,
			5,
			1,
			0,
			0,
			a1 + 2024),
			v13 < 0)
		|| (v25 = v42,
			v26 = v41,
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
				qword_140C65670,
				v41,
				v42,
				1i64,
				0,
				5,
				1,
				0,
				0,
				a1 + 2032),
			v13 < 0)
		|| (v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v26,
			v25,
			1i64,
			0,
			5,
			1,
			0,
			0,
			a1 + 2040),
			v13 < 0)
		|| (v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD, __int64, _DWORD, int, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
			qword_140C65670,
			v33,
			v17,
			1i64,
			0,
			5,
			1,
			0,
			0,
			a1 + 2048),
			v13 < 0))
	{
	LABEL_37:
		sub_140255750(a1);
		return (unsigned int)v13;
	}
	else
	{
		*(_DWORD*)(a1 + 1736) = v12;
		*(_DWORD*)(a1 + 1740) = v11;
		sub_140255150((_QWORD*)a1);
		return 0i64;
	}
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C77768: using guessed type __int64 qword_140C77768;

