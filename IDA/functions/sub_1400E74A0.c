#include "../winhttp.h"

//----- (00000001400E74A0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400E74A0(__int64 a1, double a2)
{
	DWORD TickCount; // eax
	int v4; // ecx
	int* v5; // rax
	float v6; // xmm0_4
	int v7; // ecx
	int v8; // eax
	int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rcx
	__int64 v12; // rbx
	unsigned int v13; // ebp
	__int64 v14; // rcx
	__int64 v15; // rsi
	__int64 v16; // rcx
	int v17; // r12d
	int v18; // r13d
	float v19; // xmm7_4
	char v20; // r15
	char v21; // r14
	__int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rax
	unsigned int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	int v28; // r10d
	_QWORD* v29; // rax
	__int64 v30; // r11
	__int64 v31; // rdx
	int v32; // r10d
	_QWORD* v33; // rax
	__int64 v34; // rdx
	_QWORD* v35; // rax
	__int64 v36; // r10
	__int64 v37; // rdx
	int v38; // r11d
	_QWORD* v39; // rax
	__int64 v40; // rdx
	int v41; // r10d
	_QWORD* v42; // rax
	__int64 v43; // r10
	__int64 v44; // rdx
	int v45; // r11d
	_QWORD* v46; // rax
	__int64 v47; // r10
	unsigned __int64* v48; // rdx
	unsigned __int64 v49; // r8
	__int64 v50; // rax
	__int64* v51; // rax
	__int64 v52; // rdx
	__int64 v53; // rax
	_QWORD* v54; // rax
	_QWORD* v55; // rbx
	_QWORD* v56; // rsi
	__int64 v57; // rcx
	_QWORD** v58; // rax
	_QWORD* v59; // rbx
	__int64 v60; // rcx
	_QWORD* v61; // rax
	_QWORD* v62; // rbx
	__int64 v63; // r14
	__int64 v64; // rsi
	_QWORD** v65; // rax
	_QWORD* v66; // rbx
	__int64 v67; // rcx
	__int64 v69; // [rsp+20h] [rbp-78h] BYREF
	__int64 v70; // [rsp+28h] [rbp-70h]

	sub_14013A0B0(a1 + 2496);
	if (!dword_140C8A0FC)
		dword_140C8A0FC = GetTickCount();
	TickCount = GetTickCount();
	++* (_DWORD*)(a1 + 48);
	v4 = TickCount - dword_140C8A0FC;
	dword_140C8A0FC = TickCount;
	v5 = (int*)qword_140C63750;
	v6 = *(float*)&a2 + *(float*)(a1 + 2904);
	*(float*)&dword_140C63664 = *(float*)&dword_140C63664 + (float)((float)v4 * 0.001);
	*(float*)(a1 + 2904) = v6;
	v7 = *v5;
	v8 = dword_140C3C430;
	if (v7 < dword_140C3C430)
		v8 = v7;
	if (!byte_140C3C440[v8])
	{
		sub_1400EA3E0(a1, "NextFrame", &unk_1409D0332);
		v9 = dword_140C3C470;
		if (*(_DWORD*)qword_140C63750 < dword_140C3C470)
			v9 = *(_DWORD*)qword_140C63750;
		if (!(*(_DWORD*)(a1 + 48) % dword_140C3C480[v9]))
			sub_1400EA3E0(a1, "FrameCount", L"i");
	}
	sub_1400E63A0(a1);
	v10 = *(_QWORD*)(a1 + 2880);
	if (v10)
	{
		if (*(float*)(v10 + 648) <= 0.0 || (v11 = *(_QWORD*)(v10 + 16)) != 0 && !sub_1400D1A60(v11))
			sub_1400E8BF0(a1);
	}
	v12 = *(_QWORD*)(a1 + 2888);
	v13 = 0;
	if (v12)
	{
		if (*(float*)(v12 + 648) <= 0.0 || (v14 = *(_QWORD*)(v12 + 16)) != 0 && !sub_1400D1A60(v14))
		{
			v15 = *(_QWORD*)(v12 + 32);
			if (*(_QWORD*)(v15 + 2888) == v12)
			{
				v16 = *(_QWORD*)(v15 + 2888);
				if (v16)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
					*(_QWORD*)(v15 + 2888) = 0i64;
				}
			}
			*(_BYTE*)(v12 + 29) &= 0x87u;
		}
	}
	v17 = *(_DWORD*)(a1 + 80);
	v18 = *(_DWORD*)(a1 + 84);
	v19 = *(float*)(a1 + 88);
	v20 = 0;
	v21 = 0;
	if (*(_QWORD*)(a1 + 72) != *(_QWORD*)(a1 + 80))
	{
		v22 = *(_QWORD*)(a1 + 400);
		v20 = 1;
		if (*(_QWORD*)(*(_QWORD*)(v22 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v22 + 32) + 112i64))
			sub_14005E2C0(*(_QWORD*)(a1 + 400));
		v23 = *(_QWORD*)(v22 + 16);
		v24 = sub_14005C1B0(v22, 0, 0);
		*(_DWORD*)(v23 + 8) = 5;
		*(_QWORD*)v23 = v24;
		*(_QWORD*)(v22 + 16) += 16i64;
		v25 = sub_1400578C0(v22);
		v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		v27 = *(_QWORD*)(v22 + 16);
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v27, L"nOldWidth", v28);
		*(_QWORD*)(v22 + 16) -= 16i64;
		v29 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		*(_QWORD*)v30 = *v29;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v31, L"nOldHeight", v32);
		*(_QWORD*)(v22 + 16) -= 16i64;
		*(_DWORD*)(a1 + 76) = v18;
		*(_DWORD*)(a1 + 72) = v17;
		v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		v34 = *(_QWORD*)(v22 + 16);
		*(_QWORD*)v34 = *v33;
		*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v34, L"nWidth", v17);
		*(_QWORD*)(v22 + 16) -= 16i64;
		v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		*(_QWORD*)v36 = *v35;
		*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v37, L"nHeight", v38);
		*(_QWORD*)(v22 + 16) -= 16i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 584i64))(qword_140C65670);
		v39 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		v40 = *(_QWORD*)(v22 + 16);
		*(_QWORD*)v40 = *v39;
		*(_DWORD*)(v40 + 8) = *((_DWORD*)v39 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v40, L"nRawWidth", v41);
		*(_QWORD*)(v22 + 16) -= 16i64;
		v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		*(_QWORD*)v43 = *v42;
		*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		sub_1400F06F0(v22, v44, L"nRawHeight", v45);
		*(_QWORD*)(v22 + 16) -= 16i64;
		v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v22 + 32) + 160i64), v25);
		*(_QWORD*)v47 = *v46;
		*(_DWORD*)(v47 + 8) = *((_DWORD*)v46 + 2);
		*(_QWORD*)(v22 + 16) += 16i64;
		v48 = (unsigned __int64*)sub_14018F0E0(&v69, L"fScale")[1];
		if (v48)
		{
			v49 = -1i64;
			do
				++v49;
			while (*((_BYTE*)v48 + v49));
			sub_140058710(v22, v48, v49);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v22 + 16) + 8i64) = 0;
			*(_QWORD*)(v22 + 16) += 16i64;
		}
		if (v70)
			sub_14018B900(v70, 0);
		v50 = *(_QWORD*)(v22 + 16);
		*(_DWORD*)(v50 + 8) = 3;
		*(double*)v50 = v19;
		*(_QWORD*)(v22 + 16) += 16i64;
		v51 = (__int64*)sub_1400580E0(v22, -3);
		sub_14005EA50(v22, v51, (int*)(*(_QWORD*)(v22 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v22 + 16) - 16i64));
		*(_QWORD*)(v22 + 16) -= 48i64;
		sub_1400EAA10(a1, 1, (__int64)L"T", v25);
		sub_1400579E0(v22, v52, v25);
	}
	if (v19 != *(float*)(a1 + 92))
	{
		*(float*)(a1 + 92) = v19;
		v21 = 1;
		sub_1400E4D60(a1, v19);
	}
	if (*(_QWORD*)(a1 + 3208))
	{
		v53 = 0i64;
		do
		{
			sub_1401572B0(*(_QWORD*)(*(_QWORD*)(a1 + 3200) + 8 * v53), a2, v20, v21);
			v53 = ++v13;
		} while ((unsigned __int64)v13 < *(_QWORD*)(a1 + 3208));
	}
	v54 = *(_QWORD**)(a1 + 120);
	v55 = (_QWORD*)*v54;
	if ((_QWORD*)*v54 != v54)
	{
		do
		{
			v56 = (_QWORD*)v55[2];
			v57 = v56[2];
			if (v57)
				sub_1400C7BA0(v57, v55[2], *((_BYTE*)v55 + 24));
			(*(void(__fastcall**)(_QWORD*))(*v56 + 8i64))(v56);
			v55 = (_QWORD*)*v55;
		} while (v55 != *(_QWORD**)(a1 + 120));
	}
	v58 = *(_QWORD***)(a1 + 120);
	v59 = *v58;
	if (*v58 != v58)
	{
		do
		{
			v60 = (__int64)v59;
			v59 = (_QWORD*)*v59;
			sub_14018B900(v60, 0);
		} while (v59 != *(_QWORD**)(a1 + 120));
	}
	**(_QWORD**)(a1 + 120) = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(*(_QWORD*)(a1 + 120) + 8i64) = *(_QWORD*)(a1 + 120);
	v61 = *(_QWORD**)(a1 + 136);
	v62 = (_QWORD*)*v61;
	if ((_QWORD*)*v61 != v61)
	{
		do
		{
			v63 = v62[2];
			v64 = v62[3];
			sub_1400C7CD0(v63, v64);
			if (v63)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v63 + 8i64))(v63);
			if (v64)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v64 + 8i64))(v64);
			v62 = (_QWORD*)*v62;
		} while (v62 != *(_QWORD**)(a1 + 136));
	}
	v65 = *(_QWORD***)(a1 + 136);
	v66 = *v65;
	if (*v65 != v65)
	{
		do
		{
			v67 = (__int64)v66;
			v66 = (_QWORD*)*v66;
			sub_14018B900(v67, 0);
		} while (v66 != *(_QWORD**)(a1 + 136));
	}
	**(_QWORD**)(a1 + 136) = *(_QWORD*)(a1 + 136);
	*(_QWORD*)(*(_QWORD*)(a1 + 136) + 8i64) = *(_QWORD*)(a1 + 136);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1 + 80i64))(a1);
	return sub_1400F3F00(a1 + 384);
}
// 1400E7706: variable 'v28' is possibly undefined
// 1400E7737: variable 'v30' is possibly undefined
// 1400E7749: variable 'v31' is possibly undefined
// 1400E7749: variable 'v32' is possibly undefined
// 1400E77C3: variable 'v36' is possibly undefined
// 1400E77D5: variable 'v37' is possibly undefined
// 1400E77D5: variable 'v38' is possibly undefined
// 1400E782B: variable 'v41' is possibly undefined
// 1400E785D: variable 'v43' is possibly undefined
// 1400E786F: variable 'v44' is possibly undefined
// 1400E786F: variable 'v45' is possibly undefined
// 1400E789A: variable 'v47' is possibly undefined
// 1400E7953: variable 'v52' is possibly undefined
// 1409D3894: using guessed type wchar_t aI[2];
// 1409D3924: using guessed type wchar_t aT_13[2];
// 140A17658: using guessed type wchar_t aNrawwidth[10];
// 140A17670: using guessed type wchar_t aNrawheight[11];
// 140A17688: using guessed type wchar_t aFscale[7];
// 140A17698: using guessed type wchar_t aNoldwidth[10];
// 140A176B0: using guessed type wchar_t aNoldheight[11];
// 140A176C8: using guessed type wchar_t aNwidth_0[7];
// 140A176D8: using guessed type wchar_t aNheight_0[8];
// 140C3C430: using guessed type int dword_140C3C430;
// 140C3C440: using guessed type _BYTE[32];
// 140C3C470: using guessed type int dword_140C3C470;
// 140C3C480: using guessed type int dword_140C3C480[14];
// 140C63664: using guessed type int dword_140C63664;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A0FC: using guessed type int dword_140C8A0FC;

