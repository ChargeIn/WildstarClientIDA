//----- (00000001403C65B0) ----------------------------------------------------
void __fastcall sub_1403C65B0(__int64 a1, __int64 a2)
{
	int* v4; // rax
	__int64 v5; // r14
	__int64 v6; // rsi
	int v7; // r15d
	__int64 v8; // r8
	int* v9; // rdx
	int v10; // ebx
	__int64 v11; // rcx
	__int64 v12; // rcx
	int v13; // esi
	__int64 v14; // r8
	int* v15; // rdx
	int v16; // ebx
	__int64 v17; // rcx
	__int64 v18; // rbx
	int* v19; // rsi
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rbx
	_QWORD* v24; // rcx
	_QWORD* v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // [rsp+28h] [rbp-E0h] BYREF
	__int64 v29; // [rsp+30h] [rbp-D8h] BYREF
	__int128 v30; // [rsp+38h] [rbp-D0h]
	__int64 v31; // [rsp+48h] [rbp-C0h]
	int v32; // [rsp+50h] [rbp-B8h]
	unsigned __int32 v33; // [rsp+54h] [rbp-B4h]
	__int64 v34; // [rsp+58h] [rbp-B0h]
	__int64 v35; // [rsp+60h] [rbp-A8h]
	__int64 v36; // [rsp+68h] [rbp-A0h]
	int v37; // [rsp+70h] [rbp-98h]
	int v38; // [rsp+74h] [rbp-94h]
	int v39; // [rsp+78h] [rbp-90h]
	int v40; // [rsp+7Ch] [rbp-8Ch]
	int v41; // [rsp+80h] [rbp-88h]
	__int128 v42; // [rsp+88h] [rbp-80h]
	int v43; // [rsp+98h] [rbp-70h] BYREF
	__int64 v44; // [rsp+A0h] [rbp-68h] BYREF
	__int128 v45; // [rsp+A8h] [rbp-60h]
	__int64 v46; // [rsp+B8h] [rbp-50h]
	int v47; // [rsp+C0h] [rbp-48h]
	unsigned __int32 v48; // [rsp+C4h] [rbp-44h]
	int v49; // [rsp+C8h] [rbp-40h]
	__int64 v50; // [rsp+D0h] [rbp-38h]
	__int64 v51; // [rsp+D8h] [rbp-30h]
	int v52; // [rsp+E0h] [rbp-28h]
	int v53; // [rsp+E4h] [rbp-24h]
	int v54; // [rsp+E8h] [rbp-20h]
	int v55; // [rsp+ECh] [rbp-1Ch]
	int v56; // [rsp+F0h] [rbp-18h]
	__int128 v57; // [rsp+F8h] [rbp-10h]

	v4 = sub_14018B280(736i64, 0);
	if (v4)
		v5 = sub_1403C48E0((__int64)v4, a2 + 40);
	else
		v5 = 0i64;
	if (*(_DWORD*)(a2 + 116) == 4)
	{
		if (*(_DWORD*)(a2 + 240))
			v13 = *(_DWORD*)(a2 + 244);
		else
			v13 = -1;
		v14 = *(_QWORD*)(a2 + 24);
		v15 = *(int**)(a2 + 16);
		v45 = 0i64;
		v16 = *(_DWORD*)(a2 + 268);
		v43 = dword_140C636A8;
		v46 = 0i64;
		sub_14001C1B0(&v44, v15, v14);
		v57 = xmmword_140B7B240;
		v50 = 0i64;
		v51 = v5;
		v52 = v13;
		v47 = 0;
		v49 = 0;
		v48 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85).m128_u32[0];
		v53 = v16;
		v54 = 0;
		v55 = -1;
		v56 = 0;
		if (v5)
			(**(void(__fastcall***)(__int64))v5)(v5);
		v30 = 0i64;
		LODWORD(v28) = v43;
		v31 = 0i64;
		sub_14001C1B0(&v29, (int*)v45, *((__int64*)&v45 + 1));
		v32 = v47;
		v33 = v48;
		v17 = v51;
		v37 = v52;
		LODWORD(v34) = v49;
		v42 = v57;
		v38 = v53;
		v35 = v50;
		v39 = v54;
		v36 = v51;
		v40 = v55;
		v41 = v56;
		if (v50)
		{
			(**(void(__fastcall***)(__int64))v50)(v50);
			v17 = v36;
		}
		if (v17)
		{
			(**(void(__fastcall***)(__int64))v17)(v17);
			v17 = v36;
		}
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 48i64))(v17);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 96i64))(v36);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v18 = *(_QWORD*)(a1 + 32160);
		v19 = sub_14018B280(128i64, 0);
		if (v19 != (int*)-16i64)
			sub_140474E10((__int64)(v19 + 4), (__int64)&v28);
		v20 = qword_140C65898;
		*(_QWORD*)v19 = v18;
		*((_QWORD*)v19 + 1) = *(_QWORD*)(v18 + 8);
		**(_QWORD**)(v18 + 8) = v19;
		*(_QWORD*)(v18 + 8) = v19;
		if (v20)
		{
			v21 = *(_QWORD*)(v20 + 29504);
			if (v21)
				sub_1400EA3E0(v21, "MessageFinished", byte_1409EB834, &v28);
		}
		if (v35)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
			v35 = 0i64;
		}
		if (v36)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
			v36 = 0i64;
		}
		if ((_QWORD)v30)
			sub_14018B900(v30, 0);
		if (qword_140C65898)
		{
			v22 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v22)
				sub_1400EA3E0(v22, "MessageFinished", byte_1409EB834, &v43, v28);
		}
		if (v50)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v50 + 8i64))(v50);
			v50 = 0i64;
		}
		if (v51)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v51 + 8i64))(v51);
			v51 = 0i64;
		}
		v12 = v45;
	}
	else
	{
		v6 = sub_1403D90D0(a1, *(_DWORD*)a2);
		if (!v6)
			goto LABEL_49;
		if (*(_DWORD*)(a2 + 240))
			v7 = *(_DWORD*)(a2 + 244);
		else
			v7 = -1;
		v8 = *(_QWORD*)(a2 + 24);
		v9 = *(int**)(a2 + 16);
		v30 = 0i64;
		v10 = *(_DWORD*)(a2 + 268);
		LODWORD(v28) = dword_140C636A8;
		v31 = 0i64;
		sub_14001C1B0(&v29, v9, v8);
		v42 = xmmword_140B7B240;
		v35 = 0i64;
		v36 = v5;
		v37 = v7;
		v32 = 0;
		LODWORD(v34) = 0;
		v33 = _mm_shuffle_ps((__m128)0i64, (__m128)0i64, 85).m128_u32[0];
		v38 = v10;
		v39 = 0;
		v40 = -1;
		v41 = 0;
		if (v5)
			(**(void(__fastcall***)(__int64))v5)(v5);
		sub_140475370(v6, *(_DWORD*)(a2 + 120), (__int64)&v28, 0);
		if (qword_140C65898)
		{
			v11 = *(_QWORD*)(qword_140C65898 + 29504);
			if (v11)
				sub_1400EA3E0(v11, "MessageFinished", byte_1409EB834, &v28);
		}
		if (v35)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
			v35 = 0i64;
		}
		if (v36)
		{
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
			v36 = 0i64;
		}
		v12 = v30;
	}
	if (v12)
		sub_14018B900(v12, 0);
LABEL_49:
	(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
	v23 = *(_QWORD*)(a2 + 312);
	if (v23)
	{
		sub_140195D70(*(_QWORD*)(a2 + 312));
		*(_DWORD*)v23 = 0;
		v24 = *(_QWORD**)(v23 + 16);
		if (v24)
			*v24 = *(_QWORD*)(v23 + 24);
		v25 = *(_QWORD**)(v23 + 24);
		if (v25)
			*v25 = *(_QWORD*)(v23 + 16);
		*(_QWORD*)(v23 + 16) = 0i64;
		*(_QWORD*)(v23 + 24) = 0i64;
		sub_14018B900(v23, 0);
	}
	v26 = *(_QWORD*)(a2 + 192);
	if (v26)
		sub_14018B900(v26, 0);
	v27 = *(_QWORD*)(a2 + 16);
	if (v27)
		sub_14018B900(v27, 0);
	sub_14018B900(a2, 0);
}
// 1409EB834: using guessed type _BYTE byte_1409EB834[64];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;

