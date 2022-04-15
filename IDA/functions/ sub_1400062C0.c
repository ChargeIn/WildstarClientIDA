#include "../winhttp.h"

//----- (00000001400062C0) ----------------------------------------------------
void __fastcall sub_1400062C0(__int64 a1, unsigned int* a2, int a3)
{
	int v3; // ebp
	unsigned __int64 v5; // rcx
	unsigned __int64 v8; // r14
	__int64 v9; // r8
	unsigned int v10; // edx
	_DWORD* v11; // rax
	unsigned int v12; // eax
	unsigned int v13; // esi
	unsigned __int64 v14; // r14
	unsigned __int64 v15; // rbx
	__int64 v16; // rcx
	int* v17; // rax
	unsigned __int64 v18; // rcx
	int* v19; // rdi
	int* v20; // rdx
	__int64 v21; // rcx
	int* v22; // rax
	__int64(__fastcall * *v23)(); // rcx
	__int64 v24; // r14
	bool v25; // zf
	unsigned int v26; // esi
	int* v27; // rax
	__int64(__fastcall * *v28)(); // rcx
	int* v29; // rdi
	int* v30; // rbx
	__int64 v31; // rax
	int** v32; // rax
	__int64 v33; // rsi
	__int64 v34; // rdi
	unsigned int v35; // eax
	__int64 v36; // rdi
	__int64 v37; // rcx
	int v38; // esi
	__int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdi
	__int64 v42; // rbx
	__int64 v43; // rax
	unsigned int v44; // ebx
	_QWORD* v45; // rax
	__int64 v46; // rdx
	int v47; // r10d
	_QWORD* v48; // rax
	__int64 v49; // r11
	__int64 v50; // rdx
	int v51; // r10d
	__int64 i; // rcx
	__int64 v53; // rdx
	int* v54; // rdi
	int* v55; // rbx
	int** v56; // rax
	__int64 v57; // rdi
	unsigned int v58; // eax
	__int64 v59; // rdi
	__int64 v60; // rcx
	int v61; // esi
	__int64 v62; // rcx
	__int64 v63; // rax
	__int64 v64; // [rsp+28h] [rbp-40h]
	__int64 v65; // [rsp+30h] [rbp-38h] BYREF
	unsigned __int64 v66; // [rsp+38h] [rbp-30h]
	int* v67; // [rsp+70h] [rbp+8h] BYREF

	v3 = 0;
	v5 = *(_QWORD*)(a1 + 160);
	v8 = 0i64;
	if (v5)
	{
		v9 = *(_QWORD*)(a1 + 152);
		v10 = *a2;
		v11 = (_DWORD*)(v9 + 8);
		while (*v11 != v10)
		{
			++v8;
			v11 += 4;
			if (v8 >= v5)
				goto LABEL_5;
		}
		v24 = 16 * v8;
		v25 = qword_140C65898 == 0;
		v26 = *(_DWORD*)(v24 + v9 + 12);
		*(_DWORD*)(v24 + v9 + 12) = a2[1];
		if (!v25)
		{
			v27 = sub_14018B280(18i64, 0);
			if (v27)
			{
				v28 = off_140B55060;
				*((_QWORD*)v27 + 1) = 0i64;
				*(_QWORD*)v27 = off_140B55060;
			}
			else
			{
				v27 = 0i64;
			}
			v29 = v27 + 4;
			v30 = v27 + 4;
			*((_WORD*)v27 + 8) = 0;
			if (!a3)
			{
				v31 = *(_QWORD*)(a1 + 152);
				if (*(_DWORD*)(v24 + v31 + 12) > v26)
				{
					v32 = sub_1403D2200((__int64)v28, &v67, *(_DWORD*)(v24 + v31 + 8));
					v30 = *v32;
					*v32 = v29;
					if (v67)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v67 - 2) + 8i64))(v67 - 4);
					if (*((_QWORD*)v30 - 1))
						sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v30, 0, 0i64);
				}
			}
			sub_1404312A0(*(_QWORD*)(qword_140C65898 + 29504), v24 + *(_QWORD*)(a1 + 152), (__int64)v30, a3);
			if (qword_140C65B78)
				sub_140575DD0();
			v33 = *(_QWORD*)(a1 + 152);
			v34 = *(_QWORD*)qword_140C658D0;
			v35 = sub_1403D2140(qword_140C65898, *(_DWORD*)(v33 + v24 + 8));
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(v34 + 8))(
				qword_140C658D0,
				*(unsigned int*)(v33 + v24 + 8),
				v35,
				0i64);
			v36 = qword_140C65898;
			v37 = *(_QWORD*)(qword_140C65898 + 32736);
			if (v37)
			{
				sub_1404356B0(v37, v24 + *(_QWORD*)(a1 + 152), (__int64)v30, a3);
				v36 = qword_140C65898;
			}
			if (*a2 - 74 <= 1)
			{
				v38 = sub_1403D2140(v36, 0x4Bu);
				if ((unsigned int)sub_1403D2140(v36, 0x4Au))
					v3 = *(_DWORD*)(v36 + 240) + 10 * v38;
				*(_DWORD*)(v36 + 244) = v3;
			}
			if (v30)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
		}
		v39 = qword_140C66DA8;
		v40 = qword_140C66DA8;
		if (qword_140C66DA8)
		{
			while (*(_DWORD*)(v40 + 368) == 5)
			{
				v40 = *(_QWORD*)(v40 + 176);
				if (!v40)
					return;
			}
			if (qword_140C66DA8)
			{
				do
				{
					if (*(_DWORD*)(v39 + 368) != 5)
						break;
					v39 = *(_QWORD*)(v39 + 176);
				} while (v39);
			}
			v41 = *(_QWORD*)(*(_QWORD*)(v39 + 72) + 400i64);
			if (*(_QWORD*)(*(_QWORD*)(v41 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v41 + 32) + 112i64))
				sub_14005E2C0(v41);
			v42 = *(_QWORD*)(v41 + 16);
			v43 = sub_14005C1B0(v41, 0, 0);
			*(_DWORD*)(v42 + 8) = 5;
			*(_QWORD*)v42 = v43;
			*(_QWORD*)(v41 + 16) += 16i64;
			v44 = sub_1400578C0(v41);
			v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v41 + 32) + 160i64), v44);
			v46 = *(_QWORD*)(v41 + 16);
			*(_QWORD*)v46 = *v45;
			*(_DWORD*)(v46 + 8) = *((_DWORD*)v45 + 2);
			*(_QWORD*)(v41 + 16) += 16i64;
			sub_1400F06F0(v41, v46, L"nEntitlementId", v47);
			*(_QWORD*)(v41 + 16) -= 16i64;
			v48 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v41 + 32) + 160i64), v44);
			*(_QWORD*)v49 = *v48;
			*(_DWORD*)(v49 + 8) = *((_DWORD*)v48 + 2);
			*(_QWORD*)(v41 + 16) += 16i64;
			sub_1400F06F0(v41, v50, L"nCount", v51);
			*(_QWORD*)(v41 + 16) -= 16i64;
			for (i = qword_140C66DA8; i; i = *(_QWORD*)(i + 176))
			{
				if (*(_DWORD*)(i + 368) != 5)
					break;
			}
			LODWORD(v64) = a3;
			sub_1400EA3E0(*(_QWORD*)(i + 72), "AccountEntitlementUpdate", byte_1409D0204, v44, &unk_1409D01F4, v64);
			sub_1400579E0(v41, v53, v44);
		}
	}
	else
	{
	LABEL_5:
		v12 = a2[1];
		v13 = *a2;
		v14 = v5 + 1;
		v15 = v5;
		v16 = *(_QWORD*)(a1 + 152);
		v65 = 0i64;
		v66 = __PAIR64__(v12, v13);
		LODWORD(v67) = v12;
		v17 = sub_14018DB00(v16, v14, 16i64);
		v18 = v66;
		v15 *= 2i64;
		v19 = v17;
		*(_QWORD*)&v17[2 * v15] = 0i64;
		*(_QWORD*)&v17[2 * v15 + 2] = v18;
		v20 = *(int**)(a1 + 152);
		if (v20 != v17)
		{
			sub_1407DB590(v17, v20, 16i64 * *(_QWORD*)(a1 + 160));
			v21 = *(_QWORD*)(a1 + 152);
			if (v21)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v21 - 16) + 8i64))(v21 - 16);
			*(_QWORD*)(a1 + 152) = v19;
		}
		*(_QWORD*)(a1 + 160) = v14;
		v22 = sub_14018B280(18i64, 0);
		if (v22)
		{
			v23 = off_140B55060;
			*((_QWORD*)v22 + 1) = 0i64;
			*(_QWORD*)v22 = off_140B55060;
		}
		else
		{
			v22 = 0i64;
		}
		v25 = qword_140C65898 == 0;
		v54 = v22 + 4;
		*((_WORD*)v22 + 8) = 0;
		v55 = v22 + 4;
		if (!v25)
		{
			if (!a3 && (_DWORD)v67)
			{
				v56 = sub_1403D2200((__int64)v23, &v67, v13);
				v55 = *v56;
				*v56 = v54;
				if (v67)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v67 - 2) + 8i64))(v67 - 4);
				if (*((_QWORD*)v55 - 1))
					sub_140003890((__int64*)qword_140C658A0, 2u, 0i64, v55, 0, 0i64);
			}
			sub_1404312A0(*(_QWORD*)(qword_140C65898 + 29504), (__int64)&v65, (__int64)v55, a3);
			if (qword_140C65B78)
				sub_140575DD0();
			v57 = *(_QWORD*)qword_140C658D0;
			v58 = sub_1403D2140(qword_140C65898, v13);
			(*(void(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD))(v57 + 8))(qword_140C658D0, v13, v58, 0i64);
			v59 = qword_140C65898;
			v60 = *(_QWORD*)(qword_140C65898 + 32736);
			if (v60)
			{
				sub_1404356B0(v60, (__int64)&v65, (__int64)v55, a3);
				v59 = qword_140C65898;
			}
			if (*a2 - 74 <= 1)
			{
				v61 = sub_1403D2140(v59, 0x4Bu);
				if ((unsigned int)sub_1403D2140(v59, 0x4Au))
					v3 = *(_DWORD*)(v59 + 240) + 10 * v61;
				*(_DWORD*)(v59 + 244) = v3;
			}
		}
		v62 = qword_140C66DA8;
		v63 = qword_140C66DA8;
		if (qword_140C66DA8)
		{
			while (*(_DWORD*)(v63 + 368) == 5)
			{
				v63 = *(_QWORD*)(v63 + 176);
				if (!v63)
					goto LABEL_68;
			}
			if (qword_140C66DA8)
			{
				do
				{
					if (*(_DWORD*)(v62 + 368) != 5)
						break;
					v62 = *(_QWORD*)(v62 + 176);
				} while (v62);
			}
			sub_140021400(v62, (__int64)&v65);
		}
	LABEL_68:
		if (v55)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v55 - 2) + 8i64))(v55 - 4);
	}
}
// 140006432: variable 'v28' is possibly undefined
// 140006630: variable 'v47' is possibly undefined
// 140006669: variable 'v49' is possibly undefined
// 14000667B: variable 'v50' is possibly undefined
// 14000667B: variable 'v51' is possibly undefined
// 1400066CC: variable 'v64' is possibly undefined
// 1400066D7: variable 'v53' is possibly undefined
// 14000670E: variable 'v23' is possibly undefined
// 1409D0204: using guessed type _BYTE byte_1409D0204[4];
// 1409D6898: using guessed type wchar_t aNentitlementid[15];
// 1409D68B8: using guessed type wchar_t aNcount[7];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140C658D0: using guessed type __int64 qword_140C658D0;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C66DA8: using guessed type __int64 qword_140C66DA8;

