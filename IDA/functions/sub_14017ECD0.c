//----- (000000014017ECD0) ----------------------------------------------------
__int64 __fastcall sub_14017ECD0(__int64 a1, __int64 a2, WCHAR* a3, __int64 a4, __int64 a5)
{
	__int64 v8; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v10; // rdx
	__int64 v11; // rax
	wchar_t* v12; // rax
	int* v13; // rax
	__int64 v14; // rbx
	__int64 v15; // rax
	_WORD* v16; // rsi
	__int64 v17; // rax
	__int64 v18; // r12
	__int64 v19; // rax
	__int64 v20; // r15
	__int64 v21; // rax
	__int64 v22; // rax
	__m128i* v23; // r13
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rax
	unsigned int v28; // eax
	unsigned int v29; // r14d
	unsigned int j; // esi
	__int64 v31; // rax
	unsigned int* v32; // rdi
	unsigned __int64 v33; // rcx
	unsigned __int16* v34; // rdx
	__int64 v35; // rdx
	__int64 v36; // rcx
	unsigned __int64 v37; // rcx
	unsigned __int16* v38; // rdx
	int v39; // eax
	__int64 v40; // rcx
	int v41; // eax
	__int64* v42; // rcx
	int v43; // xmm0_4
	int v44; // eax
	__int64 v45; // rax
	float v46; // xmm1_4
	int v47; // eax
	__int64* v48; // rcx
	int v49; // xmm0_4
	__int64 v50; // rax
	double v51; // xmm0_8
	__int64* v52; // rcx
	float v53; // xmm1_4
	int v54; // eax
	__int64 v55; // rax
	bool v57; // [rsp+40h] [rbp-C0h] BYREF
	__int64 v58; // [rsp+44h] [rbp-BCh] BYREF
	float v59; // [rsp+4Ch] [rbp-B4h]
	int v60; // [rsp+50h] [rbp-B0h]
	int v61; // [rsp+54h] [rbp-ACh]
	__int64 v62; // [rsp+58h] [rbp-A8h]
	int v63; // [rsp+60h] [rbp-A0h]
	WCHAR* v64; // [rsp+68h] [rbp-98h]
	WCHAR* v65; // [rsp+70h] [rbp-90h]
	WCHAR* v66; // [rsp+78h] [rbp-88h]
	__m128i* v67; // [rsp+80h] [rbp-80h]
	WCHAR* v68; // [rsp+88h] [rbp-78h]
	_OWORD v69[6]; // [rsp+90h] [rbp-70h] BYREF

	v64 = a3;
	sub_1400D45E0((__int64)v69, a1, a2, a5, 0i64);
	v8 = 0i64;
	for (i = 0i64; i < 3; ++i)
	{
		v10 = off_140A3C858[i];
		v57 = 0;
		v11 = sub_1401A6B80(a5, v10);
		if (v11)
		{
			v12 = (wchar_t*)sub_1401A4F40(v11 + 32);
			sub_1401A52E0(v12, &v57);
			if (v57)
				v8 |= 1i64 << i;
		}
	}
	v13 = sub_14018B280(2192i64, 0);
	if (v13)
		v14 = sub_14017C770((__int64)v13, a1, a2, v64, v69, a4, v8);
	else
		v14 = 0i64;
	v15 = sub_1401A6B80(a5, L"Model");
	if (v15)
		v16 = (_WORD*)sub_1401A4F40(v15 + 32);
	else
		v16 = 0i64;
	v17 = sub_1401A6B80(a5, L"Camera");
	if (v17)
		v18 = sub_1401A4F40(v17 + 32);
	else
		v18 = 0i64;
	v19 = sub_1401A6B80(a5, L"FallbackCamera");
	if (v19)
		v20 = sub_1401A4F40(v19 + 32);
	else
		v20 = 0i64;
	v21 = sub_1401A6B80(a5, L"Overlay");
	if (v21)
		v67 = (__m128i*)sub_1401A4F40(v21 + 32);
	else
		v67 = 0i64;
	v22 = sub_1401A6B80(a5, L"Mask");
	if (v22)
		v23 = (__m128i*)sub_1401A4F40(v22 + 32);
	else
		v23 = 0i64;
	v24 = sub_1401A6B80(a5, L"Animated");
	if (v24)
		v66 = (WCHAR*)sub_1401A4F40(v24 + 32);
	else
		v66 = 0i64;
	v25 = sub_1401A6B80(a5, L"Quality");
	if (v25)
		v65 = (WCHAR*)sub_1401A4F40(v25 + 32);
	else
		v65 = 0i64;
	v26 = sub_1401A6B80(a5, L"Frame");
	if (v26)
		v68 = (WCHAR*)sub_1401A4F40(v26 + 32);
	else
		v68 = 0i64;
	v27 = sub_1401A6B80(a5, L"Speed");
	if (v27)
		v64 = (WCHAR*)sub_1401A4F40(v27 + 32);
	else
		v64 = 0i64;
	if (v16)
		sub_14017E490(v14, v16);
	if (!v18 && !v20)
		goto LABEL_76;
	if (qword_140C63838)
	{
		v28 = qword_140C63838(off_140A6B860, qword_140C63858);
	}
	else
	{
		if (dword_140C6466C)
		{
			v29 = 0;
			goto LABEL_48;
		}
		if ((int)sub_140218B60() < 0)
		{
			v29 = 0;
			goto LABEL_48;
		}
		v28 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EB8 + 40i64))(qword_140C63EB8);
	}
	v29 = v28;
