#include "../winhttp.h"

//----- (00000001404F7F50) ----------------------------------------------------
__int64 __fastcall sub_1404F7F50(__int64 a1, __int64 a2, WCHAR* a3, __int64 a4, __int64 a5)
{
	WCHAR* v8; // r13
	__int64 v9; // rsi
	unsigned __int64 i; // rbx
	wchar_t* v11; // rdx
	__int64 v12; // rax
	wchar_t* v13; // rax
	int* v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	__int64 v17; // r14
	__int64 v18; // rax
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rax
	WCHAR* v23; // r12
	__int64 v24; // rax
	WCHAR* v25; // r15
	unsigned int v26; // eax
	unsigned int v27; // ebp
	unsigned int j; // esi
	__int64 v29; // rax
	__int64 v30; // rdi
	unsigned __int64 v31; // rcx
	unsigned __int16* v32; // rdx
	int v33; // eax
	_DWORD* v34; // rax
	__int64 v35; // rax
	float v36; // xmm1_4
	int v37; // ecx
	float v38; // xmm1_4
	float v39; // xmm1_4
	bool v41; // [rsp+40h] [rbp-E8h] BYREF
	WCHAR* v42; // [rsp+48h] [rbp-E0h]
	__m128i* v43; // [rsp+50h] [rbp-D8h]
	__m128i* v44; // [rsp+58h] [rbp-D0h]
	int v45[4]; // [rsp+60h] [rbp-C8h] BYREF
	_OWORD v46[6]; // [rsp+70h] [rbp-B8h] BYREF

	v42 = a3;
	v8 = 0i64;
	sub_1400D45E0((__int64)v46, a1, a2, a5, 0i64);
	v9 = 0i64;
	for (i = 0i64; i < 3; ++i)
	{
		v11 = off_140B0FA30[i];
		v41 = 0;
		v12 = sub_1401A6B80(a5, v11);
		if (v12)
		{
			v13 = (wchar_t*)sub_1401A4F40(v12 + 32);
			sub_1401A52E0(v13, &v41);
			if (v41)
				v9 |= 1i64 << i;
		}
	}
	v14 = sub_14018B280(7312i64, 0);
	if (v14)
		v15 = sub_1404F4BC0((__int64)v14, a1, a2, v42, v46, a4, v9);
	else
		v15 = 0i64;
	v16 = sub_1401A6B80(a5, L"Camera");
	if (v16)
		v17 = sub_1401A4F40(v16 + 32);
	else
		v17 = 0i64;
	v18 = sub_1401A6B80(a5, L"Overlay");
	if (v18)
		v44 = (__m128i*)sub_1401A4F40(v18 + 32);
	else
		v44 = 0i64;
	v19 = sub_1401A6B80(a5, L"Mask");
	if (v19)
		v43 = (__m128i*)sub_1401A4F40(v19 + 32);
	else
		v43 = 0i64;
	v20 = sub_1401A6B80(a5, L"Animated");
	if (v20)
		v42 = (WCHAR*)sub_1401A4F40(v20 + 32);
	else
		v42 = 0i64;
	v21 = sub_1401A6B80(a5, L"Quality");
	if (v21)
		v8 = (WCHAR*)sub_1401A4F40(v21 + 32);
	v22 = sub_1401A6B80(a5, L"Frame");
	if (v22)
		v23 = (WCHAR*)sub_1401A4F40(v22 + 32);
	else
		v23 = 0i64;
	v24 = sub_1401A6B80(a5, L"Speed");
	if (v24)
		v25 = (WCHAR*)sub_1401A4F40(v24 + 32);
	else
		v25 = 0i64;
	if (!v17)
		goto LABEL_64;
	if (qword_140C63838)
	{
		v26 = qword_140C63838(off_140A6B860, qword_140C63858);
	LABEL_37:
		v27 = v26;
		goto LABEL_38;
	}
	if (dword_140C6466C)
	{
		v27 = 0;
	}
	else
	{
		if ((int)sub_140218B60() >= 0)
		{
			v26 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C63EB8 + 40i64))(qword_140C63EB8);
			goto LABEL_37;
		}
		v27 = 0;
	}
