#include "../winhttp.h"

//----- (0000000140673B80) ----------------------------------------------------
__int64 __fastcall sub_140673B80(__int64 a1, __int64 a2)
{
	int v3; // ecx
	__int64 v5; // rax
	unsigned int v6; // edi
	unsigned int v7; // ebx
	_DWORD* v8; // rcx
	unsigned int* v9; // rdx
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	unsigned int v13; // r11d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	unsigned int v18; // r15d
	__int64 v19; // rsi
	__int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	unsigned int i; // ebx
	__int64 v25; // rax
	__int64 v26; // rax
	int v27; // eax
	unsigned int v28; // r9d
	int v29; // ebx
	__int64 v30; // rdx
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64 v33; // rbp
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	int v37; // r9d
	__int64 v38; // rsi
	__int64 v39; // rcx
	__int64 v40; // rbx
	__int64 v41; // rax
	__int64(__fastcall * *v43)(); // [rsp+30h] [rbp-58h] BYREF
	int v44; // [rsp+38h] [rbp-50h]
	__int64 v45; // [rsp+40h] [rbp-48h]
	int v46; // [rsp+48h] [rbp-40h]
	unsigned int v47; // [rsp+90h] [rbp+8h] BYREF
	unsigned int v48; // [rsp+A0h] [rbp+18h] BYREF
	int v49; // [rsp+A8h] [rbp+20h] BYREF

	v3 = *(_DWORD*)(a1 + 1344);
	if (v3)
	{
		v5 = *(_QWORD*)(a1 + 168);
		if (v5 && (unsigned int)(*(_DWORD*)(v5 + 320) - 1) > 1)
			return 0i64;
		if (*(_QWORD*)(a1 + 168))
			goto LABEL_7;
	}
	if (*(_DWORD*)(a1 + 1348) && a1 != -904)
	{
	LABEL_7:
		v6 = 0;
		v7 = 0;
		v49 = 0;
		v48 = 0;
		v47 = 0;
		if (v3)
		{
			v8 = *(_DWORD**)(a1 + 168);
			if (v8)
			{
				v9 = (unsigned int*)(a1 + 192);
				if (!*(_DWORD*)(a1 + 1336))
					v9 = 0i64;
				sub_14040EFB0(v8, v9, (unsigned int*)&v49, &v47, &v48);
				v7 = v47;
				if (v47)
				{
					v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
					v12 = *(_QWORD*)(v11 + 16);
					*(_QWORD*)v12 = *v10;
					*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
					*(_QWORD*)(v11 + 16) += 16i64;
					sub_1400F06F0(*(_QWORD*)(a2 + 16), v12, L"nMaximum", v7);
					v13 = v48;
					*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					if (v13 > v7)
					{
						v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
						v16 = *(_QWORD*)(v15 + 16);
						*(_QWORD*)v16 = *v14;
						*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
						*(_QWORD*)(v15 + 16) += 16i64;
						sub_1400F06F0(*(_QWORD*)(a2 + 16), v16, L"nAbsoluteMax", v17);
						*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
					}
				}
			}
		}
		v18 = 0;
		if (*(_DWORD*)(a1 + 1348) && a1 != -904 && *(_DWORD*)(a1 + 1336) && a1 != -192 && *(_DWORD*)(a1 + 496))
		{
			sub_14066E4C0(a1);
			v19 = *(_QWORD*)a1;
			v20 = *(_QWORD*)(*(_QWORD*)a1 + 32i64);
			v43 = off_140B569F0;
			v18 = 1;
			v21 = *(_QWORD*)(v20 + 112);
			v45 = v19;
			v46 = 1;
			if (*(_QWORD*)(v20 + 120) >= v21)
				sub_14005E2C0(v19);
			v22 = *(_QWORD*)(v19 + 16);
			v23 = sub_14005C1B0(v19, 0, 0);
			*(_DWORD*)(v22 + 8) = 5;
			*(_QWORD*)v22 = v23;
			*(_QWORD*)(v19 + 16) += 16i64;
			v44 = sub_1400578C0(v19);
			for (i = 0; ; ++i)
			{
				v25 = 0i64;
				if (*(_DWORD*)(a1 + 1336))
					v25 = a1 + 192;
				if (i >= *(_DWORD*)(v25 + 304))
					break;
				v26 = 0i64;
				if (*(_DWORD*)(a1 + 1348))
					v26 = a1 + 904;
				v27 = sub_140514660(*(_BYTE*)(v26 + i));
				if (*(_DWORD*)(a1 + 1352) && i < 8)
					v28 = *(_DWORD*)(a1 + 4i64 * i + 1304);
				else
					v28 = 0;
				sub_140677950((__int64*)a1, (__int64)&v43, v27, v28, i);
			}
			v29 = v44;
			sub_1400FB2A0(a2, (__int64)L"arRuneSlots", v44);
			v31 = v45;
			if (!v45)
				return v18;
		}
		else
		{
			if (!*(_DWORD*)(a1 + 1344))
				return v18;
			v32 = *(_QWORD*)(a1 + 168);
			if (!v32)
				return v18;
			v33 = sub_14020DF20(*(_DWORD*)(v32 + 368));
			if (!v7)
				return v18;
			v18 = 1;
			v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
			v36 = *(_QWORD*)(v35 + 16);
			v37 = v49;
			*(_QWORD*)v36 = *v34;
			*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
			*(_QWORD*)(v35 + 16) += 16i64;
			sub_1400F06F0(*(_QWORD*)(a2 + 16), v36, L"nMinimum", v37);
			*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
			if (!v33)
				return v18;
			v38 = *(_QWORD*)a1;
			v46 = 1;
			v39 = *(_QWORD*)(v38 + 32);
			v43 = off_140B569F0;
			v45 = v38;
			if (*(_QWORD*)(v39 + 120) >= *(_QWORD*)(v39 + 112))
				sub_14005E2C0(v38);
			v40 = *(_QWORD*)(v38 + 16);
			v41 = sub_14005C1B0(v38, 0, 0);
			*(_DWORD*)(v40 + 8) = 5;
			*(_QWORD*)v40 = v41;
			*(_QWORD*)(v38 + 16) += 16i64;
			v29 = sub_1400578C0(v38);
			v44 = v29;
			if (*(_DWORD*)(v33 + 4))
			{
				do
				{
					sub_140677950((__int64*)a1, (__int64)&v43, *(_DWORD*)(v33 + 4i64 * v6 + 8), 0, v6);
					++v6;
				} while (v6 < *(_DWORD*)(v33 + 4));
				v29 = v44;
				v38 = v45;
				sub_1400FB2A0(a2, (__int64)L"arRuneSlots", v44);
			}
			if (!v38)
				return v18;
			v31 = v38;
		}
		sub_1400579E0(v31, v30, v29);
		return v18;
	}
	return 0i64;
}
// 140673BB7: conditional instruction was optimized away because ecx.4!=0
// 140673C7F: variable 'v11' is possibly undefined
// 140673CD5: variable 'v15' is possibly undefined
// 140673CF8: variable 'v17' is possibly undefined
// 140673EAC: variable 'v35' is possibly undefined
// 140673F98: variable 'v30' is possibly undefined
// 140B2FC78: using guessed type wchar_t aNminimum[9];
// 140B2FC90: using guessed type wchar_t aArruneslots_0[12];
// 140B2FCA8: using guessed type wchar_t aNabsolutemax[13];
// 140B2FCC8: using guessed type wchar_t aArruneslots[12];
// 140B2FCF0: using guessed type wchar_t aNmaximum[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

