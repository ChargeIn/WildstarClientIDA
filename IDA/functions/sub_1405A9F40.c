//----- (00000001405A9F40) ----------------------------------------------------
__int64 __fastcall sub_1405A9F40(__int64 a1, __int64 a2)
{
	unsigned int v2; // edi
	__int64 v3; // rbx
	int v4; // eax
	__int64 v6; // rbp
	__int128* v8; // rcx
	__int128 v9; // xmm0
	int* v10; // rax
	unsigned int v11; // ecx
	_DWORD* v12; // r14
	unsigned int v13; // eax
	unsigned int v14; // ebx
	__int64(__fastcall * v15)(wchar_t**, _QWORD, __int64); // rax
	__int64 v16; // rbp
	unsigned int* v17; // rax
	unsigned int* v18; // rcx
	unsigned __int64 v19; // rax

	v2 = 0;
	v3 = a1 + 8;
	*(_QWORD*)a1 = &off_140B6D000;
	v4 = dword_140C1E744;
	*(_DWORD*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_DWORD*)(a1 + 184) = 0;
	*(_DWORD*)(a1 + 188) = ++v4;
	v6 = 1i64;
	*(_DWORD*)(a1 + 192) = 1;
	*(_QWORD*)(a1 + 208) = 0i64;
	*(_QWORD*)(a1 + 216) = 0i64;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_QWORD*)(a1 + 232) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_DWORD*)(a1 + 272) = 0;
	*(_QWORD*)(a1 + 280) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 312) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 360) = 0i64;
	dword_140C1E744 = v4;
	sub_140019600((_QWORD*)(a1 + 368));
	*(_QWORD*)(a1 + 416) = 0i64;
	*(_QWORD*)(a1 + 424) = 0i64;
	*(_QWORD*)(a1 + 432) = 0i64;
	sub_140019600((_QWORD*)(a1 + 440));
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	v8 = (__int128*)a2;
	if ((((unsigned __int8)v3 | (unsigned __int8)a2) & 0xF) != 0)
	{
		sub_1407DB590((int*)v3, (int*)a2, 0xB0ui64);
	}
	else
	{
		do
		{
			v9 = *v8;
			v3 += 128i64;
			v8 += 8;
			*(_OWORD*)(v3 - 128) = v9;
			*(_OWORD*)(v3 - 112) = *(v8 - 7);
			*(_OWORD*)(v3 - 96) = *(v8 - 6);
			*(_OWORD*)(v3 - 80) = *(v8 - 5);
			*(_OWORD*)(v3 - 64) = *(v8 - 4);
			*(_OWORD*)(v3 - 48) = *(v8 - 3);
			*(_OWORD*)(v3 - 32) = *(v8 - 2);
			*(_OWORD*)(v3 - 16) = *(v8 - 1);
			--v6;
		} while (v6);
		*(_OWORD*)v3 = *v8;
		*(_OWORD*)(v3 + 16) = v8[1];
		*(_OWORD*)(v3 + 32) = v8[2];
	}
	v10 = sub_14018E9C0(*(int**)(a2 + 48));
	v11 = *(_DWORD*)(a1 + 64);
	*(_QWORD*)(a1 + 56) = v10;
	v12 = (_DWORD*)sub_1402070A0(v11);
	if (!v12)
		return a1;
	if (qword_140C63838)
	{
		v13 = qword_140C63838(off_140A6A8D8, qword_140C63858);
	LABEL_13:
		v14 = v13;
		goto LABEL_14;
	}
	if (dword_140C65340)
	{
		v14 = 0;
	}
	else
	{
		if ((int)sub_140205D40() >= 0)
		{
			v13 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63C30 + 40i64))(qword_140C63C30);
			goto LABEL_13;
		}
		v14 = 0;
	}
LABEL_14:
	if (!v14)
		goto LABEL_30;
	v15 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
	v16 = 0x50040000000000i64;
	while (!v15)
	{
		if (!dword_140C65340)
		{
			if ((int)sub_140205D40() >= 0)
			{
				v17 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C30 + 32i64))(
					qword_140C63C30,
					v2);
				goto LABEL_21;
			}
		LABEL_26:
			v15 = (__int64(__fastcall*)(wchar_t**, _QWORD, __int64))qword_140C63848;
		}
		if (++v2 >= v14)
			goto LABEL_30;
	}
	v17 = (unsigned int*)v15(off_140A6A8D8, v2, qword_140C63858);
LABEL_21:
	v18 = v17;
	if (!v17)
		goto LABEL_26;
	if (v17[3] != *v12)
		goto LABEL_26;
	if (v17[4])
		goto LABEL_26;
	v19 = v17[2];
	if ((unsigned int)v19 > 0x36 || !_bittest64(&v16, v19))
		goto LABEL_26;
	*(_DWORD*)(a1 + 184) = *v18;
LABEL_30:
	sub_1405AEE20(a1);
	return a1;
}
// 140A6A8D8: using guessed type wchar_t *off_140A6A8D8[2];
// 140B6D000: using guessed type __int64 (__fastcall *off_140B6D000)();
// 140C1E744: using guessed type int dword_140C1E744;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C30: using guessed type __int64 qword_140C63C30;
// 140C65340: using guessed type int dword_140C65340;

