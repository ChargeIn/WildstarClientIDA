#include "../winhttp.h"

//----- (00000001408F01B0) ----------------------------------------------------
__int64 __fastcall sub_1408F01B0(__int64 a1, unsigned int* a2, __int64 a3)
{
	int v3; // edi
	__int64 v5; // rsi
	signed int v7; // eax
	unsigned __int64 v8; // rcx
	unsigned __int64 v9; // rax
	void* v10; // rsp
	int v11; // r14d
	int v12; // r12d
	signed int v13; // esi
	char* v14; // rdi
	int v15; // eax
	signed int v16; // eax
	unsigned int v17; // r8d
	int v18; // eax
	unsigned int kk; // ecx
	int v20; // ecx
	int v21; // eax
	int v22; // ecx
	int v23; // edx
	unsigned int mm; // ecx
	int v25; // eax
	int nn; // eax
	__int64 result; // rax
	int v28; // eax
	signed int v29; // edi
	char* v30; // rsi
	signed int v31; // eax
	int v32; // eax
	int v33; // ecx
	signed int v34; // edi
	__int64 v35; // rsi
	unsigned int v36; // r14d
	int v37; // edx
	unsigned int i; // eax
	int v39; // eax
	int j; // ecx
	int v41; // ecx
	unsigned int v42; // edx
	int v43; // eax
	int v44; // ecx
	int v45; // ecx
	unsigned int v46; // edx
	int v47; // eax
	int v48; // ecx
	int v49; // r11d
	int v50; // r10d
	int v51; // ecx
	unsigned int v52; // eax
	int v53; // r9d
	int v54; // edi
	int k; // r8d
	int v56; // eax
	int v57; // ecx
	__int64 v58; // rdx
	unsigned int v59; // r15d
	int v60; // ecx
	unsigned int v61; // edx
	unsigned __int64 v62; // rcx
	signed __int64 v63; // rcx
	void* v64; // rsp
	void* v65; // rsp
	__int64 v66; // rsi
	int v67; // eax
	int v68; // ecx
	int v69; // r9d
	int v70; // eax
	int v71; // r8d
	unsigned int v72; // eax
	int jj; // ecx
	int v74; // eax
	int v75; // eax
	unsigned int v76; // ecx
	unsigned int v77; // r8d
	__int64 v78; // rdx
	__int64 n; // rsi
	unsigned int v80; // ecx
	unsigned int v81; // r8d
	__int64 v82; // rdx
	__int64 m; // rsi
	unsigned int v84; // ecx
	unsigned int v85; // eax
	int v86; // ecx
	unsigned int v87; // eax
	int v88; // r8d
	int v89; // r9d
	int v90; // eax
	int v91; // ecx
	int v92; // eax
	unsigned int v93; // eax
	int ii; // ecx
	int v95; // eax
	int v96; // eax
	int v97; // ecx
	char v98[48]; // [rsp+30h] [rbp+0h] BYREF
	int v99; // [rsp+78h] [rbp+48h]

	v3 = 4;
	*(_QWORD*)a2 = 0i64;
	*((_QWORD*)a2 + 1) = 0i64;
	*((_QWORD*)a2 + 2) = 0i64;
	*((_QWORD*)a2 + 3) = 0i64;
	*((_QWORD*)a2 + 4) = 0i64;
	*((_QWORD*)a2 + 5) = 0i64;
	*((_QWORD*)a2 + 6) = 0i64;
	*((_QWORD*)a2 + 7) = 0i64;
	*((_QWORD*)a2 + 8) = 0i64;
	v5 = a3;
	*a2 = sub_1408EC1C0(a1, 4);
	v7 = sub_1408EC1C0(a1, 14);
	v8 = v7;
	a2[1] = v7;
	v9 = v7 + 15i64;
	if (v9 <= v8)
		v9 = 0xFFFFFFFFFFFFFF0i64;
	v10 = alloca(v9 & 0xFFFFFFFFFFFFFFF0ui64);
	if ((unsigned int)sub_1408EC1C0(a1, 1))
	{
		v32 = sub_1408EC1C0(a1, 5);
		v33 = a2[1];
		v12 = 0;
		v34 = 0;
		v35 = 0i64;
		v36 = v32 + 1;
		a2[2] = v33;
		if (v33 > 0)
		{
			do
			{
				v37 = 0;
				for (i = a2[1] - v34; i; i >>= 1)
					++v37;
				v39 = sub_1408EC1C0(a1, v37);
				for (j = 0; j < v39; ++v35)
				{
					if (v34 >= (int)a2[1])
						break;
					++j;
					v98[v35] = v36;
					++v34;
				}
				a2[3] = v36++;
			} while (v34 < (int)a2[1]);
		}
		goto LABEL_12;
	}
	v11 = sub_1408EC1C0(a1, 3);
	v12 = 0;
	if ((unsigned int)sub_1408EC1C0(a1, 1))
	{
		v13 = 0;
		if ((int)a2[1] <= 0)
		{
		LABEL_13:
			v5 = a3;
			goto LABEL_14;
		}
		v14 = v98;
		do
		{
			if ((unsigned int)sub_1408EC1C0(a1, 1))
			{
				v15 = sub_1408EC1C0(a1, v11);
				*v14 = v15 + 1;
				++a2[2];
				v16 = v15 + 1;
				if (v16 > (int)a2[3])
					a2[3] = v16;
			}
			else
			{
				*v14 = 0;
			}
			++v13;
			++v14;
		} while (v13 < (int)a2[1]);
	LABEL_12:
		v3 = 4;
		goto LABEL_13;
	}
	v28 = a2[1];
	v29 = 0;
	a2[2] = v28;
	if (v28 > 0)
	{
		v30 = v98;
		do
		{
			v31 = sub_1408EC1C0(a1, v11) + 1;
			*v30 = v31;
			if (v31 > (int)a2[3])
				a2[3] = v31;
			++v29;
			++v30;
		} while (v29 < (int)a2[1]);
		goto LABEL_12;
	}
	v3 = 4;
LABEL_14:
	v99 = sub_1408EC1C0(a1, 1);
	if (v99)
	{
		v41 = sub_1408EC1C0(a1, 32);
		v42 = v41 & 0x80000000;
		v43 = ((v41 >> 21) & 0x3FF) - 788;
		a2[10] = v43;
		v44 = v41 & 0x1FFFFF;
		if (v44)
		{
			if ((v44 & 0x40000000) == 0)
			{
				do
				{
					v44 *= 2;
					--v43;
				} while ((v44 & 0x40000000) == 0);
				a2[10] = v43;
			}
			if (v42)
				v44 = -v44;
		}
		else
		{
			a2[10] = -9999;
		}
		a2[9] = v44;
		v45 = sub_1408EC1C0(a1, 32);
		v46 = v45 & 0x80000000;
		v47 = ((v45 >> 21) & 0x3FF) - 788;
		a2[12] = v47;
		v48 = v45 & 0x1FFFFF;
		if (v48)
		{
			if ((v48 & 0x40000000) == 0)
			{
				do
				{
					v48 *= 2;
					--v47;
				} while ((v48 & 0x40000000) == 0);
				a2[12] = v47;
			}
			if (v46)
				v48 = -v48;
		}
		else
		{
			a2[12] = -9999;
		}
		a2[11] = v48;
		a2[13] = sub_1408EC1C0(a1, 4) + 1;
		sub_1408EC1C0(a1, 1);
		v49 = a2[13];
		v50 = a2[1];
		a2[12] += v49;
		a2[11] = (int)a2[11] >> v49;
		v51 = 0;
		v52 = v50;
		if (v50)
		{
			do
			{
				++v51;
				v52 >>= 1;
			} while (v52);
		}
		v53 = *a2;
		v54 = v50 >> ((v51 - 1) * (v53 - 1) / v53);
		for (k = v54 + 1; ; ++k)
		{
			while (1)
			{
				v56 = 1;
				v57 = 1;
				if (v53 > 0)
				{
					v58 = *a2;
					do
					{
						v56 *= v54;
						v57 *= k;
						--v58;
					} while (v58);
				}
				if (v56 <= v50)
					break;
				--v54;
				--k;
			}
			if (v57 > v50)
				break;
			++v54;
		}
		v59 = v54 - 1;
		v60 = 0;
		v61 = v54 - 1;
		if (v54 != 1)
		{
			do
			{
				++v60;
				v61 >>= 1;
			} while (v61);
		}
		if ((v49 * v53 + 8) / 8 > 4 || (v49 * v53 + 8) / 8 > (v49 + 7) / 8 + (v60 * v53 + 8) / 8)
		{
			if (v49 > 8)
			{
				if (2 * v54
					&& (v80 = (2 * v54 + 3) & 0xFFFFFFFC, v81 = v80 + *(_DWORD*)(v5 + 16), v81 <= *(_DWORD*)(v5 + 20)))
				{
					v82 = *(_QWORD*)(v5 + 8);
					*(_DWORD*)(v5 + 16) = v81;
					*(_QWORD*)(v5 + 8) = v82 + v80;
				}
				else
				{
					v82 = 0i64;
				}
				*((_QWORD*)a2 + 8) = v82;
				for (m = 0i64; m < v54; *(_WORD*)(*((_QWORD*)a2 + 8) + 2 * m - 2) = sub_1408EC1C0(a1, a2[13]))
					++m;
			}
			else
			{
				if (v54 && (v76 = (v54 + 3) & 0xFFFFFFFC, v77 = v76 + *(_DWORD*)(v5 + 16), v77 <= *(_DWORD*)(v5 + 20)))
				{
					v78 = *(_QWORD*)(v5 + 8);
					*(_DWORD*)(v5 + 16) = v77;
					*(_QWORD*)(v5 + 8) = v78 + v76;
				}
				else
				{
					v78 = 0i64;
				}
				*((_QWORD*)a2 + 8) = v78;
				for (n = 0i64; n < v54; *(_BYTE*)(++n + *((_QWORD*)a2 + 8) - 1) = sub_1408EC1C0(a1, a2[13]))
					;
			}
			v84 = v54 - 1;
			v85 = 0;
			if (v54 != 1)
			{
				do
				{
					++v85;
					v84 >>= 1;
				} while (v84);
			}
			a2[14] = v85;
			a2[8] = 2;
			v86 = 0;
			v87 = v54 - 1;
			if (v54 != 1)
			{
				do
				{
					++v86;
					v87 >>= 1;
				} while (v87);
			}
			v88 = *a2;
			v89 = 4;
			v90 = v86 * *a2;
			v91 = a2[2];
			v92 = (v90 + 8) / 8;
			if (v91 >= 2)
			{
				if (v92 == 3)
					v92 = 4;
				v89 = v92;
				v93 = 3 * (v91 - 2);
				for (ii = 0; v93; v93 >>= 1)
					++ii;
				if (ii + 1 <= 4 * v89)
				{
					v95 = v89;
					v89 = 1;
					v96 = v95 / 2;
					if (v96)
						v89 = v96;
				}
			}
			a2[6] = v89;
			v97 = 0;
			if (v54 != 1)
			{
				do
				{
					++v97;
					v59 >>= 1;
				} while (v59);
			}
			LOBYTE(v12) = (v97 * v88 + 8) / 8 > v89;
			a2[7] = v12 + 1;
			return sub_1408EF4C0((__int64)a2, v98, v54, a1, v99, a3);
		}
		else
		{
			v62 = 2i64 * v54 + 15;
			if (v62 <= 2i64 * v54)
				v62 = 0xFFFFFFFFFFFFFF0i64;
			v63 = v62 & 0xFFFFFFFFFFFFFFF0ui64;
			v64 = alloca(v63);
			v65 = alloca(v63);
			v66 = 0i64;
			for (*((_QWORD*)a2 + 8) = v98; v66 < v54; *(_WORD*)(*((_QWORD*)a2 + 8) + 2 * v66 - 2) = sub_1408EC1C0(
				a1,
				a2[13]))
				++v66;
			v67 = *a2;
			v68 = a2[2];
			a2[8] = 1;
			v69 = 4;
			v70 = (int)(a2[13] * v67 + 8) / 8;
			v71 = v70;
			if (v68 >= 2)
			{
				if (v70 == 3)
					v70 = 4;
				v69 = v70;
				v72 = 3 * (v68 - 2);
				for (jj = 0; v72; v72 >>= 1)
					++jj;
				if (jj + 1 <= 4 * v69)
				{
					v74 = v69;
					v69 = 1;
					v75 = v74 / 2;
					if (v75)
						v69 = v75;
				}
			}
			a2[6] = v69;
			a2[7] = (v71 > v69) + 1;
			result = sub_1408EF4C0((__int64)a2, v98, v54, a1, v99, a3);
			*((_QWORD*)a2 + 8) = 0i64;
		}
	}
	else
	{
		v17 = a2[1];
		v18 = 0;
		for (kk = v17; kk; kk >>= 1)
			++v18;
		v20 = a2[2];
		v21 = v18 / 8 + 1;
		if (v20 >= 2)
		{
			v22 = 3 * v20;
			v23 = 0;
			if (v21 == 3)
				v21 = 4;
			v3 = v21;
			for (mm = v22 - 6; mm; mm >>= 1)
				++v23;
			if (v23 + 1 <= 4 * v21)
			{
				v3 = 1;
				v25 = v21 / 2;
				if (v25)
					v3 = v25;
			}
		}
		a2[6] = v3;
		for (nn = 0; v17; v17 >>= 1)
			++nn;
		a2[8] = 0;
		a2[7] = (nn / 8 + 1 > v3) + 1;
		return sub_1408EF4C0((__int64)a2, v98, 0, a1, 0, v5);
	}
	return result;
}
// 1408F01B0: using guessed type char var_30[48];

