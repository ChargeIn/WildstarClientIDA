#include "../winhttp.h"

//----- (000000014087E1D0) ----------------------------------------------------
__int64 __fastcall sub_14087E1D0(__int64* a1, __int64 a2, int a3, unsigned int* a4)
{
	int v4; // edi
	unsigned int* v5; // r15
	__int64 v6; // r11
	unsigned int v7; // r10d
	unsigned int v8; // r14d
	unsigned int v9; // r8d
	int v11; // ecx
	unsigned int v12; // ebp
	__int64 v13; // rbx
	__int64 v14; // rax
	_DWORD* v15; // r12
	unsigned int v16; // esi
	unsigned int v17; // r9d
	__int64 v18; // r13
	unsigned int v19; // ecx
	int v20; // edx
	int v21; // r12d
	unsigned int* v22; // r13
	__int64 v23; // rax
	unsigned int v24; // r15d
	int v25; // ebp
	unsigned int v26; // r8d
	unsigned int v27; // r9d
	char* v28; // r12
	unsigned int v29; // edx
	int v30; // ecx
	int v31; // edx
	int i; // ecx
	unsigned __int64 v33; // r8
	unsigned int v34; // ecx
	int v35; // edx
	int v36; // r11d
	int v37; // edx
	int v38; // eax
	unsigned int v39; // edi
	unsigned int j; // r11d
	__int64 v41; // rcx
	int v42; // edx
	int v43; // eax
	unsigned int v44; // r8d
	unsigned int k; // edx
	__int64 v46; // rax
	unsigned int v47; // ecx
	unsigned int v49; // [rsp+0h] [rbp-A8h]
	int v50; // [rsp+4h] [rbp-A4h]
	unsigned int v51; // [rsp+8h] [rbp-A0h]
	unsigned int v52; // [rsp+10h] [rbp-98h]
	unsigned int v53; // [rsp+14h] [rbp-94h]
	int v54; // [rsp+18h] [rbp-90h]
	int v55; // [rsp+1Ch] [rbp-8Ch]
	unsigned int v56; // [rsp+20h] [rbp-88h]
	__int64 v57; // [rsp+28h] [rbp-80h]
	_DWORD* v58; // [rsp+30h] [rbp-78h]
	__int64 v59; // [rsp+38h] [rbp-70h]
	_DWORD* v60; // [rsp+40h] [rbp-68h]
	__int64 v61; // [rsp+48h] [rbp-60h]
	_WORD* v62; // [rsp+50h] [rbp-58h]
	unsigned int v65; // [rsp+C0h] [rbp+18h]

	v4 = *((_DWORD*)a1 + 2);
	v5 = a4;
	v6 = a4[7];
	v7 = a4[8];
	v8 = a4[9];
	v49 = *((unsigned __int16*)a1 + 9);
	v62 = a4 + 7;
	v9 = a3 - v6;
	v60 = a4 + 8;
	v51 = v9;
	v54 = v4;
	v11 = v4;
	v12 = (v8 - v7 + 0xFFFF) / v8;
	if (v9 < v12)
		v12 = v9;
	v13 = 0i64;
	v65 = v12;
	if (v4)
	{
		do
		{
			v13 = (unsigned int)(v13 + 1);
			v11 &= v11 - 1;
		} while (v11);
	}
	v14 = *a1;
	v15 = v5 + 6;
	v16 = 0;
	v58 = v5 + 6;
	v17 = v7;
	v18 = v14 + 2 * ((unsigned int)v13 * v5[6] - (unsigned __int64)(unsigned int)v13);
	v52 = v7;
	v57 = v18;
	if ((_DWORD)v13)
	{
		v19 = HIWORD(v7);
		v20 = v4 & 8;
		v21 = (unsigned __int16)v7;
		v22 = v5;
		v56 = v9 - v12;
		v53 = HIWORD(v7);
		v23 = v57 - (_QWORD)v5;
		v50 = (unsigned __int16)v7;
		v55 = v20;
		v61 = v6;
		v24 = v12;
		v59 = v23;
		while (1)
		{
			v7 = v17;
			v25 = v21;
			v26 = v16;
			v27 = v19;
			v28 = (char*)v22 + v23;
			if (v20)
			{
				v29 = 0;
				v30 = v4 & 7;
				if ((v4 & 7) != 0)
				{
					do
					{
						++v29;
						v30 &= v30 - 1;
					} while (v30);
				}
				if (v16 == v29)
				{
					v31 = 0;
					for (i = v4; i; i &= i - 1)
						++v31;
					v26 = v31 - 1;
				}
				else if (v16 > v29)
				{
					v26 = v16 - 1;
				}
			}
			v33 = *(_QWORD*)a2 + 4 * (v6 + *(unsigned __int16*)(a2 + 16) * (unsigned __int64)v26);
			v34 = v24;
			if (v24)
			{
				v35 = *(__int16*)v22;
				v36 = *(__int16*)&v28[2 * v13] - v35;
				v37 = v35 << 16;
				do
				{
					v7 += v8;
					v33 += 4i64;
					v38 = v37 + v25 * v36;
					v27 = HIWORD(v7);
					v25 = (unsigned __int16)v7;
					*(float*)(v33 - 4) = (float)v38 * 4.6566129e-10;
					--v34;
				} while (v34);
			}
			v39 = (v8 + (v49 << 16) - v7 - 1) / v8;
			if (v56 < v39)
				v39 = v56;
			for (j = v39; j; --j)
			{
				v7 += v8;
				v33 += 4i64;
				v41 = v27 * (unsigned int)v13;
				v42 = *(__int16*)&v28[2 * v41];
				v27 = HIWORD(v7);
				v43 = v25 * (*(__int16*)&v28[2 * (unsigned int)(v13 + v41)] - v42);
				v25 = (unsigned __int16)v7;
				*(float*)(v33 - 4) = (float)((v42 << 16) + v43) * 4.6566129e-10;
			}
			v19 = v53;
			v20 = v55;
			v23 = v59;
			v17 = v52;
			v21 = v50;
			v6 = v61;
			++v16;
			v22 = (unsigned int*)((char*)v22 + 2);
			if (v16 >= (unsigned int)v13)
				break;
			v4 = v54;
		}
		v5 = a4;
		v12 = v65;
		v15 = v58;
		v18 = v57;
	}
	else
	{
		v39 = v12;
	}
	v44 = v49;
	if (HIWORD(v7) < v49)
		v44 = HIWORD(v7);
	if (v44)
	{
		for (k = 0; k < (unsigned int)v13; *((_WORD*)v5 - 1) = *(_WORD*)(v18 + 2 * v46))
		{
			v46 = v44 * (_DWORD)v13 + k++;
			v5 = (unsigned int*)((char*)v5 + 2);
		}
	}
	v47 = v39 + v12;
	*v60 = v7 - (v44 << 16);
	*((_WORD*)a1 + 9) -= v44;
	*(_WORD*)(a2 + 18) = *v62 + v39 + v12;
	if (v44 == v49)
		*v15 = 0;
	else
		*v15 += v44;
	if (v47 == v51)
		return 45i64;
	*(_DWORD*)v62 += v47;
	return 43i64;
}

