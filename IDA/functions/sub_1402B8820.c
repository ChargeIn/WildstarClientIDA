//----- (00000001402B8820) ----------------------------------------------------
int __fastcall sub_1402B8820(__int64 a1, int* a2, int a3, float a4, int a5)
{
	HDC CompatibleDC; // rax
	int result; // eax
	int v9; // ebx
	int v10; // esi
	int v11; // eax
	int v12; // ecx
	__int64 v13; // r8
	LONG v14; // eax
	BYTE v15; // al
	__int64 v16; // rdx
	WCHAR* lfFaceName; // rcx
	int v18; // r9d
	__int64 v19; // r8
	WCHAR v20; // ax
	HFONT v21; // rax
	HGDIOBJ v22; // rax
	HDC v23; // rcx
	int v24; // edx
	float v25; // xmm2_4
	int v26; // ecx
	float v27; // xmm1_4
	__int16 v28; // ax
	__m128i v29; // xmm1
	__int16 v30; // ax
	float v31; // xmm0_4
	__m128i v32; // xmm1
	float v33; // xmm0_4
	float v34; // xmm1_4
	__m128i v35; // xmm1
	int v36; // ebx
	__int64 v37; // rax
	int* v38; // rax
	HDC v39; // rcx
	HGDIOBJ v40; // rax
	int v41; // eax
	unsigned int v42; // edx
	int v43; // ecx
	unsigned int v44; // ecx
	unsigned int v45; // edx
	__int64 v46; // rax
	unsigned int v47; // r9d
	unsigned int v48; // r10d
	int v49; // ecx
	unsigned __int64 v50; // rdx
	int v51; // ecx
	int v52; // ecx
	HDC v53; // rcx
	__int64 v54; // rbx
	unsigned __int64 v55; // rax
	__int64 v56; // r14
	unsigned __int64 v57; // rbp
	unsigned __int64 v58; // rsi
	int* v59; // rax
	__int64 v60; // rcx
	__int64 v61; // rcx
	__int64* v62; // rcx
	__int64 v63; // rax
	__int64 v64; // [rsp+20h] [rbp-C8h] BYREF
	__int64 v65; // [rsp+28h] [rbp-C0h]
	__int64 v66; // [rsp+30h] [rbp-B8h]
	LOGFONTW lf; // [rsp+40h] [rbp-A8h] BYREF

	*(_QWORD*)(a1 + 24) = sub_14018E9C0(a2);
	*(float*)(a1 + 36) = a4;
	*(_DWORD*)(a1 + 32) = a3;
	*(_DWORD*)(a1 + 40) = a5;
	*(float*)(a1 + 48) = 1.0 / a4;
	CompatibleDC = CreateCompatibleDC(0i64);
	*(_QWORD*)(a1 + 104) = CompatibleDC;
	if (!CompatibleDC)
		return -2147024882;
	v9 = 1;
	SetMapMode(CompatibleDC, 1);
	if ((*(_BYTE*)(a1 + 40) & 6) != 0 || (v10 = 0, *(_DWORD*)(a1 + 32) > 8u))
		v10 = 1;
	sub_1407E4830(&lf.lfHeight, 0i64, 0x5Cui64);
	v11 = MulDiv(*(_DWORD*)(a1 + 32), 96, 72);
	v12 = *(_DWORD*)(a1 + 40);
	v13 = *(_QWORD*)(a1 + 24);
	lf.lfHeight = -v11;
	v14 = 400;
	if ((v12 & 2) != 0)
		v14 = 700;
	lf.lfWeight = v14;
	v15 = 3;
	lf.lfItalic = (v12 & 4) != 0;
	if (v10)
		v15 = 5;
	lf.lfWidth = 0;
	*(_WORD*)&lf.lfCharSet = 1;
	lf.lfQuality = v15;
	lf.lfPitchAndFamily = 0;
	v16 = 32i64;
	lfFaceName = lf.lfFaceName;
	v18 = 0;
	v19 = v13 - (_QWORD)lf.lfFaceName;
	while (v16 != -2147483614)
	{
		v20 = *(WCHAR*)((char*)lfFaceName + v19);
		if (!v20)
			break;
		*lfFaceName++ = v20;
		if (!--v16)
		{
			--lfFaceName;
			v18 = -2147024774;
			break;
		}
	}
	*lfFaceName = 0;
	if (v18 < 0)
		return v18;
	v21 = CreateFontIndirectW(&lf);
	*(_QWORD*)(a1 + 112) = v21;
	if (!v21)
		return -2147024882;
	v22 = SelectObject(*(HDC*)(a1 + 104), v21);
	v23 = *(HDC*)(a1 + 104);
	*(_QWORD*)(a1 + 120) = v22;
	GetTextMetricsW(v23, (LPTEXTMETRICW)(a1 + 176));
	v24 = *(_DWORD*)(a1 + 176);
	v25 = *(float*)(a1 + 36);
	v26 = *(_DWORD*)(a1 + 200);
	v27 = (float)*(int*)(a1 + 180);
	*(_WORD*)(a1 + 84) = *(_WORD*)(a1 + 220);
	v28 = *(_WORD*)(a1 + 222);
	*(float*)(a1 + 56) = v27 * v25;
	v29 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 188));
	*(_WORD*)(a1 + 86) = v28;
	v30 = *(_WORD*)(a1 + 224);
	*(float*)(a1 + 52) = (float)v24 * v25;
	v31 = (float)*(int*)(a1 + 184);
	*(_WORD*)(a1 + 88) = v30;
	*(float*)(a1 + 64) = _mm_cvtepi32_ps(v29).m128_f32[0] * v25;
	v32 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 196));
	*(_DWORD*)(a1 + 148) = (v26 + 5) & 0xFFFFFFFE;
	*(float*)(a1 + 60) = v31 * v25;
	v33 = (float)*(int*)(a1 + 192);
	v34 = _mm_cvtepi32_ps(v32).m128_f32[0] * v25;
	if (v10)
		v9 = 32;
	*(_DWORD*)(a1 + 152) = v24 + 4;
	*(float*)(a1 + 72) = v34;
	*(_DWORD*)(a1 + 144) = v9;
	v35 = _mm_cvtsi32_si128(*(_DWORD*)(a1 + 208));
	*(float*)(a1 + 68) = v33 * v25;
	*(float*)(a1 + 80) = _mm_cvtepi32_ps(v35).m128_f32[0] * v25;
	*(float*)(a1 + 76) = (float)v26 * v25;
	result = sub_1402B8DE0(a1);
	if (result >= 0)
	{
		v36 = 2;
		v37 = 2i64 * *(_DWORD*)(a1 + 152) * *(_DWORD*)(a1 + 148);
		if (!is_mul_ok(*(_DWORD*)(a1 + 152) * *(_DWORD*)(a1 + 148), 2ui64))
			v37 = -1i64;
		v38 = sub_14018B280(v37, 0);
		v39 = *(HDC*)(a1 + 104);
		*(_QWORD*)(a1 + 168) = v38;
		SetBkMode(v39, 2);
		SetBkColor(*(HDC*)(a1 + 104), 0);
		SetTextColor(*(HDC*)(a1 + 104), 0xFFFFFFu);
		v40 = SelectObject(*(HDC*)(a1 + 104), *(HGDIOBJ*)(a1 + 128));
		*(_DWORD*)(a1 + 264) = 0;
		*(_QWORD*)(a1 + 136) = v40;
		sub_1407E4830((int*)(a1 + 272), 0i64, 0x800ui64);
		v41 = *(_DWORD*)(a1 + 40);
		if ((v41 & 0x10) != 0)
		{
			v36 = 4;
		}
		else if ((v41 & 8) != 0)
		{
			v36 = 3;
		}
		v42 = v36 + *(_DWORD*)(a1 + 176);
		*(_DWORD*)(a1 + 2356) = v36 + *(_DWORD*)(a1 + 196);
		v43 = *(_DWORD*)(a1 + 200);
		*(_DWORD*)(a1 + 2352) = v42;
		v44 = v36 + v43;
		*(_DWORD*)(a1 + 2360) = v44;
		if (v42 < v44)
			v42 = v44;
		v45 = (v42 - 1) | ((v42 - 1) >> 16) | (((v42 - 1) | ((v42 - 1) >> 16)) >> 8) | (((v42 - 1) | ((v42 - 1) >> 16) | (((v42 - 1) | ((v42 - 1) >> 16)) >> 8)) >> 4) | (((v42 - 1) | ((v42 - 1) >> 16) | (((v42 - 1) | ((v42 - 1) >> 16)) >> 8) | (((v42 - 1) | ((v42 - 1) >> 16) | (((v42 - 1) | ((v42 - 1) >> 16)) >> 8)) >> 4)) >> 2);
		*(_DWORD*)(a1 + 2364) = (v45 | (v45 >> 1)) + 1;
		v46 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 16i64) + 712i64))(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64));
		v47 = *(_DWORD*)(a1 + 2364);
		v48 = *(_DWORD*)(v46 + 56);
		if (v47 <= v48)
		{
			v49 = *(unsigned __int16*)(a1 + 222) - *(unsigned __int16*)(a1 + 220) + 1;
			if (v49 > 128)
				v49 = 128;
			v50 = (unsigned int)(*(_DWORD*)(a1 + 2352) * *(_DWORD*)(a1 + 2356) * v49);
			if (v47 < v48)
			{
				do
				{
					v51 = *(_DWORD*)(a1 + 2364);
					if ((unsigned int)(v51 * v51) >= v50)
						break;
					*(_DWORD*)(a1 + 2364) = 2 * v51;
				} while ((unsigned int)(2 * v51) < *(_DWORD*)(v46 + 56));
			}
			v52 = *(_DWORD*)(a1 + 2364);
			*(_QWORD*)(a1 + 2336) = 0i64;
			*(_DWORD*)(a1 + 2368) = v52 * v52;
			*(_DWORD*)(a1 + 2344) = v52;
			*(_DWORD*)(a1 + 2348) = v52;
			*(_QWORD*)(a1 + 248) = 0i64;
			*(_QWORD*)(a1 + 256) = 0i64;
			v53 = *(HDC*)(a1 + 104);
			*(_DWORD*)(a1 + 248) = 16;
			result = ScriptGetFontProperties(v53, (SCRIPT_CACHE*)(a1 + 240), (SCRIPT_FONTPROPERTIES*)(a1 + 248));
			if (result >= 0)
			{
				v54 = *(_QWORD*)(a1 + 16);
				v64 = *(_QWORD*)(a1 + 24);
				v65 = *(_QWORD*)(a1 + 32);
				v66 = *(_QWORD*)(a1 + 40);
				if (*(_QWORD*)(v54 + 64) == *(_QWORD*)(v54 + 72))
					sub_1400290D0(v54 + 64);
				v55 = (*(__int64(__fastcall**)(__int64*))(v54 + 88))(&v64);
				v56 = *(_QWORD*)(v54 + 80);
				v57 = v55;
				v58 = v55 % *(_QWORD*)(v54 + 72);
				v59 = sub_14018B280(48i64, 0);
				if (v59)
				{
					v60 = *(_QWORD*)(v56 + 8 * v58);
					*(_QWORD*)v59 = v57;
					*((_QWORD*)v59 + 1) = v60;
					*((_QWORD*)v59 + 2) = v64;
					*((_QWORD*)v59 + 3) = v65;
					v61 = v66;
					*((_QWORD*)v59 + 5) = a1;
					*((_QWORD*)v59 + 4) = v61;
				}
				else
				{
					v59 = 0i64;
				}
				*(_QWORD*)(v56 + 8 * v58) = v59;
				++* (_QWORD*)(v54 + 64);
				v62 = (__int64*)(*(_QWORD*)(a1 + 16) + 56i64);
				if (!*(_QWORD*)(a1 + 2472))
				{
					*(_QWORD*)(a1 + 2472) = v62;
					*(_QWORD*)(a1 + 2480) = *v62;
					*v62 = a1;
					v63 = *(_QWORD*)(a1 + 2480);
					if (v63)
						*(_QWORD*)(v63 + 2472) = a1 + 2480;
				}
				return 0;
			}
		}
		else
		{
			return -2147467259;
		}
	}
	return result;
}
// 1402B8997: conditional instruction was optimized away because rdx.8!=0

