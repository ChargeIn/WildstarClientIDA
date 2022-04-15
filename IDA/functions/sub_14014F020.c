#include "../winhttp.h"

//----- (000000014014F020) ----------------------------------------------------
__int64 __fastcall sub_14014F020(_QWORD* a1)
{
	__int64 v1; // rbx
	__int64* v3; // rdx
	__int64 v4; // rcx
	int v5; // eax
	int v6; // eax
	_QWORD* v7; // r10
	_DWORD* v8; // rcx
	_QWORD* v9; // r8
	_DWORD* v10; // rcx
	unsigned __int64 v11; // rdx
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	_DWORD* v15; // rcx
	int v16; // eax
	__int64* v17; // rdx
	__int64 v18; // rcx
	int v19; // eax
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	_QWORD* v23; // rdi
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	__int64 v26; // rcx
	__int64 v27; // rdi
	__int64 v28; // rdx
	__int64 v29; // rdx
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	_QWORD* v33; // rdi
	unsigned __int64* v34; // rdx
	unsigned __int64 v35; // r8
	__int64 v36; // rcx
	__int64 result; // rax
	__int64 v38; // rdx
	unsigned int v39; // ebx
	__int64(__fastcall * *v40)(); // [rsp+20h] [rbp-E0h] BYREF
	int v41; // [rsp+28h] [rbp-D8h]
	_QWORD* v42; // [rsp+30h] [rbp-D0h]
	int v43; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v44)(); // [rsp+40h] [rbp-C0h] BYREF
	int v45; // [rsp+48h] [rbp-B8h]
	_QWORD* v46; // [rsp+50h] [rbp-B0h]
	int v47; // [rsp+58h] [rbp-A8h]
	__int128 v48; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v49[3]; // [rsp+70h] [rbp-90h] BYREF
	__int64 v50; // [rsp+88h] [rbp-78h]
	__int128 v51; // [rsp+90h] [rbp-70h]
	__int128 v52; // [rsp+A0h] [rbp-60h]
	int v53; // [rsp+B0h] [rbp-50h]
	__int128 v54; // [rsp+C0h] [rbp-40h]
	__int64 v55[3]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v56; // [rsp+E8h] [rbp-18h]
	_OWORD v57[2]; // [rsp+F0h] [rbp-10h]
	int v58; // [rsp+110h] [rbp+10h]
	__int64(__fastcall * *v59)(); // [rsp+120h] [rbp+20h] BYREF
	__int64 v60; // [rsp+128h] [rbp+28h]
	_QWORD* v61; // [rsp+130h] [rbp+30h]
	__int64(__fastcall * **v62)(); // [rsp+138h] [rbp+38h]
	__int64(__fastcall * *v63)(); // [rsp+140h] [rbp+40h] BYREF
	__int64 v64; // [rsp+148h] [rbp+48h]
	_QWORD* v65; // [rsp+150h] [rbp+50h]
	int v66; // [rsp+158h] [rbp+58h]

	v1 = 0i64;
	v3 = v49;
	v53 = 0;
	v4 = 0i64;
	do
	{
		v5 = *(_DWORD*)((char*)&unk_140A14E90 + v4);
		*(_DWORD*)((char*)&v52 + v4) = 0;
		v4 += 4i64;
		*(_DWORD*)((char*)&v50 + v4 + 4) = v5;
		*v3++ = 0i64;
	} while (v4 < 16);
	v53 |= 0x300u;
	v42 = a1;
	v43 = 1;
	v6 = -2;
	v7 = a1;
	v51 = 0i64;
	v52 = 0i64;
	v40 = off_140B569F0;
	v41 = -2;
	v8 = (_DWORD*)a1[3];
	if ((unsigned __int64)v8 < a1[2] && v8 != dword_140A12138 && v8[2] == 5)
	{
		sub_1400579E0((__int64)a1, (__int64)v3, -2);
		v9 = v42;
		v10 = dword_140A12138;
		v11 = v42[2];
		if (v42[3] < v11)
			v10 = (_DWORD*)v42[3];
		*(_QWORD*)v11 = *(_QWORD*)v10;
		*(_DWORD*)(v11 + 8) = v10[2];
		v9[2] += 16i64;
		v6 = sub_1400578C0((__int64)v42);
		v7 = v42;
		v41 = v6;
	}
	if (v7 && v6 != -2)
	{
		v12 = sub_14005C3C0(*(_QWORD*)(v7[4] + 160i64), v6);
		v14 = *(_QWORD*)(v13 + 16);
		*(_QWORD*)v14 = *v12;
		*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
		*(_QWORD*)(v13 + 16) += 16i64;
		v15 = (_DWORD*)(v42[2] - 16i64);
		v16 = v15 == dword_140A12138 ? -1 : v15[2];
		v42[2] = v15;
		if (v16 == 5)
		{
			v44 = off_140B569F0;
			v46 = 0i64;
			v47 = 1;
			v45 = -2;
			v59 = 0i64;
			v60 = 0i64;
			v63 = 0i64;
			v64 = 0i64;
			v58 = 0;
			v17 = v55;
			v18 = 0i64;
			do
			{
				v19 = *(_DWORD*)((char*)&v59 + v18);
				v18 += 4i64;
				++v17;
				*(_DWORD*)((char*)&v56 + v18 + 4) = v19;
				*(_DWORD*)((char*)v57 + v18 + 12) = *(_DWORD*)((char*)&v62 + v18 + 4);
				*(v17 - 1) = 0i64;
			} while (v18 < 16);
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v40[1])(&v40))
			{
				v20 = sub_14005C3C0(*(_QWORD*)(v42[4] + 160i64), v41);
				v22 = *(_QWORD*)(v21 + 16);
				*(_QWORD*)v22 = *v20;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v21 + 16) += 16i64;
				v23 = v42;
				v24 = (unsigned __int64*)sub_14018F0E0(&v59, L"fPoints")[1];
				if (v24)
				{
					v25 = -1i64;
					do
						++v25;
					while (*((_BYTE*)v24 + v25));
					sub_140058710((__int64)v23, v24, v25);
				}
				else
				{
					*(_DWORD*)(v23[2] + 8i64) = 0;
					v23[2] += 16i64;
				}
				if (v60)
					sub_14018B900(v60, 0);
				sub_14005E8E0((__int64)v42, v42[2] - 32i64, (int*)(v42[2] - 16i64), v42[2] - 16i64);
				v46 = v42;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v44[2])(&v44, 0xFFFFFFFFi64);
				v42[2] -= 32i64;
				v26 = (__int64)v46;
				v59 = off_140B56A08;
				v61 = v46;
				LODWORD(v60) = -2;
				v62 = &v44;
				*(_DWORD*)(v46[2] + 8i64) = 0;
				*(_QWORD*)(v26 + 16) += 16i64;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v59[2])(&v59, 0xFFFFFFFFi64);
				v27 = 0i64;
				v46[2] -= 16i64;
				while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v62)[1])(v62)
					&& (unsigned int)sub_1400FCBA0((__int64)&v59)
					&& v27 < 4)
				{
					sub_1400FC330((__int64)&v59);
					*((_DWORD*)&v56 + ++v27 + 1) = 0;
				}
				v59 = off_140B56A08;
				if (v61)
					sub_1400579E0((__int64)v61, v28, v60);
			}
			v63 = off_140B569F0;
			v65 = 0i64;
			v66 = 1;
			LODWORD(v64) = -2;
			if (((unsigned int(__fastcall*)(__int64(__fastcall***)()))v40[1])(&v40))
			{
				v30 = sub_14005C3C0(*(_QWORD*)(v42[4] + 160i64), v41);
				v32 = *(_QWORD*)(v31 + 16);
				*(_QWORD*)v32 = *v30;
				*(_DWORD*)(v32 + 8) = *((_DWORD*)v30 + 2);
				*(_QWORD*)(v31 + 16) += 16i64;
				v33 = v42;
				v34 = (unsigned __int64*)sub_14018F0E0(&v59, L"nOffsets")[1];
				if (v34)
				{
					v35 = -1i64;
					do
						++v35;
					while (*((_BYTE*)v34 + v35));
					sub_140058710((__int64)v33, v34, v35);
				}
				else
				{
					*(_DWORD*)(v33[2] + 8i64) = 0;
					v33[2] += 16i64;
				}
				if (v60)
					sub_14018B900(v60, 0);
				sub_14005E8E0((__int64)v42, v42[2] - 32i64, (int*)(v42[2] - 16i64), v42[2] - 16i64);
				v65 = v42;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v63[2])(&v63, 0xFFFFFFFFi64);
				v42[2] -= 32i64;
				v36 = (__int64)v65;
				v59 = off_140B56A08;
				v61 = v65;
				LODWORD(v60) = -2;
				v62 = &v63;
				*(_DWORD*)(v65[2] + 8i64) = 0;
				*(_QWORD*)(v36 + 16) += 16i64;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v59[2])(&v59, 0xFFFFFFFFi64);
				v65[2] -= 16i64;
				while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v62)[1])(v62)
					&& (unsigned int)sub_1400FCBA0((__int64)&v59)
					&& v1 < 4)
					*((_DWORD*)v57 + ++v1 + 3) = sub_1400FC140((__int64)&v59);
				v59 = off_140B56A08;
				if (v61)
					sub_1400579E0((__int64)v61, v29, v60);
			}
			v49[0] = v55[0];
			v48 = v54;
			v49[1] = v55[1];
			v51 = v57[0];
			v49[2] = v55[2];
			v63 = off_140B56A08;
			v50 = v56;
			v52 = v57[1];
			v53 = v58 | 0x300;
			if (v65)
				sub_1400579E0((__int64)v65, v29, v64);
			v44 = off_140B56A08;
			if (v46)
				sub_1400579E0((__int64)v46, v29, v45);
		}
	}
	result = sub_14014EAB0(a1, (__int64)&v48);
	v40 = off_140B56A08;
	v39 = result;
	if (v42)
	{
		sub_1400579E0((__int64)v42, v38, v41);
		return v39;
	}
	return result;
}
// 14014F153: variable 'v13' is possibly undefined
// 14014F220: variable 'v21' is possibly undefined
// 14014F356: variable 'v28' is possibly undefined
// 14014F39F: variable 'v31' is possibly undefined
// 14014F4C4: variable 'v29' is possibly undefined
// 14014F571: variable 'v38' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A2E500: using guessed type wchar_t aFpoints_1[8];
// 140A2E510: using guessed type wchar_t aNoffsets_1[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

