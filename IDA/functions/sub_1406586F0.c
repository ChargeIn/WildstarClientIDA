//----- (00000001406586F0) ----------------------------------------------------
__int64 __fastcall sub_1406586F0(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // r13
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	unsigned int v8; // eax
	__int64 v9; // rax
	unsigned __int64 v10; // rcx
	unsigned __int64 v11; // rax
	int** v12; // r12
	int* v13; // rdi
	__int64 v14; // rbx
	int* v15; // rax
	int* v16; // r14
	unsigned __int64 v17; // rbx
	int v18; // eax
	__int64 v19; // rbx
	int* v20; // rax
	__int64 v21; // r15
	__int64 v22; // rsi
	bool v23; // zf
	int v24; // edx
	int v25; // edx
	int v26; // edx
	__int64 v27; // r14
	__int64 v28; // r15
	__int64 v29; // rsi
	__int64 v30; // rdi
	__int64 v31; // rax
	wchar_t* v32; // rdx
	__int64 v33; // r15
	unsigned int v34; // ecx
	__int64 v35; // rbx
	__int64 v36; // rdx
	__int64 v37; // rsi
	unsigned __int64 v38; // r14
	_QWORD* v39; // rbx
	int v40; // ecx
	__int64 v41; // rsi
	unsigned __int64 v42; // r14
	_QWORD* v43; // rbx
	int v44; // ecx
	int v45; // r8d
	int v46; // r9d
	unsigned __int64 v47; // rdx
	unsigned __int64 v48; // rcx
	__int64 v49; // rax
	unsigned int v50; // ecx
	__int64 v51; // rax
	unsigned __int64 v52; // rcx
	_QWORD* v53; // rax
	__int64 v54; // r11
	__int64 v55; // r9
	int v56; // r8d
	__int64 v57; // rdx
	__int64(__fastcall * *v59)(); // [rsp+20h] [rbp-48h] BYREF
	int v60; // [rsp+28h] [rbp-40h]
	_QWORD* v61; // [rsp+30h] [rbp-38h]
	int v62; // [rsp+38h] [rbp-30h]
	unsigned __int64 v63; // [rsp+78h] [rbp+10h] BYREF

	v2 = (int*)sub_1406622C0((__int64)a1, 1);
	if (!v2 || (v3 = sub_1403D90D0(qword_140C65898, *v2)) == 0)
		sub_140056570(a1, 1u, "invalid unit");
	v4 = a1[4];
	v59 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v61 = a1;
	v62 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0((__int64)a1);
	v6 = a1[2];
	v7 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	a1[2] += 16i64;
	v60 = sub_1400578C0((__int64)a1);
	v8 = sub_14047A890(v3);
	v9 = sub_140217440(v8);
	if (v9)
	{
		v10 = *(_QWORD*)(v9 + 8);
		if (v10)
		{
			if (v10 <= qword_140C3FE70 && qword_140C3FE68 + v10)
				goto LABEL_121;
		}
	}
	v11 = 102i64;
	v12 = (int**)(v3 + 6472);
	v63 = 102i64;
	do
	{
		if (!*((_BYTE*)v12 - 52))
			goto LABEL_67;
		v13 = *v12;
		if (!*v12)
			goto LABEL_67;
		v14 = 0i64;
		if (*(_WORD*)v13)
		{
			do
				++v14;
			while (*((_WORD*)v13 + v14));
		}
		v15 = sub_14018B280(2 * v14 + 18, 0);
		if (v15)
		{
			*(_QWORD*)v15 = off_140B55060;
			*((_QWORD*)v15 + 1) = v14;
		}
		else
		{
			v15 = 0i64;
		}
		v16 = v15 + 4;
		v17 = 2 * v14;
		sub_1407DB590(v15 + 4, v13, v17);
		*(_WORD*)((char*)v16 + v17) = 0;
		v18 = *((_DWORD*)v12 - 14);
		v19 = (__int64)v16;
		if (v18 == 4)
		{
			if (!sub_14045B800(v3))
				goto LABEL_31;
			v21 = v16 ? *((_QWORD*)v16 - 1) : 0i64;
			v22 = 0i64;
			do
				v23 = aCurrent[++v22] == 0;
			while (!v23);
			v19 = sub_14018D140(v16, v22 + v21);
			sub_1407DB590((int*)(v19 + 2 * v21), (int*)L"Current", 2 * v22);
			*(_WORD*)(v19 + 2 * (v22 + v21)) = 0;
			if (v16 == (int*)v19)
				goto LABEL_31;
		}
		else
		{
			if (v18 != 36)
				goto LABEL_31;
			v20 = sub_14018B280(18i64, 0);
			if (v20)
			{
				v19 = (__int64)(v20 + 4);
				*(_QWORD*)v20 = off_140B55060;
				*((_QWORD*)v20 + 1) = 0i64;
				*((_WORD*)v20 + 8) = 0;
			}
			else
			{
				v19 = 16i64;
				MEMORY[0x10] = 0;
			}
		}
		if (v16)
			(*(void(__fastcall**)(int*))(*((_QWORD*)v16 - 2) + 8i64))(v16 - 4);
	LABEL_31:
		if (!*((_BYTE*)v12 - 44) || *((_DWORD*)v12 - 14) == 26)
			goto LABEL_64;
		v24 = *(_DWORD*)(qword_140C65970 + 8);
		if (!v24)
		{
			v27 = v19;
			if (v19)
				v28 = *(_QWORD*)(v19 - 8);
			else
				v28 = 0i64;
			v29 = 0i64;
			do
				v23 = aSoldier_1[++v29] == 0;
			while (!v23);
			v30 = v29 + v28;
			v31 = sub_14018D140((int*)v19, v29 + v28);
			v32 = L"Soldier";
		LABEL_61:
			v19 = v31;
			sub_1407DB590((int*)(v31 + 2 * v28), (int*)v32, 2 * v29);
			*(_WORD*)(v19 + 2 * v30) = 0;
			if (v27 != v19 && v27)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v27 - 16) + 8i64))(v27 - 16);
			goto LABEL_64;
		}
		v25 = v24 - 1;
		if (!v25)
		{
			v27 = v19;
			if (v19)
				v28 = *(_QWORD*)(v19 - 8);
			else
				v28 = 0i64;
			v29 = 0i64;
			do
				v23 = aSettler_0[++v29] == 0;
			while (!v23);
			v30 = v29 + v28;
			v31 = sub_14018D140((int*)v19, v29 + v28);
			v32 = L"Settler";
			goto LABEL_61;
		}
		v26 = v25 - 1;
		if (!v26)
		{
			v27 = v19;
			if (v19)
				v28 = *(_QWORD*)(v19 - 8);
			else
				v28 = 0i64;
			v29 = 0i64;
			do
				v23 = aScientist_2[++v29] == 0;
			while (!v23);
			v30 = v29 + v28;
			v31 = sub_14018D140((int*)v19, v29 + v28);
			v32 = L"Scientist";
			goto LABEL_61;
		}
		if (v26 == 1)
		{
			v27 = v19;
			if (v19)
				v28 = *(_QWORD*)(v19 - 8);
			else
				v28 = 0i64;
			v29 = 0i64;
			do
				v23 = aExplorer_1[++v29] == 0;
			while (!v23);
			v30 = v29 + v28;
			v31 = sub_14018D140((int*)v19, v29 + v28);
			v32 = L"Explorer";
			goto LABEL_61;
		}
	LABEL_64:
		if (*(_QWORD*)(v19 - 8))
			sub_1400FAD30((__int64)&v59);
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v19 - 16) + 8i64))(v19 - 16);
		v11 = v63;
	LABEL_67:
		v12 += 9;
		v63 = --v11;
	} while (v11);
	v33 = *(_QWORD*)(v3 + 24);
	if (*(_DWORD*)(v3 + 128) == 14
		&& (*(_BYTE*)(v3 + 9012)
			|| v33 && (v34 = *(_DWORD*)(v33 + 332)) != 0 && (*(_DWORD*)(sub_1402092A0(v34) + 20) & 0xFFFFFFFD) == 0))
	{
		sub_1400FAD30((__int64)&v59);
	}
	v35 = *(_QWORD*)(qword_140C65898 + 27728);
	if (v35)
	{
		if (*(_QWORD*)(v35 + 72) == *(_QWORD*)(v3 + 6304)
			&& sub_14079EE60(*(_QWORD*)(qword_140C65898 + 27728), v3 + 416, &v63))
		{
			v36 = *(_QWORD*)(*(_QWORD*)(v35 + 88) + 8 * v63);
			if (v36)
			{
				if ((*(_BYTE*)(v36 + 8) & 8) == 0)
					sub_1400FAD30((__int64)&v59);
			}
		}
	}
	v37 = qword_140C65898;
	v38 = (*(__int64(__fastcall**)(__int64))(qword_140C65898 + 26864))(v3 + 416);
	v39 = *(_QWORD**)(*(_QWORD*)(v37 + 26856) + 8 * (v38 % *(_QWORD*)(v37 + 26848)));
	if (v39)
	{
		while (v38 != *v39 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v37 + 26872))(v3 + 416, v39 + 2))
		{
			v39 = (_QWORD*)v39[1];
			if (!v39)
				goto LABEL_89;
		}
		if (v39 != (_QWORD*)-32i64)
		{
			v40 = *(_DWORD*)(v39[4] + 208i64);
			if (!v40 || v40 == 4)
				sub_1400FAD30((__int64)&v59);
		}
	}
