//----- (00000001400E9D50) ----------------------------------------------------
__int64 __fastcall sub_1400E9D50(__int64 a1, _QWORD* a2)
{
	__int64 v3; // r13
	__int64 v4; // r12
	unsigned __int8 v5; // r14
	_BYTE* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // r8
	_QWORD* v9; // rax
	__int64 v10; // rcx
	_QWORD* v11; // rdx
	_QWORD* v12; // r11
	_QWORD* v13; // rbx
	_QWORD* v14; // r9
	_BYTE* v15; // r10
	int v16; // r8d
	int v17; // ecx
	_BYTE* v18; // rdx
	__int64 v19; // r10
	int v20; // eax
	int v21; // ebp
	char* v22; // r8
	int v23; // eax
	int v24; // ecx
	int v25; // edx
	_BYTE* v26; // r9
	int v27; // eax
	__int64 v28; // rax
	__int64 v29; // rdi
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v32; // r15
	int v33; // r8d
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	int v37; // r12d
	unsigned __int64* v38; // rbp
	int* v39; // r14
	int* v40; // r13
	__int64 v41; // rax
	__int64 v42; // rdi
	unsigned __int64 v43; // rdi
	LARGE_INTEGER PerformanceCount; // r14
	int* v45; // rdx
	__int64 v46; // rax
	unsigned __int64 v47; // r8
	__int64 v48; // rax
	__int64 v49; // r9
	int k; // r10d
	_DWORD* v51; // rax
	__int64 v52; // rdx
	int v53; // r10d
	__int64 v54; // rax
	_QWORD* v55; // rax
	__int64 v56; // rdx
	__int64 v57; // rdi
	unsigned __int64 v58; // r8
	__int64 v59; // rax
	__int64 v60; // r9
	__int64 v61; // rcx
	bool v62; // r11
	_DWORD* v63; // rax
	int v64; // r10d
	_DWORD* v65; // rax
	__int64 v66; // rdx
	int v67; // r10d
	__int64 v68; // rax
	int* v69; // rdx
	__int64 v70; // rax
	__int64 m; // rdx
	__int64 result; // rax
	__int64 v73; // [rsp+30h] [rbp-78h]
	__int64 v74; // [rsp+38h] [rbp-70h] BYREF
	__int64 v75; // [rsp+40h] [rbp-68h] BYREF
	int v76; // [rsp+48h] [rbp-60h]
	__int64 v77; // [rsp+50h] [rbp-58h] BYREF
	int v78; // [rsp+58h] [rbp-50h]
	unsigned __int8 v80; // [rsp+B8h] [rbp+10h]
	_QWORD* v81; // [rsp+C0h] [rbp+18h]
	int v82; // [rsp+C8h] [rbp+20h]

	v3 = a1;
	v4 = (__int64)(a2[2] - a2[3]) >> 4;
	v82 = v4;
	v5 = 0;
	v6 = (_BYTE*)sub_140056BB0(a2, 1u, 0i64);
	v80 = 0;
	if (*(_QWORD*)(a2[4] + 120i64) >= *(_QWORD*)(a2[4] + 112i64))
		sub_14005E2C0((__int64)a2);
	v7 = a2[5];
	if (v7 == a2[10])
		v8 = a2[15];
	else
		v8 = *(_QWORD*)(**(_QWORD**)(v7 + 8) + 24i64);
	v9 = sub_140060AB0((__int64)a2, 0, v8);
	v9[4] = sub_1400F3FF0;
	v10 = a2[2];
	*(_QWORD*)v10 = v9;
	*(_DWORD*)(v10 + 8) = 6;
	a2[2] += 16i64;
	v11 = *(_QWORD**)(v3 + 3296);
	v12 = (_QWORD*)v11[1];
	v81 = v11;
	v13 = v11;
	v14 = v12;
	v73 = (__int64)(a2[2] - a2[3]) >> 4;
	if (v12)
	{
		while (1)
		{
			v15 = (_BYTE*)v14[4];
			LOBYTE(v16) = *v15;
			v17 = (char)*v15 - (char)*v6;
			if (v17)
			{
			LABEL_11:
				if (v17 < 0)
				{
					v14 = (_QWORD*)v14[3];
					goto LABEL_14;
				}
			}
			else
			{
				v18 = v6;
				v19 = v15 - v6;
				while ((_BYTE)v16)
				{
					v16 = (char)v18[v19 + 1];
					v20 = (char)*++v18;
					v17 = v16 - v20;
					if (v16 != v20)
						goto LABEL_11;
				}
			}
			v13 = v14;
			v14 = (_QWORD*)v14[2];
		LABEL_14:
			if (!v14)
			{
				v21 = (char)*v6;
				while (1)
				{
					v22 = (char*)v12[4];
					v23 = *v22;
					v24 = v21 - v23;
					if (v21 == v23)
						break;
				LABEL_20:
					if (v24 >= 0)
						goto LABEL_22;
					v11 = v12;
					v12 = (_QWORD*)v12[2];
					v81 = v11;
				LABEL_23:
					if (!v12)
						goto LABEL_24;
				}
				LOBYTE(v25) = *v6;
				v26 = v6;
				while ((_BYTE)v25)
				{
					v25 = (char)v26[1];
					v27 = v22[1];
					++v26;
					++v22;
					v24 = v25 - v27;
					if (v25 != v27)
						goto LABEL_20;
				}
			LABEL_22:
				v12 = (_QWORD*)v12[3];
				v11 = v81;
				goto LABEL_23;
			}
		}
	}
LABEL_24:
	if (v13 != v11)
	{
		do
		{
			v28 = v13[3];
			v29 = (__int64)v13;
			if (v28)
			{
				v13 = (_QWORD*)v13[3];
				for (i = *(_QWORD**)(v28 + 16); i; i = (_QWORD*)i[2])
					v13 = i;
			}
			else
			{
				for (j = v13[1]; v13 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v13 = (_QWORD*)j;
				if (v13[3] != j)
					v13 = (_QWORD*)j;
			}
			v32 = *(_QWORD*)(v29 + 40);
			if (*(_BYTE*)v32)
			{
				++* (_DWORD*)(v32 + 116);
				v37 = *(_DWORD*)(v32 + 112);
				v38 = *(unsigned __int64**)(v32 + 48);
				v39 = (int*)&unk_1409D3AB4;
				v40 = 0i64;
				v41 = 0i64;
				if (*(_QWORD*)(qword_140C63650 + 784))
					v39 = *(int**)(qword_140C63650 + 784);
				if (*(_WORD*)v39)
				{
					do
						++v41;
					while (*((_WORD*)v39 + v41));
				}
				v42 = (2 * v41) >> 1;
				if ((unsigned __int64)(v42 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v40 = sub_14018B280(2 * (v42 + 1), 0);
				v43 = 2 * v42;
				sub_1407DB590(v40, v39, v43);
				if ((int*)((char*)v40 + v43))
					*(_WORD*)((char*)v40 + v43) = 0;
				PerformanceCount = *(LARGE_INTEGER*)(v32 + 104);
				v45 = (int*)&word_140B7B704;
				if (PerformanceCount.QuadPart)
				{
					if (*(_QWORD*)(PerformanceCount.QuadPart + 160))
						v45 = *(int**)(PerformanceCount.QuadPart + 160);
					v46 = 0i64;
					if (*(_WORD*)v45)
					{
						do
							++v46;
						while (*((_WORD*)v45 + v46));
					}
				}
				else
				{
					if (*(_QWORD*)(v32 + 80))
						v45 = *(int**)(v32 + 80);
					v46 = 0i64;
					if (*(_WORD*)v45)
					{
						do
							++v46;
						while (*((_WORD*)v45 + v46));
					}
				}
				sub_14001C480(qword_140C63650 + 776, v45, (int*)((char*)v45 + 2 * v46));
				if (v37 == -2)
				{
					v47 = -1i64;
					do
						++v47;
					while (*((_BYTE*)v38 + v47));
					v48 = sub_140062650((__int64)a2, v38, v47);
					v49 = a2[2];
					v75 = v48;
					v76 = 4;
					sub_14005E8E0((__int64)a2, (__int64)(a2 + 15), (int*)&v75, v49);
					LODWORD(v4) = v82;
					a2[2] += 16i64;
					for (k = 2; k <= v82; a2[2] += 16i64)
					{
						v51 = sub_1400580E0((__int64)a2, k);
						v52 = a2[2];
						k = v53 + 1;
						*(_QWORD*)v52 = *(_QWORD*)v51;
						*(_DWORD*)(v52 + 8) = v51[2];
					}
					v54 = sub_1400E93D0((__int64)a2);
					v5 = sub_1400F2730(v54 + 384, v82 - 1, -1, v73, PerformanceCount, *(_QWORD*)(v32 + 48));
					v80 = v5;
				}
				else
				{
					v55 = sub_14005C3C0(*(_QWORD*)(a2[4] + 160i64), v37);
					v56 = a2[2];
					*(_QWORD*)v56 = *v55;
					*(_DWORD*)(v56 + 8) = *((_DWORD*)v55 + 2);
					a2[2] += 16i64;
					v57 = a2[2];
					v58 = -1i64;
					do
						++v58;
					while (*((_BYTE*)v38 + v58));
					v59 = sub_140062650((__int64)a2, v38, v58);
					v60 = a2[2];
					v77 = v59;
					v78 = 4;
					sub_14005E8E0((__int64)a2, v57 - 16, (int*)&v77, v60);
					a2[2] += 16i64;
					v61 = a2[2];
					v62 = 1;
					v63 = (_DWORD*)(v61 - 16);
					if ((_DWORD*)(v61 - 16) != dword_140A12138)
						v62 = v63[2] != 0;
					if (v63 == dword_140A12138 || v63[2] != 6)
						v62 = 0;
					LODWORD(v4) = v82;
					v64 = 2;
					*(_QWORD*)v61 = *(_QWORD*)(v61 - 32);
					*(_DWORD*)(v61 + 8) = *(_DWORD*)(v61 - 24);
					a2[2] += 16i64;
					if (v82 >= 2)
					{
						do
						{
							v65 = sub_1400580E0((__int64)a2, v64);
							v66 = a2[2];
							v64 = v67 + 1;
							*(_QWORD*)v66 = *(_QWORD*)v65;
							*(_DWORD*)(v66 + 8) = v65[2];
							a2[2] += 16i64;
						} while (v64 <= v82);
					}
					if (v62)
					{
						v68 = sub_1400E93D0((__int64)a2);
						v5 = sub_1400F2730(v68 + 384, v82, -1, v73, PerformanceCount, *(_QWORD*)(v32 + 48));
						v80 = v5;
					}
					else
					{
						v5 = v80;
					}
					a2[2] -= 16i64;
				}
				v69 = (int*)&word_140B7B704;
				v70 = 0i64;
				if (v40)
					v69 = v40;
				if (*(_WORD*)v69)
				{
					do
						++v70;
					while (*((_WORD*)v69 + v70));
				}
				sub_14001C480(qword_140C63650 + 776, v69, (int*)((char*)v69 + 2 * v70));
				if (v40)
					sub_14018B900((__int64)v40, 0);
				v3 = a1;
			}
			else
			{
				v33 = *(_DWORD*)(v32 + 112);
				if (v33 != -2)
					sub_1400579E0(*(_QWORD*)(v3 + 400), 0x7FFFFFFFFFFFFFFEi64, v33);
				v74 = v29;
				sub_1400DFE50(v3 + 3288, &v74);
				v34 = *(_QWORD*)(v32 + 80);
				if (v34)
					sub_14018B900(v34, 0);
				v35 = *(_QWORD*)(v32 + 48);
				if (v35)
					sub_14018B900(v35, 0);
				v36 = *(_QWORD*)(v32 + 16);
				if (v36)
					sub_14018B900(v36, 0);
				sub_14018B900(v32, 0);
			}
		} while (v13 != v81);
	}
	if ((int)v4 < 0)
	{
		result = v5;
		a2[2] += 16i64 * ((int)v4 + 1);
	}
	else
	{
		for (m = 16i64 * (int)v4; a2[2] < (unsigned __int64)(m + a2[3]); a2[2] += 16i64)
			*(_DWORD*)(a2[2] + 8i64) = 0;
		result = v5;
		a2[2] = m + a2[3];
	}
	return result;
}
// 1400E9E8F: conditional instruction was optimized away because r11.8!=0
// 1400EA130: variable 'v53' is possibly undefined
// 1400EA26F: variable 'v67' is possibly undefined
// 1400EA28B: variable 'v62' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C63650: using guessed type __int64 qword_140C63650;