LABEL_48:
	for (j = 0; j < v29; ++j)
	{
		if (qword_140C63848)
		{
			v31 = qword_140C63848(off_140A6B860, j, qword_140C63858);
		}
		else
		{
			if (dword_140C6466C)
			{
				v32 = 0i64;
				goto LABEL_57;
			}
			if ((int)sub_140218B60() < 0)
			{
				v32 = 0i64;
				goto LABEL_57;
			}
			v31 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EB8 + 32i64))(qword_140C63EB8, j);
		}
		v32 = (unsigned int*)v31;
	LABEL_57:
		if (v18)
		{
			v33 = *((_QWORD*)v32 + 1);
			if (v33)
				v34 = v33 <= qword_140C3FE70 ? (unsigned __int16*)(v33 + qword_140C3FE68) : 0i64;
			else
				v34 = 0i64;
			if (!(unsigned int)sub_14018E2C0(v18, v34))
			{
				v35 = *v32;
				v36 = *(_QWORD*)(v14 + 2136);
				*(_DWORD*)(v14 + 1024) = 1;
				*(_DWORD*)(v14 + 2048) = v35;
				if (v36)
					(*(void(__fastcall**)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD*)v36 + 1064i64))(
						v36,
						v35,
						v14 + 1136,
						0i64,
						v14 + 1060,
						v14 + 1072,
						v14 + 1136,
						v14 + 1200);
			}
		}
		if (v20)
		{
			v37 = *((_QWORD*)v32 + 1);
			if (v37)
				v38 = v37 <= qword_140C3FE70 ? (unsigned __int16*)(v37 + qword_140C3FE68) : 0i64;
			else
				v38 = 0i64;
			if (!(unsigned int)sub_14018E2C0(v20, v38))
			{
				v39 = *v32;
				v40 = *(_QWORD*)(v14 + 2136);
				*(_DWORD*)(v14 + 1024) = 1;
				*(_DWORD*)(v14 + 2052) = v39;
				if (v40)
					(*(void(__fastcall**)(__int64, _QWORD, __int64, _QWORD, __int64, __int64, __int64, __int64))(*(_QWORD*)v40 + 1064i64))(
						v40,
						*(unsigned int*)(v14 + 2048),
						v14 + 1072,
						0i64,
						v14 + 1060,
						v14 + 1072,
						v14 + 1136,
						v14 + 1200);
			}
		}
	}
LABEL_76:
	if (v67)
		sub_14017E3C0(v14, v67);
	if (v23)
		sub_14017EBE0(v14, v23);
	if (v66)
	{
		v41 = sub_14018E820(v66);
		v42 = *(__int64**)(v14 + 2136);
		*(_DWORD*)(v14 + 1032) = v41;
		if (v42)
		{
			if (v41)
				v43 = *(_DWORD*)(v14 + 1044);
			else
				v43 = 0;
			v44 = *(_DWORD*)(v14 + 1036);
			v59 = *(float*)&v43;
			v60 = v44;
			v45 = *v42;
			v58 = 150i64;
			v61 = 0;
			v62 = 2i64;
			v63 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v45 + 584))(v42, 0i64, &v58);
		}
	}
	if (v65)
	{
		v46 = *(double*)sub_1407DFE80(v65, 0i64).m128_u64;
		*(float*)(v14 + 1040) = v46;
		sub_1401807E0(v14);
	}
	if (v68)
	{
		v47 = sub_14018E820(v68);
		v48 = *(__int64**)(v14 + 2136);
		*(_DWORD*)(v14 + 1036) = v47;
		if (v48)
		{
			if (*(_DWORD*)(v14 + 1032))
				v49 = *(_DWORD*)(v14 + 1044);
			else
				v49 = 0;
			v60 = v47;
			v50 = *v48;
			v59 = *(float*)&v49;
			v58 = 150i64;
			v61 = 0;
			v62 = 2i64;
			v63 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v50 + 584))(v48, 0i64, &v58);
		}
	}
	if (v64)
	{
		v51 = *(double*)sub_1407DFE80(v64, 0i64).m128_u64;
		v52 = *(__int64**)(v14 + 2136);
		v53 = v51;
		*(float*)(v14 + 1044) = v53;
		if (v52)
		{
			if (!*(_DWORD*)(v14 + 1032))
				v53 = 0.0;
			v54 = *(_DWORD*)(v14 + 1036);
			v59 = v53;
			v60 = v54;
			v55 = *v52;
			v58 = 150i64;
			v61 = 0;
			v62 = 2i64;
			v63 = 0;
			(*(void(__fastcall**)(__int64*, _QWORD, __int64*))(v55 + 584))(v52, 0i64, &v58);
		}
	}
	return v14;
}
// 140A3C370: using guessed type wchar_t aCamera[7];
// 140A3C380: using guessed type wchar_t aModel[6];
// 140A3C390: using guessed type wchar_t aOverlay[8];
// 140A3C3A0: using guessed type wchar_t aFallbackcamera[15];
// 140A3C510: using guessed type wchar_t aSpeed[6];
// 140A3C548: using guessed type wchar_t aAnimated[9];
// 140A3C560: using guessed type wchar_t aMask[5];
// 140A3C570: using guessed type wchar_t aFrame[6];
// 140A3C580: using guessed type wchar_t aQuality[8];
// 140A3C858: using guessed type wchar_t *off_140A3C858[3];
// 140A6B860: using guessed type wchar_t *off_140A6B860[2];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EB8: using guessed type __int64 qword_140C63EB8;
// 140C6466C: using guessed type int dword_140C6466C;
// 14017ECD0: using guessed type _OWORD var_B0[6];

