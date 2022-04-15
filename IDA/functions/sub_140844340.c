//----- (0000000140844340) ----------------------------------------------------
__int64 __fastcall sub_140844340(__int64* a1, int* a2, __int64 a3)
{
	unsigned int v5; // r12d
	float v6; // xmm6_4
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r9
	int v10; // r13d
	__int64 v11; // rax
	__int64 v12; // rax
	int v13; // eax
	bool v14; // si
	int* v15; // r8
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	_DWORD* v19; // rsi
	__int64 v20; // r8
	int v21; // eax
	__int64 v22; // rdx
	int v24; // ebx
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	int v29[4]; // [rsp+48h] [rbp-59h] BYREF
	__int64 v30; // [rsp+58h] [rbp-49h] BYREF
	int v31; // [rsp+60h] [rbp-41h]
	int v32; // [rsp+68h] [rbp-39h] BYREF
	__int64 v33; // [rsp+70h] [rbp-31h]
	__int64 v34; // [rsp+78h] [rbp-29h]
	__int64 v35; // [rsp+80h] [rbp-21h]
	int v36; // [rsp+88h] [rbp-19h]
	__int16 v37; // [rsp+8Ch] [rbp-15h]
	int v38; // [rsp+90h] [rbp-11h] BYREF
	__int64 v39; // [rsp+98h] [rbp-9h]
	__int64 v40; // [rsp+A0h] [rbp-1h]
	__int64 v41; // [rsp+A8h] [rbp+7h]
	int v42; // [rsp+B0h] [rbp+Fh]
	__int16 v43; // [rsp+B4h] [rbp+13h]
	int* v44; // [rsp+110h] [rbp+6Fh] BYREF
	int v45; // [rsp+118h] [rbp+77h] BYREF
	int v46; // [rsp+120h] [rbp+7Fh] BYREF

	v44 = a2;
	v5 = 2;
	sub_140845010((__int64)v29, a1, *(_QWORD*)(a3 + 16), (float*)&v45);
	v6 = *(float*)v29;
	if (!sub_140844E80(*(float*)v29) || (v10 = sub_140844D60(v6, v7, v8, v9), v10 == 2))
	{
		v5 = 3;
	LABEL_20:
		nullsub_1(a1);
		return v5;
	}
	v34 = 0i64;
	v35 = 0i64;
	v11 = *(_QWORD*)(a3 + 16);
	v32 = v29[0];
	v33 = v11;
	v12 = *a1;
	v36 = 3;
	v37 = 256;
	v13 = (*(__int64(__fastcall**)(__int64*, int*))(v12 + 272))(a1, &v32);
	v14 = v13 != 2;
	if (v13 == 80 || v10 == 80)
		v14 = (unsigned int)sub_14084ECE0((__int64)a1, &v46) != 1;
	if (!v14)
	{
		v40 = 0i64;
		v41 = 0i64;
		v27 = *(_QWORD*)(a3 + 16);
		v38 = 0;
		v39 = v27;
		v28 = *a1;
		v5 = 3;
		v42 = 3;
		v43 = 256;
		(*(void(__fastcall**)(__int64*, int*))(v28 + 280))(a1, &v38);
		goto LABEL_20;
	}
	v15 = v44;
	if ((v44[8] & 0xFFFF0000) != 0x80000)
		goto LABEL_12;
	v5 = sub_140844840(&v44, a3);
	if (v5 == 1)
	{
		v15 = v44;
	LABEL_12:
		v18 = (*(__int64(__fastcall**)(_QWORD, __int64*, int*, __int64, int*, __int64, __int64))(**(_QWORD**)(a3 + 8)
			+ 32i64))(
				*(_QWORD*)(a3 + 8),
				a1,
				v15,
				a3,
				v29,
				v34,
				v35);
		v19 = (_DWORD*)v18;
		if (v18)
		{
			if (*(_DWORD*)a3)
			{
				v21 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v18 + 16i64))(
					v18,
					*(_QWORD*)(*(_QWORD*)(a3 + 144) + 16i64));
			}
			else
			{
				v20 = *(_QWORD*)v18;
				v30 = 0i64;
				v31 = 0;
				v21 = (*(__int64(__fastcall**)(__int64, __int64*))(v20 + 16))(v18, &v30);
			}
			if (v21 == 1)
			{
				v19[107] = v45;
				v19[102] = *(_DWORD*)(a3 + 140);
				sub_140844690((__int64)v19, *(__int64**)(a3 + 24), *(_DWORD*)(a3 + 136));
				return 1i64;
			}
			LOBYTE(v22) = 1;
			(*(void(__fastcall**)(_DWORD*, __int64))(*(_QWORD*)v19 + 24i64))(v19, v22);
			v24 = dword_140C10F20;
			(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v19 + 8i64))(v19, 0i64);
			sub_140881720(v24, (__int64)v19);
		}
		else
		{
			v40 = 0i64;
			v41 = 0i64;
			v25 = *(_QWORD*)(a3 + 16);
			v38 = 0;
			v39 = v25;
			v26 = *a1;
			v42 = 3;
			v43 = 256;
			(*(void(__fastcall**)(__int64*, int*))(v26 + 280))(a1, &v38);
		}
		goto LABEL_20;
	}
	v16 = *(_QWORD*)(a3 + 16);
	v40 = 0i64;
	v41 = 0i64;
	v17 = *a1;
	v38 = 0;
	v39 = v16;
	v42 = 3;
	v43 = 256;
	(*(void(__fastcall**)(__int64*, int*))(v17 + 280))(a1, &v38);
	return v5;
}
// 1408445EB: conditional instruction was optimized away because r12d.4 is in (1..2)
// 1408443DC: variable 'v7' is possibly undefined
// 1408443DC: variable 'v8' is possibly undefined
// 1408443DC: variable 'v9' is possibly undefined
// 140844566: variable 'v22' is possibly undefined
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C10F20: using guessed type int dword_140C10F20;

