#include "../winhttp.h"

//----- (00000001401DD6D0) ----------------------------------------------------
__int64 __fastcall sub_1401DD6D0(__m128i* a1, signed int a2, signed int a3, int a4)
{
	__int64 v4; // r14
	__int64 v8; // r12
	__int64 v9; // rbx
	__int64 v10; // r15
	signed int v11; // eax
	signed int v12; // eax
	int v13; // eax
	signed int v14; // eax
	signed int v15; // eax
	int v16; // eax
	unsigned __int64 v17; // rcx
	unsigned int v20; // eax
	unsigned __int16* v21; // rsi
	__int64 v22; // rax
	unsigned __int64 v23; // rcx
	unsigned __int16* v24; // r15
	__int64 v25; // rax
	unsigned __int64 v26; // rcx
	__m128i* v27; // rdi
	const __m128i* v28; // rbx
	__int64 v29; // r14
	int v30; // eax
	const wchar_t* v31; // rcx
	unsigned int v32; // ebx
	unsigned int v33; // r14d
	unsigned __int64 v34; // r13
	unsigned __int64 v35; // rbx
	__int64 v36; // rdx
	__int64 v37; // rcx
	__int64 v38; // r8
	__int64 v39; // r9
	__int64 v40; // rdx
	__int64 v41; // rcx
	__int64 v42; // r8
	__int64 v43; // r9
	__m128i* v44; // r13
	const __m128i* v45; // rax
	__m128i* v46; // r14
	__int16 v47; // ax
	__int8* i; // rbx
	__int64 v49; // rdi
	__int64 v50; // rcx
	__int64 v51; // r8
	__int64 v52; // rcx
	__int64 v53; // r8
	__int64 v54; // rcx
	__int64 v55; // r8
	__int64 v56; // rcx
	__int64 v57; // r8
	unsigned int v58; // eax
	__int64 v59; // rbx
	__int64 v60; // [rsp+48h] [rbp-C0h]
	const wchar_t* v61; // [rsp+48h] [rbp-C0h]
	_WORD* v62; // [rsp+50h] [rbp-B8h]
	__m128i* v63; // [rsp+58h] [rbp-B0h] BYREF
	int v64; // [rsp+60h] [rbp-A8h]
	int v65; // [rsp+64h] [rbp-A4h]
	int v66; // [rsp+68h] [rbp-A0h]
	int v67; // [rsp+6Ch] [rbp-9Ch]
	const __m128i* v68[3]; // [rsp+70h] [rbp-98h] BYREF
	__m128i v69[33]; // [rsp+88h] [rbp-80h] BYREF
	__m128i v70[33]; // [rsp+298h] [rbp+190h] BYREF
	char v71[528]; // [rsp+4A8h] [rbp+3A0h] BYREF
	int v72[132]; // [rsp+6B8h] [rbp+5B0h] BYREF

	v4 = a4;
	v68[0] = a1;
	if (!a1 || !a1->m128i_i16[0])
		return 0i64;
	v8 = qword_140C799D8;
	v9 = *(_QWORD*)(qword_140C799D8 + 8);
	v63 = a1;
	v64 = a2;
	v65 = a3;
	v66 = a4;
	v67 = -1;
	v10 = qword_140C799D8;
	if (!v9)
		goto LABEL_23;
	do
	{
		v11 = *(_DWORD*)(v9 + 40);
		if (v11 < a2
			|| v11 == a2
			&& ((v12 = *(_DWORD*)(v9 + 44), v12 < a3)
				|| v12 == a3
				&& ((v13 = *(_DWORD*)(v9 + 48), v13 < (int)v4)
					|| v13 == (_DWORD)v4 && (int)sub_14018E2C0(*(_QWORD*)(v9 + 32), (unsigned __int16*)a1) < 0)))
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	} while (v9);
	if (v10 == v8
		|| (v14 = *(_DWORD*)(v10 + 40), a2 < v14)
		|| a2 == v14
		&& ((v15 = *(_DWORD*)(v10 + 44), a3 < v15)
			|| a3 == v15
			&& ((v16 = *(_DWORD*)(v10 + 48), (int)v4 < v16)
				|| (_DWORD)v4 == v16 && (int)sub_14018E2C0((__int64)a1, *(unsigned __int16**)(v10 + 32)) < 0)))
	{
	LABEL_23:
		v60 = v8;
	}
	else
	{
		v60 = v10;
	}
	if (v60 != v8)
	{
		v17 = *(unsigned int*)(v60 + 52);
		if (v17 >= qword_140C799F8)
			return 0i64;
		else
			return **(_QWORD**)(qword_140C799F0 + 8 * v17);
	}
	v20 = sub_1401DD410((unsigned __int16*)a1);
	v21 = 0i64;
	v62 = 0i64;
	v63 = **(__m128i***)(qword_140C799F0 + 8i64 * v20);
	if (a3 < 17)
	{
		v22 = sub_14022D500(a3);
		if (v22)
		{
			v23 = *(_QWORD*)(v22 + 8);
			if (v23)
			{
				if (v23 <= qword_140C3FE70)
					v21 = (unsigned __int16*)(v23 + qword_140C3FE68);
			}
		}
	}
	if ((int)v4 >= 3)
		v24 = 0i64;
	else
		v24 = (unsigned __int16*)*(&off_140C58760 + v4);
	if (a2 < 32)
	{
		v25 = sub_1401F53E0(a2);
		if (v25 && (v26 = *(_QWORD*)(v25 + 8)) != 0 && v26 <= qword_140C3FE70)
			v62 = (_WORD*)(v26 + qword_140C3FE68);
		else
			v62 = 0i64;
	}
	v27 = (__m128i*)v68[0];
	v28 = sub_1407DD8D8(v68[0], 0x2Eu);
	if (!v28)
		v28 = v68[0];
	v29 = ((char*)v28 - (char*)v68[0]) >> 1;
	v30 = sub_14018E2C0((__int64)v28, L".dds");
	v31 = L".tex";
	if (v30)
		v31 = (const wchar_t*)v28;
	v32 = 0;
	v61 = v31;
	if ((unsigned int)v29 < 5
		|| (unsigned int)sub_14018E3E0((__int64)&v68[0]->m128i_i64[-1] + 2 * (unsigned int)v29 - 2, L"_Mask", 5ui64))
	{
		if ((unsigned int)v29 < 6
			|| (unsigned int)sub_14018E3E0((__int64)&v68[0]->m128i_i64[-1] + 2 * (unsigned int)v29 - 4, L"_Color", 6ui64))
		{
			if ((unsigned int)v29 < 7
				|| (unsigned int)sub_14018E3E0((__int64)&v68[0]->m128i_i64[-1] + 2 * (unsigned int)v29 - 6, L"_Normal", 7ui64))
			{
				if ((unsigned int)v29 >= 4
					&& !(unsigned int)sub_14018E3E0((__int64)&v68[0]->m128i_i64[-1] + 2 * (unsigned int)v29, L"_Dye", 4ui64))
				{
					v32 = 4;
				}
			}
			else
			{
				v32 = 7;
			}
		}
		else
		{
			v32 = 6;
		}
	}
	else
	{
		v32 = 5;
	}
	v33 = v29 - v32;
	v34 = 2i64 * v32;
	v35 = v33;
	sub_1407DB590(v72, (int*)((char*)v68[0]->m128i_i32 + v35 * 2), v34);
	if (v34 >= 0x208)
	{
		_report_rangecheckfailure(v37, v36, v38, v39);
		JUMPOUT(0x1401DDCD6i64);
	}
	*(_WORD*)((char*)v72 + v34) = 0;
	sub_1407DB590(v70[0].m128i_i32, v27->m128i_i32, 2i64 * v33);
	if (v35 >= 260)
	{
		_report_rangecheckfailure(v41, v40, v42, v43);
		__debugbreak();
	}
	v44 = (__m128i*)((char*)v70 + v35 * 2);
	v70[0].m128i_i16[v35] = 0;
	if (v21 || v24)
	{
		v45 = sub_1407DD8D8(v70, 0x5Cu);
		v46 = (__m128i*) & v45->m128i_i8[2];
		if (!v45)
			v46 = v70;
		if (v46 < v44)
		{
			do
			{
				v47 = v46->m128i_i16[1];
				for (i = &v46->m128i_i8[2]; v47; i += 2)
				{
					if (v47 == 95)
						break;
					v47 = *((_WORD*)i + 1);
				}
				v49 = (i - (__int8*)v46) >> 1;
				if (!v21 || (unsigned int)sub_14018E3E0((__int64)v46, v21, (i - (__int8*)v46) >> 1) || v21[v49])
				{
					if (!v24)
						goto LABEL_79;
				}
				else
				{
					v21 = 0i64;
					if (!v24)
						break;
				}
				if (!(unsigned int)sub_14018E3E0((__int64)v46, v24, (i - (__int8*)v46) >> 1) && !v24[v49])
				{
					v24 = 0i64;
					if (!v21)
						break;
				}
			LABEL_79:
				v46 = (__m128i*)(i + 2);
			} while (i + 2 < (__int8*)v44);
		}
	}
	if (v62 && *v62)
		sub_14001B370(v71, 260i64, L"%s.%s%s", v72, v62, v61);
	else
		sub_14001B370(v71, 260i64, L"%s%s", v72, v61);
	if (v21
		&& (v24
			&& (sub_14001B370(v69, 260i64, L"%s_%s_%s%s", v70, v21, v24, v71), (unsigned int)sub_1401B58D0(v50, v69, v51))
			|| (sub_14001B370(v69, 260i64, L"%s_%s%s", v70, v21, v71), (unsigned int)sub_1401B58D0(v52, v69, v53)))
		|| v24 && (sub_14001B370(v69, 260i64, L"%s_%s%s", v70, v24, v71), (unsigned int)sub_1401B58D0(v54, v69, v55))
		|| (sub_14001B370(v69, 260i64, L"%s%s", v70, v71), (unsigned int)sub_1401B58D0(v56, v69, v57)))
	{
		v58 = sub_1401DD570((unsigned __int16*)v69);
		v59 = v58;
		v67 = v58;
		sub_1401DE150((__int64)&unk_140C799D0, (__int64)v68, (__int64)&v63);
		return **(_QWORD**)(qword_140C799F0 + 8 * v59);
	}
	else
	{
		sub_1401DE150((__int64)&unk_140C799D0, (__int64)v68, (__int64)&v63);
		return 0i64;
	}
}
// 1401DDCD1: control flows out of bounds to 1401DDCD6
// 1401DDBB4: variable 'v50' is possibly undefined
// 1401DDBB4: variable 'v51' is possibly undefined
// 1401DDBF2: variable 'v52' is possibly undefined
// 1401DDBF2: variable 'v53' is possibly undefined
// 1401DDC31: variable 'v54' is possibly undefined
// 1401DDC31: variable 'v55' is possibly undefined
// 1401DDC66: variable 'v56' is possibly undefined
// 1401DDC66: variable 'v57' is possibly undefined
// 1401DDCCB: variable 'v41' is possibly undefined
// 1401DDCCB: variable 'v40' is possibly undefined
// 1401DDCCB: variable 'v42' is possibly undefined
// 1401DDCCB: variable 'v43' is possibly undefined
// 1401DDCD1: variable 'v37' is possibly undefined
// 1401DDCD1: variable 'v36' is possibly undefined
// 1401DDCD1: variable 'v38' is possibly undefined
// 1401DDCD1: variable 'v39' is possibly undefined
// 1407DEDF4: using guessed type __int64 __fastcall _report_rangecheckfailure(_QWORD, _QWORD, _QWORD, _QWORD);
// 140A4AD38: using guessed type wchar_t aMask_1[6];
// 140A4AD48: using guessed type wchar_t aColor_2[7];
// 140A4AD58: using guessed type wchar_t aDds[5];
// 140A4AD68: using guessed type wchar_t aTex_1[5];
// 140A4AD78: using guessed type wchar_t aSSS_5[8];
// 140A4AD88: using guessed type wchar_t aSSSS_3[11];
// 140A4AE20: using guessed type wchar_t aSS_15[5];
// 140A4AE30: using guessed type wchar_t aSSS_4[8];
// 140A4AE40: using guessed type wchar_t aSSS_3[8];
// 140A4AE50: using guessed type wchar_t aSS_14[5];
// 140A4AE60: using guessed type wchar_t aNormal[8];
// 140A4AE70: using guessed type wchar_t aDye[5];
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C58760: using guessed type void *off_140C58760;
// 140C799D8: using guessed type __int64 qword_140C799D8;
// 140C799F0: using guessed type __int64 qword_140C799F0;
// 140C799F8: using guessed type __int64 qword_140C799F8;
// 1401DD6D0: using guessed type int var_260[132];
// 1401DD6D0: using guessed type __m128i var_680[33];
// 1401DD6D0: using guessed type __m128i var_890[33];

