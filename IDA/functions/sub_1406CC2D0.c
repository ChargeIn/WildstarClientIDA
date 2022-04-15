//----- (00000001406CC2D0) ----------------------------------------------------
void __fastcall sub_1406CC2D0(_QWORD* a1, char a2, __m128* a3)
{
	int* v5; // rax
	__int64 v6; // rcx
	_QWORD* v7; // r12
	void(__fastcall * **v8)(_QWORD); // rbx
	__int64 v9; // rcx
	__int64 v11; // rcx
	__m128 v12; // xmm2
	__int64 v13; // r15
	__int64 v14; // rcx
	unsigned int v15; // eax
	unsigned int v16; // ebx
	__int64 v17; // rdx
	__int64 v18; // rdi
	unsigned __int64 v19; // rbx
	__int64 v20; // rdx
	__int64 v21; // rcx
	unsigned __int64 v22; // rbx
	__int64 v23; // rdx
	__int64 v24; // rsi
	unsigned __int64 v25; // rbx
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rdi
	__int64 v29; // r14
	unsigned __int64 v30; // rbx
	__int64 v31; // rdx
	unsigned __int64 v32; // rbx
	__int64 v33; // rdx
	__int64 v34; // rcx
	__int64 v35; // rcx
	unsigned __int64 v36; // rbx
	__int64 v37; // rdx
	_QWORD* v38; // rdi
	__int64 v39; // r12
	__int64 v40; // r15
	int* v41; // rbx
	int* v42; // rax
	__int64 v43; // r14
	__int64 v44; // rcx
	__m128i* v45; // rbx
	void(__fastcall * **v46)(_QWORD); // rsi
	__int64 i; // rcx
	unsigned __int64 v48; // rbx
	__int64 v49; // rdx
	__int64 v50; // rsi
	__int64 v51; // rcx
	unsigned __int64 v52; // rbx
	__int64 v53; // rsi
	__int16* v54; // rax
	__int64 v55; // rsi
	unsigned __int64 v56; // rbx
	__int64 v57; // rdx
	int v58; // ebx
	__int64* v59; // rdi
	__int64 v60; // rcx
	unsigned __int64 v61; // rbx
	__int64 v62; // rdx
	int v63; // ebx
	__int64* v64; // rdi
	__int64 v65; // rcx
	__m128 v66; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v67; // [rsp+68h] [rbp-A0h]
	unsigned int v68; // [rsp+78h] [rbp-90h]
	__int128 v69; // [rsp+88h] [rbp-80h] BYREF
	__int128 v70; // [rsp+98h] [rbp-70h] BYREF
	_QWORD* v71; // [rsp+A8h] [rbp-60h]
	__m128 v72; // [rsp+B8h] [rbp-50h] BYREF
	__int128 v73; // [rsp+C8h] [rbp-40h]
	__int128 v74; // [rsp+D8h] [rbp-30h] BYREF
	_QWORD* v75; // [rsp+E8h] [rbp-20h] BYREF
	__int64 v76; // [rsp+F0h] [rbp-18h]
	char v77[8]; // [rsp+F8h] [rbp-10h] BYREF
	int* v78; // [rsp+100h] [rbp-8h]
	int* v79; // [rsp+108h] [rbp+0h]
	int* v80; // [rsp+110h] [rbp+8h]
	__int128 v81[2]; // [rsp+118h] [rbp+10h] BYREF
	__int64 v82; // [rsp+138h] [rbp+30h]
	__int128 v83; // [rsp+148h] [rbp+40h] BYREF
	_QWORD* v84; // [rsp+158h] [rbp+50h]
	float v85; // [rsp+160h] [rbp+58h]
	float v86; // [rsp+164h] [rbp+5Ch]
	char v87[8]; // [rsp+168h] [rbp+60h] BYREF
	int* v88; // [rsp+170h] [rbp+68h]
	int* v89; // [rsp+178h] [rbp+70h]
	int* v90; // [rsp+180h] [rbp+78h]
	__m128 v91; // [rsp+188h] [rbp+80h] BYREF
	float v92; // [rsp+198h] [rbp+90h]
	float v93; // [rsp+19Ch] [rbp+94h]
	__int64 v94; // [rsp+1A0h] [rbp+98h]
	__int128 v95; // [rsp+1A8h] [rbp+A0h] BYREF
	__int128 v96; // [rsp+1B8h] [rbp+B0h] BYREF
	__int64 v97[50]; // [rsp+1C8h] [rbp+C0h] BYREF
	__int128 v98; // [rsp+360h] [rbp+258h] BYREF

	if (a2)
	{
		v5 = sub_14018B280(16i64, 0);
		v88 = v5;
		v89 = v5;
		v90 = v5 + 4;
		if (v5)
			*(_WORD*)v5 = 0;
		v6 = a1[4];
		v7 = 0i64;
		v71 = 0i64;
		v84 = 0i64;
		v86 = 1.0;
		v85 = *(float*)&dword_140C63664;
		if (v6)
		{
			v8 = (void(__fastcall***)(_QWORD))sub_140108E80(
				v6 + 240,
				(const __m128i*)L"CRB_Basekit:kitBase_HoloBlue_SmallGreenCorners");
			if (v8)
			{
				v9 = 0i64;
				while (aCrbBasekitKitb[++v9] != 0)
					;
				sub_14001C480(
					(__int64)v87,
					(int*)L"CRB_Basekit:kitBase_HoloBlue_SmallGreenCorners",
					(int*)&aCrbBasekitKitb[v9]);
				v71 = v84;
				(**v8)(v8);
				v7 = v8;
				v71 = v8;
			}
		}
		v69 = xmmword_140B7B240;
		if (v7)
			sub_140103E60(v7, a3, (__m128*) & v69, 0, COERCE_INT((float)(*(float*)&dword_140C63664 - v85) * v86));
		v11 = a1[4];
		v12 = _mm_add_ps(a3[1], (__m128)xmmword_140B7A610);
		v66 = _mm_sub_ps(*a3, (__m128)xmmword_140B7A610);
		v67 = (__int128)v12;
		v13 = sub_1400E58C0(v11, (int*)L"CRB_InterfaceMedium");
		v82 = v13;
		sub_1400E2630(v14, v81, L"CRB_To", (int*)L"2:");
		v69 = xmmword_140C777D0;
		v15 = sub_140142170(qword_140C63678, L"UI_TextHoloBody");
		v16 = v15;
		if ((unsigned __int64)v15 >= *(_QWORD*)(qword_140C63678 + 48))
			v17 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v17 = *(_QWORD*)(qword_140C63678 + 40) + 32i64 * v15;
		v18 = *((_QWORD*)&v81[0] + 1);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			*((_QWORD*)&v81[0] + 1),
			-1i64,
			&v66,
			0,
			v17,
			&v69,
			1);
		sub_1401429A0(qword_140C63678, v16);
		v72 = v66;
		v73 = v67;
		v72.m128_f32[0] = v66.m128_f32[0] + 60.0;
		v70 = xmmword_140C777D0;
		v19 = (unsigned int)sub_140142170(qword_140C63678, L"White");
		if (v19 >= *(_QWORD*)(qword_140C63678 + 48))
			v20 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v20 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v19;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			a1[184],
			-1i64,
			&v72,
			0,
			v20,
			&v70,
			1);
		sub_1401429A0(qword_140C63678, v19);
		v66.m128_f32[1] = v66.m128_f32[1] + 20.0;
		sub_1400E2630(v21, v81, L"CRB_Subject", (int*)":");
		if (v18)
			sub_14018B900(v18, 0);
		v69 = xmmword_140C777D0;
		v22 = (unsigned int)sub_140142170(qword_140C63678, L"UI_TextHoloBody");
		if (v22 >= *(_QWORD*)(qword_140C63678 + 48))
			v23 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v23 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v22;
		v24 = *((_QWORD*)&v81[0] + 1);
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			*((_QWORD*)&v81[0] + 1),
			-1i64,
			&v66,
			0,
			v23,
			&v69,
			1);
		sub_1401429A0(qword_140C63678, v22);
		v72 = v66;
		v73 = v67;
		v72.m128_f32[0] = v66.m128_f32[0] + 60.0;
		v70 = xmmword_140C777D0;
		v25 = (unsigned int)sub_140142170(qword_140C63678, L"White");
		if (v25 >= *(_QWORD*)(qword_140C63678 + 48))
			v26 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v26 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v25;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			a1[192],
			-1i64,
			&v72,
			0,
			v26,
			&v70,
			1);
		sub_1401429A0(qword_140C63678, v25);
		v66.m128_f32[1] = v66.m128_f32[1] + 20.0;
		sub_1400E2630(v27, v81, L"CRB_Message", (int*)L"Message:");
		v28 = *((_QWORD*)&v81[0] + 1);
		v29 = *((_QWORD*)&v81[0] + 1);
		*(_QWORD*)&v70 = *((_QWORD*)&v81[0] + 1);
		if (v24)
			sub_14018B900(v24, 0);
		v69 = xmmword_140C777D0;
		v30 = (unsigned int)sub_140142170(qword_140C63678, L"UI_TextHoloBody");
		if (v30 >= *(_QWORD*)(qword_140C63678 + 48))
			v31 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v31 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v30;
		(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			v28,
			-1i64,
			&v66,
			0,
			v31,
			&v69,
			1);
		sub_1401429A0(qword_140C63678, v30);
		v73 = v67;
		v72 = v66;
		v72.m128_f32[0] = v66.m128_f32[0] + 60.0;
		*((float*)&v73 + 1) = v66.m128_f32[1] + 20.0;
		v83 = xmmword_140C777D0;
		v32 = (unsigned int)sub_140142170(qword_140C63678, L"White");
		if (v32 >= *(_QWORD*)(qword_140C63678 + 48))
			v33 = *(_QWORD*)(qword_140C63678 + 40);
		else
			v33 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v32;
		(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
			qword_140C65680,
			*(_QWORD*)(v13 + 96),
			a1[196],
			-1i64,
			&v72,
			0,
			v33,
			&v83,
			1);
		sub_1401429A0(qword_140C63678, v32);
		v66.m128_f32[1] = v66.m128_f32[1] + 20.0;
		if (a1[200])
		{
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65680 + 144i64))(qword_140C65680, 1i64);
			sub_1400E2630(v35, v81, L"CRB_Attachments", (int*)L"Attachments:");
			v29 = *((_QWORD*)&v81[0] + 1);
			*(_QWORD*)&v70 = *((_QWORD*)&v81[0] + 1);
			if (v28)
				sub_14018B900(v28, 0);
			v83 = xmmword_140C777D0;
			v36 = (unsigned int)sub_140142170(qword_140C63678, L"UI_TextHoloBody");
			if (v36 >= *(_QWORD*)(qword_140C63678 + 48))
				v37 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v37 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v36;
			v38 = 0i64;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
				qword_140C65680,
				*(_QWORD*)(v13 + 96),
				v29,
				-1i64,
				&v66,
				0,
				v37,
				&v83,
				1);
			sub_1401429A0(qword_140C63678, v36);
			v68 = 0;
			v66.m128_f32[1] = v66.m128_f32[1] + 20.0;
			if (a1[200])
			{
				v39 = v82;
				v40 = 0i64;
				do
				{
					v41 = sub_1403ACAB0(qword_140C65898 + 160, (int*)(a1[199] + 8 * v40));
					*(_QWORD*)&v69 = v41;
					v42 = sub_14018B280(16i64, 0);
					v43 = (__int64)v42;
					v78 = v42;
					v79 = v42;
					v80 = v42 + 4;
					if (v42)
						*(_WORD*)v42 = 0;
					v44 = a1[4];
					v45 = (__m128i*) * ((_QWORD*)v41 + 61);
					v75 = 0i64;
					v76 = (unsigned int)dword_140C63664 | 0x3F80000000000000i64;
					if (v44)
					{
						if (v45)
						{
							if (v45->m128i_i16[0])
							{
								v46 = (void(__fastcall***)(_QWORD))sub_140108E80(v44 + 240, v45);
								if (v46)
								{
									for (i = 0i64; v45->m128i_i16[i]; ++i)
										;
									sub_14001C480((__int64)v77, v45->m128i_i32, (int*)((char*)v45->m128i_i32 + 2 * i));
									v38 = v75;
									if (v46 != v75)
									{
										(**v46)(v46);
										if (v38)
											(*(void(__fastcall**)(_QWORD*))(*v38 + 8i64))(v38);
										v38 = v46;
									}
									v43 = (__int64)v78;
								}
							}
						}
					}
					v96 = xmmword_140B7B240;
					v94 = *((_QWORD*)&v67 + 1);
					v91 = v66;
					v93 = v66.m128_f32[1] + 32.0;
					v92 = v66.m128_f32[0] + 32.0;
					if (v38)
						sub_140103E60(
							v38,
							&v91,
							(__m128*) & v96,
							0,
							COERCE_INT((float)(*(float*)&dword_140C63664 - *(float*)&v76) * *((float*)&v76 + 1)));
					if (*(_DWORD*)(sub_1403AC780(qword_140C65898 + 160, (int*)(a1[199] + 8 * v40)) + 120) >= 2u)
					{
						sub_14018EFA0(&v75, (__int64)L"%d");
						v95 = xmmword_140C777D0;
						v48 = (unsigned int)sub_140142170(qword_140C63678, L"White");
						v49 = v48 >= *(_QWORD*)(qword_140C63678 + 48)
							? *(_QWORD*)(qword_140C63678 + 40)
							: *(_QWORD*)(qword_140C63678 + 40) + 32 * v48;
						v50 = v76;
						(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, int, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
							qword_140C65680,
							*(_QWORD*)(v39 + 96),
							v76,
							-1i64,
							&v91,
							2,
							v49,
							&v95,
							1);
						sub_1401429A0(qword_140C63678, v48);
						if (v50)
							sub_14018B900(v50, 0);
					}
					v81[0] = (__int128)v66;
					v81[1] = v67;
					*(float*)v81 = v66.m128_f32[0] + 36.0;
					v74 = xmmword_140C777D0;
					v52 = (unsigned int)sub_140142170(qword_140C63678, L"White");
					if (v52 >= *(_QWORD*)(qword_140C63678 + 48))
						v53 = *(_QWORD*)(qword_140C63678 + 40);
					else
						v53 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v52;
					v54 = sub_14034BDD0(v51, *(_DWORD*)(v69 + 476));
					(*(void(__fastcall**)(__int64, _QWORD, __int16*, __int64, __int128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
						qword_140C65680,
						*(_QWORD*)(v39 + 96),
						v54,
						-1i64,
						v81,
						0,
						v53,
						&v74,
						1);
					sub_1401429A0(qword_140C63678, v52);
					v66.m128_f32[1] = v66.m128_f32[1] + 36.0;
					if (v38)
						(*(void(__fastcall**)(_QWORD*))(*v38 + 8i64))(v38);
					if (v43)
						sub_14018B900(v43, 0);
					v38 = 0i64;
					v40 = ++v68;
				} while ((unsigned __int64)v68 < a1[200]);
				v7 = v71;
				v29 = v70;
				v13 = v82;
			}
		}
		if (a1[203])
		{
			sub_1400E2630(v34, &v75, L"CRB_Request", (int*)L"CoD:");
			v55 = v76;
			if (v29)
				sub_14018B900(v29, 0);
			v74 = xmmword_140C777D0;
			v56 = (unsigned int)sub_140142170(qword_140C63678, L"UI_TextHoloBody");
			if (v56 >= *(_QWORD*)(qword_140C63678 + 48))
				v57 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v57 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v56;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
				qword_140C65680,
				*(_QWORD*)(v13 + 96),
				v55,
				-1i64,
				&v66,
				0,
				v57,
				&v74,
				1);
			sub_1401429A0(qword_140C63678, v56);
			v66.m128_f32[0] = v66.m128_f32[0] + 60.0;
			sub_140503450((__int64)v97);
			sub_140503600((__int64)v97, 1u, 0, 0, 0);
			v97[0] = (__int64)off_140B6A420;
			v58 = 3;
			v59 = (__int64*)&v98;
			do
			{
				v60 = *(v59 - 6);
				v59 -= 11;
				if (v60)
					sub_14018B900(v60, 0);
				if (*v59)
					sub_14018B900(*v59, 0);
				--v58;
			} while (v58 >= 0);
		}
		else if (a1[202])
		{
			sub_1400E2630(v34, &v75, L"CRB_Send", (int*)L"Send:");
			v55 = v76;
			if (v29)
				sub_14018B900(v29, 0);
			v74 = xmmword_140C777D0;
			v61 = (unsigned int)sub_140142170(qword_140C63678, L"UI_TextHoloBody");
			if (v61 >= *(_QWORD*)(qword_140C63678 + 48))
				v62 = *(_QWORD*)(qword_140C63678 + 40);
			else
				v62 = *(_QWORD*)(qword_140C63678 + 40) + 32 * v61;
			(*(void(__fastcall**)(__int64, _QWORD, __int64, __int64, __m128*, _DWORD, __int64, __int128*, int))(*(_QWORD*)qword_140C65680 + 256i64))(
				qword_140C65680,
				*(_QWORD*)(v13 + 96),
				v55,
				-1i64,
				&v66,
				0,
				v62,
				&v74,
				1);
			sub_1401429A0(qword_140C63678, v61);
			v66.m128_f32[0] = v66.m128_f32[0] + 60.0;
			sub_140503450((__int64)v97);
			sub_140503600((__int64)v97, 1u, 0, 0, 0);
			v97[0] = (__int64)off_140B6A420;
			v63 = 3;
			v64 = (__int64*)&v98;
			do
			{
				v65 = *(v64 - 6);
				v64 -= 11;
				if (v65)
					sub_14018B900(v65, 0);
				if (*v64)
					sub_14018B900(*v64, 0);
				--v63;
			} while (v63 >= 0);
		}
		else
		{
			v55 = v70;
		}
		if (v55)
			sub_14018B900(v55, 0);
		if (v7)
			(*(void(__fastcall**)(_QWORD*))(*v7 + 8i64))(v7);
		if (v88)
			sub_14018B900((__int64)v88, 0);
	}
}
// 1406CC3C7: conditional instruction was optimized away because rbx.8!=0
// 1406CC3D4: conditional instruction was optimized away because %var_280.8==0
// 1406CC46B: variable 'v14' is possibly undefined
// 1406CC5DC: variable 'v21' is possibly undefined
// 1406CC74B: variable 'v27' is possibly undefined
// 1406CC8F1: variable 'v35' is possibly undefined
// 1406CCC88: variable 'v51' is possibly undefined
// 1406CCD74: variable 'v34' is possibly undefined
// 140B38544: using guessed type wchar_t a2[3];
// 140B386F4: using guessed type wchar_t aD_59[3];
// 140B3A530: using guessed type wchar_t aWhite_8[6];
// 140B3A540: using guessed type wchar_t aUiTextholobody_1[16];
// 140B3A560: using guessed type wchar_t aCrbSubject[12];
// 140B3A578: using guessed type wchar_t aWhite_7[6];
// 140B3A588: using guessed type wchar_t aUiTextholobody_0[16];
// 140B3A5A8: using guessed type wchar_t aCrbTo[7];
// 140B3A5B8: using guessed type wchar_t aCrbInterfaceme[20];
// 140B3A5E0: using guessed type wchar_t aCrbBasekitKitb[47];
// 140B3A640: using guessed type wchar_t aUiTextholobody_5[16];
// 140B3A660: using guessed type wchar_t aCrbSend[9];
// 140B3A678: using guessed type wchar_t aSend_0[6];
// 140B3A688: using guessed type wchar_t aUiTextholobody_4[16];
// 140B3A6A8: using guessed type wchar_t aCrbRequest[12];
// 140B3A6C0: using guessed type wchar_t aCod[5];
// 140B3A6D0: using guessed type wchar_t aWhite_11[6];
// 140B3A6E0: using guessed type wchar_t aWhite_10[6];
// 140B3A6F0: using guessed type wchar_t aUiTextholobody_3[16];
// 140B3A710: using guessed type wchar_t aCrbAttachments[16];
// 140B3A730: using guessed type wchar_t aAttachments[13];
// 140B3A750: using guessed type wchar_t aWhite_9[6];
// 140B3A760: using guessed type wchar_t aUiTextholobody_2[16];
// 140B3A780: using guessed type wchar_t aCrbMessage[12];
// 140B3A798: using guessed type wchar_t aMessage[9];
// 140B6A420: using guessed type __int64 (__fastcall *off_140B6A420[3])();
// 140B7A610: using guessed type __int128 xmmword_140B7A610;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63664: using guessed type int dword_140C63664;
// 140C63678: using guessed type __int64 qword_140C63678;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C777D0: using guessed type __int128 xmmword_140C777D0;
// 1406CC2D0: using guessed type char var_270[8];
// 1406CC2D0: using guessed type char var_2E0[8];