LABEL_38:
	for (j = 0; j < v27; ++j)
	{
		if (qword_140C63848)
		{
			v29 = qword_140C63848(off_140A6B860, j, qword_140C63858);
		}
		else
		{
			if (dword_140C6466C)
			{
				v30 = 0i64;
				goto LABEL_47;
			}
			if ((int)sub_140218B60() < 0)
			{
				v30 = 0i64;
				goto LABEL_47;
			}
			v29 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63EB8 + 32i64))(qword_140C63EB8, j);
		}
		v30 = v29;
	LABEL_47:
		v31 = *(_QWORD*)(v30 + 8);
		if (v31)
		{
			if (v31 <= qword_140C3FE70)
				v32 = (unsigned __int16*)(v31 + qword_140C3FE68);
			else
				v32 = 0i64;
		}
		else
		{
			v32 = 0i64;
		}
		if (!(unsigned int)sub_14018E2C0(v17, v32))
		{
			v33 = *(_DWORD*)v30;
			*(_DWORD*)(v15 + 1040) = 1;
			*(_DWORD*)(v15 + 2080) = v33;
			break;
		}
	}
	if (j == v27)
	{
		if (*(char*)(v15 + 29) >= 0)
		{
			v34 = sub_1400CB0E0(v15, v45, v15 + 64);
			*(_DWORD*)(v15 + 396) = *v34;
			*(_DWORD*)(v15 + 400) = v34[1];
			*(_DWORD*)(v15 + 404) = v34[2];
			*(_DWORD*)(v15 + 408) = v34[3];
			*(_BYTE*)(v15 + 29) |= 0x80u;
			v35 = v15;
			do
			{
				if (!*(_DWORD*)(v35 + 392))
					break;
				*(_DWORD*)(v35 + 392) = 0;
				v35 = *(_QWORD*)(v35 + 16);
			} while (v35);
		}
		v36 = 1.0;
		v37 = *(_DWORD*)(v15 + 408) - *(_DWORD*)(v15 + 400);
		if (v37)
			v36 = (float)(*(_DWORD*)(v15 + 404) - *(_DWORD*)(v15 + 396)) / (float)v37;
		sub_140500010(v15, v36);
	}
LABEL_64:
	if (v44)
		sub_1404F68E0(v15, v44);
	if (v43)
		sub_1404F7E80(v15, v43);
	if (v42)
	{
		*(_DWORD*)(v15 + 1044) = sub_14018E820(v42);
		sub_1404FFDD0(v15);
	}
	if (v8)
	{
		v38 = *(double*)sub_1407DFE80(v8, 0i64).m128_u64;
		*(float*)(v15 + 1056) = v38;
		sub_1404FFA00(v15);
	}
	if (v23)
	{
		*(_DWORD*)(v15 + 1052) = sub_14018E820(v23);
		sub_1404FFDD0(v15);
	}
	if (v25)
	{
		v39 = *(double*)sub_1407DFE80(v25, 0i64).m128_u64;
		*(float*)(v15 + 1060) = v39;
		sub_1404FFDD0(v15);
	}
	return v15;
}
// 140A6B860: using guessed type wchar_t *off_140A6B860[2];
// 140B0F880: using guessed type wchar_t aFrame_0[6];
// 140B0F898: using guessed type wchar_t aQuality_0[8];
// 140B0F8B0: using guessed type wchar_t aSpeed_0[6];
// 140B0FA30: using guessed type wchar_t *off_140B0FA30[3];
// 140B0FAB0: using guessed type wchar_t aOverlay_1[8];
// 140B0FAC8: using guessed type wchar_t aCamera_0[7];
// 140B0FAE0: using guessed type wchar_t aAnimated_0[9];
// 140B0FB00: using guessed type wchar_t aMask_2[5];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63EB8: using guessed type __int64 qword_140C63EB8;
// 140C6466C: using guessed type int dword_140C6466C;
// 1404F7F50: using guessed type _OWORD var_B8[6];
// 1404F7F50: using guessed type int var_C8[4];

