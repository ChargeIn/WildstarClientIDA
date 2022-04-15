//----- (00000001400E18A0) ----------------------------------------------------
__int64 __fastcall sub_1400E18A0(__int64 a1)
{
	int* v2; // rax
	int* v3; // rax
	int* v4; // rax
	_QWORD* v5; // rdi
	int* v6; // rax
	__int64* v7; // rcx
	__int64 v8; // rax
	__int64* v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // esi
	unsigned int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rbx
	unsigned __int64 v15; // rax
	_WORD* v16; // rcx
	__int64 v17; // rax
	unsigned __int64 v18; // rbp
	int** v19; // r14
	int* v20; // rax
	int* v21; // rcx
	int v23; // [rsp+20h] [rbp-48h] BYREF
	__int64 v24; // [rsp+28h] [rbp-40h]
	_QWORD* (__fastcall * v25)(__int64); // [rsp+30h] [rbp-38h]
	__int64 v26; // [rsp+38h] [rbp-30h]
	__int64 v27; // [rsp+70h] [rbp+8h] BYREF

	sub_1401445A0(a1);
	*(_QWORD*)(a1 + 152) = &off_140B5C6F8;
	*(_QWORD*)(a1 + 160) = 0i64;
	v2 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 176) = v2;
	*(_QWORD*)(a1 + 184) = 0i64;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 16i64) = *(_QWORD*)(a1 + 176);
	*(_QWORD*)(*(_QWORD*)(a1 + 176) + 24i64) = *(_QWORD*)(a1 + 176);
	sub_140155450(a1 + 200);
	*(_QWORD*)(a1 + 716) = 0i64;
	v3 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 736) = v3;
	*(_BYTE*)v3 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 16i64) = *(_QWORD*)(a1 + 736);
	*(_QWORD*)(*(_QWORD*)(a1 + 736) + 24i64) = *(_QWORD*)(a1 + 736);
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 800) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 784) = v4;
	*(_QWORD*)(a1 + 792) = v4;
	*(_QWORD*)(a1 + 800) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	sub_1401095E0(a1 + 1848);
	v5 = (_QWORD*)(a1 + 1920);
	sub_1400ED8F0((_QWORD*)(a1 + 1920), 0xFA1ui64);
	v6 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 1976) = 0i64;
	*(_QWORD*)(a1 + 1968) = v6;
	*(_BYTE*)v6 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 16i64) = *(_QWORD*)(a1 + 1968);
	*(_QWORD*)(*(_QWORD*)(a1 + 1968) + 24i64) = *(_QWORD*)(a1 + 1968);
	*(_QWORD*)(a1 + 1992) = 0i64;
	*(_QWORD*)(a1 + 1832) = 0i64;
	*(_QWORD*)(a1 + 1840) = 0i64;
	*(_QWORD*)(a1 + 1904) = 0i64;
	*(_QWORD*)(a1 + 1912) = 0i64;
	qword_140C63650 = a1;
	sub_1407E4830((int*)(a1 + 808), 0i64, 0x400ui64);
	*(_BYTE*)(a1 + 836) = 1;
	*(_WORD*)(a1 + 1065) = 257;
	*(_BYTE*)(a1 + 934) = 1;
	*(_BYTE*)(a1 + 1064) = 1;
	*(_DWORD*)(a1 + 1320) = 16843009;
	*(_DWORD*)(a1 + 1326) = 16843009;
	*(_DWORD*)(a1 + 1330) = 16843009;
	*(_WORD*)(a1 + 1324) = 257;
	*(_WORD*)(a1 + 1068) = 257;
	*(_BYTE*)(a1 + 889) = 1;
	*(_BYTE*)(a1 + 1454) = 1;
	*(_BYTE*)(a1 + 1464) = 1;
	*(_WORD*)(a1 + 1450) = 257;
	*(_BYTE*)(a1 + 1449) = 1;
	*(_WORD*)(a1 + 1077) = 257;
	*(_BYTE*)(a1 + 1079) = 1;
	*(_BYTE*)(a1 + 1456) = 1;
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 192i64))(qword_140C65670, a1 + 1896);
	v7 = *(__int64**)(a1 + 1896);
	v25 = sub_1400E2420;
	v8 = *v7;
	v23 = 0;
	v24 = a1;
	v26 = 0i64;
	(*(void(__fastcall**)(__int64*, _QWORD, int*))(v8 + 24))(v7, 0i64, &v23);
	v9 = *(__int64**)(a1 + 1896);
	v25 = sub_1400E24B0;
	v10 = *v9;
	v23 = 0;
	v24 = a1;
	v26 = 0i64;
	(*(void(__fastcall**)(__int64*, __int64, int*))(v10 + 24))(v9, 1i64, &v23);
	v11 = 0;
	while (1)
	{
		if (qword_140C63838)
		{
			v12 = qword_140C63838(off_140A6B1D0, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C63DD0 || (int)sub_140210BE0() < 0)
			break;
		v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64378 + 40i64))(qword_140C64378);
	LABEL_9:
		if (v11 >= v12)
			break;
		if (qword_140C63848)
		{
			v13 = qword_140C63848(off_140A6B1D0, v11, qword_140C63858);
		LABEL_17:
			v14 = v13;
			goto LABEL_18;
		}
		if (dword_140C63DD0)
		{
			v14 = 0i64;
		}
		else
		{
			if ((int)sub_140210BE0() >= 0)
			{
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64378 + 32i64))(qword_140C64378, v11);
				goto LABEL_17;
			}
			v14 = 0i64;
		}
	LABEL_18:
		v15 = *(_QWORD*)(v14 + 8);
		if (!v15 || v15 > qword_140C3FE70 || !(v15 + qword_140C3FE68))
			goto LABEL_32;
		v16 = 0i64;
		if (v15 <= qword_140C3FE70)
			v16 = (_WORD*)(v15 + qword_140C3FE68);
		if (*v16)
		{
			if (v15 <= qword_140C3FE70)
				v17 = qword_140C3FE68 + v15;
			else
				v17 = 0i64;
			v27 = v17;
			if (*v5 == *(_QWORD*)(a1 + 1928))
				sub_1400290D0(a1 + 1920);
			v18 = (*(__int64(__fastcall**)(__int64*))(a1 + 1944))(&v27);
			v19 = (int**)(*(_QWORD*)(a1 + 1936) + 8 * (v18 % *(_QWORD*)(a1 + 1928)));
			v20 = sub_14018B280(32i64, 0);
			if (!v20)
			{
				*v19 = 0i64;
				++* v5;
				goto LABEL_32;
			}
			v21 = *v19;
			*(_QWORD*)v20 = v18;
			*((_QWORD*)v20 + 1) = v21;
			*((_QWORD*)v20 + 2) = v27;
			v20[6] = *(_DWORD*)(v14 + 16);
			*v19 = v20;
			++* v5;
			++v11;
		}
		else
		{
		LABEL_32:
			++v11;
		}
	}
	sub_140155570(a1 + 200);
	return a1;
}
// 1400E1C42: conditional instruction was optimized away because rax.8!=0
// 1400E1C5A: conditional instruction was optimized away because rax.8!=0
// 140A6B1D0: using guessed type wchar_t *off_140A6B1D0[2];
// 140B5C6F8: using guessed type __int64 (__fastcall *off_140B5C6F8)();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63DD0: using guessed type int dword_140C63DD0;
// 140C64378: using guessed type __int64 qword_140C64378;
// 140C65670: using guessed type __int64 qword_140C65670;

