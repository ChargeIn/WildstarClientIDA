#include "../winhttp.h"

//----- (000000014075E3A0) ----------------------------------------------------
__int64 __fastcall sub_14075E3A0(_QWORD* a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 result; // rax
	unsigned __int64 v5; // rsi
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // r11d
	__int64* v13; // rax
	_QWORD* v14; // rax
	int v15; // r11d
	__int64 v16; // r8
	__int64 v17; // rdx
	__int64* v18; // r13
	__int64* v19; // r14
	__int64 v20; // r15
	__int64 v21; // rbx
	__int64 v22; // rax
	int v23; // ebp
	_QWORD* v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rdx
	int v27; // r11d
	int* v28; // rcx
	int* v29; // rax
	__int64 v30; // rsi
	int v31; // ebx
	_QWORD* v32; // rax
	__int64 v33; // rcx
	__int64 v34; // rdx
	unsigned __int16* v35; // r11
	__int64 v36; // rbx
	_QWORD* v37; // rax
	__int64 v38; // rdx
	unsigned __int16* v39; // r11
	__int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // rcx
	__int64(__fastcall * *v43)(); // [rsp+20h] [rbp-128h] BYREF
	int v44; // [rsp+28h] [rbp-120h]
	__int64 v45; // [rsp+30h] [rbp-118h]
	int v46; // [rsp+38h] [rbp-110h]
	__int64 v47[24]; // [rsp+40h] [rbp-108h] BYREF
	__int128 v48; // [rsp+100h] [rbp-48h]
	int* v49; // [rsp+110h] [rbp-38h]

	v3 = (__int64)a1;
	result = sub_140056D60(a1, 1u);
	v5 = (unsigned int)result;
	if ((_DWORD)result)
	{
		v6 = *(_QWORD*)(v3 + 32);
		v43 = off_140B569F0;
		v7 = *(_QWORD*)(v6 + 112);
		v45 = v3;
		v46 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v3);
		v8 = *(_QWORD*)(v3 + 16);
		v9 = sub_14005C1B0(v3, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v3 + 16) += 16i64;
		v10 = sub_1400578C0(v3);
		v11 = *(_QWORD*)(a2 + 192);
		v12 = v10;
		v44 = v10;
		v13 = *(__int64**)(*(_QWORD*)(a2 + 184) + 8 * (v5 % ((v11 - *(_QWORD*)(a2 + 184)) >> 3)));
		if (!v13)
			goto LABEL_7;
		while (*((_DWORD*)v13 + 2) != (_DWORD)v5)
		{
			v13 = (__int64*)*v13;
			if (!v13)
				goto LABEL_7;
		}
		v18 = v13 + 2;
		if (v13 == (__int64*)-16i64)
		{
		LABEL_7:
			v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v12);
			v16 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v16 = *v14;
			v17 = *((unsigned int*)v14 + 2);
			*(_DWORD*)(v16 + 8) = v17;
		}
		else
		{
			v19 = (__int64*)v13[3];
			if (v19 != (__int64*)v13[4])
			{
				do
				{
					v20 = *v19;
					if (*(_QWORD*)(*(_QWORD*)(v3 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v3 + 32) + 112i64))
						sub_14005E2C0(v3);
					v21 = *(_QWORD*)(v3 + 16);
					v22 = sub_14005C1B0(v3, 0, 0);
					*(_DWORD*)(v21 + 8) = 5;
					*(_QWORD*)v21 = v22;
					*(_QWORD*)(v3 + 16) += 16i64;
					v23 = sub_1400578C0(v3);
					v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v23);
					v25 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v25 = *v24;
					*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F06F0(v3, v26, L"nId", v27);
					*(_QWORD*)(v3 + 16) -= 16i64;
					sub_1400B7210((__int64)v47, (int*)L"$1n");
					v47[0] = (__int64)off_140B69230;
					v49 = 0i64;
					v48 = 0i64;
					v28 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v48 = v28;
					*((_QWORD*)&v48 + 1) = v28;
					v49 = v28 + 4;
					if (v28)
						*(_WORD*)v28 = 0;
					v29 = sub_14018B280(96i64, 0);
					v30 = (__int64)v29;
					if (v29)
					{
						v31 = *(_DWORD*)(v20 + 176);
						sub_1400B6390(v29);
						*(_QWORD*)v30 = off_140B69170;
						*(_DWORD*)(v30 + 88) = 1;
						sub_1400B6D70(v30, (__int64)L"name", v31);
					}
					else
					{
						v30 = 0i64;
					}
					sub_1400B7480((__int64)v47, (_QWORD*)v30);
					sub_1400B7660(v47);
					v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v23);
					v33 = *(_QWORD*)(v3 + 16);
					*(_QWORD*)v33 = *v32;
					*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F0870(v3, v34, L"strName", v35);
					v36 = *(_QWORD*)(v3 + 16) - 16i64;
					*(_QWORD*)(v3 + 16) = v36;
					v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v23);
					*(_QWORD*)v36 = *v37;
					*(_DWORD*)(v36 + 8) = *((_DWORD*)v37 + 2);
					*(_QWORD*)(v3 + 16) += 16i64;
					sub_1400F0870(v3, v38, L"strIcon", v39);
					*(_QWORD*)(v3 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v43);
					if ((_QWORD)v48)
						sub_14018B900(v48, 0);
					sub_1400B7390(v47);
					sub_1400579E0(v3, v40, v23);
					++v19;
				} while (v19 != (__int64*)v18[2]);
				v3 = v45;
				v12 = v44;
			}
			v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v3 + 32) + 160i64), v12);
			v42 = *(_QWORD*)(v3 + 16);
			*(_QWORD*)v42 = *v41;
			*(_DWORD*)(v42 + 8) = *((_DWORD*)v41 + 2);
		}
		*(_QWORD*)(v3 + 16) += 16i64;
		sub_1400579E0(v3, v17, v15);
		return 1i64;
	}
	return result;
}
// 14075E4C8: conditional instruction was optimized away because rax.8!=0
// 14075E4A0: variable 'v17' is possibly undefined
// 14075E4A0: variable 'v15' is possibly undefined
// 14075E58E: variable 'v26' is possibly undefined
// 14075E58E: variable 'v27' is possibly undefined
// 14075E691: variable 'v34' is possibly undefined
// 14075E691: variable 'v35' is possibly undefined
// 14075E6FF: variable 'v38' is possibly undefined
// 14075E6FF: variable 'v39' is possibly undefined
// 14075E739: variable 'v40' is possibly undefined
// 140A13CD0: using guessed type wchar_t aName_11[5];
// 140B4CB20: using guessed type wchar_t aStrname_108[8];
// 140B4CB30: using guessed type wchar_t a1n_17[4];
// 140B4CB38: using guessed type wchar_t aNid_42[4];
// 140B4CCE8: using guessed type wchar_t aStricon_19[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B69170: using guessed type __int64 (__fastcall *off_140B69170[23])();
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;