LABEL_89:
	v41 = qword_140C65898;
	v42 = (*(__int64(__fastcall**)(__int64))(qword_140C65898 + 26864))(v3 + 416);
	v43 = *(_QWORD**)(*(_QWORD*)(v41 + 26856) + 8 * (v42 % *(_QWORD*)(v41 + 26848)));
	if (v43)
	{
		while (v42 != *v43 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(v41 + 26872))(v3 + 416, v43 + 2))
		{
			v43 = (_QWORD*)v43[1];
			if (!v43)
				goto LABEL_98;
		}
		if (v43 != (_QWORD*)-32i64)
		{
			v44 = *(_DWORD*)(v43[4] + 208i64);
			if (v44 == 3 || v44 == 4)
				sub_1400FAD30((__int64)&v59);
		}
	}
LABEL_98:
	if (*(_QWORD*)(qword_140C65898 + 120))
	{
		v45 = 1;
		if (v33 && (*(_BYTE*)(v3 + 40) & 0x20) != 0)
			v45 = 0;
		v46 = *(_DWORD*)(v3 + 128);
		if (v46 != 7)
			goto LABEL_110;
		v47 = *(_QWORD*)(v3 + 408);
		v48 = 0i64;
		if (!v47)
			goto LABEL_110;
		v49 = *(_QWORD*)(v3 + 400);
		while (*(_DWORD*)v49 || *(_BYTE*)(v49 + 4))
		{
			++v48;
			v49 += 12i64;
			if (v48 >= v47)
				goto LABEL_110;
		}
		if (!*(_DWORD*)(*(_QWORD*)(v3 + 400) + 12 * v48 + 8))
		{
		LABEL_110:
			if (v45
				&& (v46 == 13 || !v46)
				&& (unsigned int)sub_14045A950(*(_QWORD*)(qword_140C65898 + 120), *(_DWORD*)(v3 + 8)) <= 1)
			{
				sub_1400FAD30((__int64)&v59);
			}
		}
	}
	if (v33)
	{
		v50 = *(_DWORD*)(v33 + 264);
		if (v50)
		{
			v51 = sub_140217440(v50);
			if (v51)
			{
				v52 = *(_QWORD*)(v51 + 8);
				if (v52)
				{
					if (v52 <= qword_140C3FE70 && v52 + qword_140C3FE68)
						LABEL_121:
					sub_1400FAD30((__int64)&v59);
				}
			}
		}
	}
	v53 = sub_14005C3C0(*(_QWORD*)(v61[4] + 160i64), v60);
	v55 = *(_QWORD*)(v54 + 16);
	v56 = v60;
	*(_QWORD*)v55 = *v53;
	v57 = *((unsigned int*)v53 + 2);
	*(_DWORD*)(v55 + 8) = v57;
	*(_QWORD*)(v54 + 16) += 16i64;
	sub_1400579E0(v54, v57, v56);
	return 1i64;
}
// 1406587C5: conditional instruction was optimized away because rcx.8!=0
// 140658DDE: variable 'v54' is possibly undefined
// 140B2CDA8: using guessed type wchar_t aScientist_2[10];
// 140B2CDC0: using guessed type wchar_t aExplorer_1[9];
// 140B2CDD8: using guessed type wchar_t aSoldier_1[8];
// 140B2CDE8: using guessed type wchar_t aSettler_0[8];
// 140B2CDF8: using guessed type wchar_t aCurrent[8];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;

