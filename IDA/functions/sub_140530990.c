//----- (0000000140530990) ----------------------------------------------------
__int64 __fastcall sub_140530990(_QWORD* a1)
{
	_QWORD* v1; // rsi
	__int64 result; // rax
	__int64 v3; // rbx
	_DWORD* v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rbx
	__int64 v7; // r13
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // rcx
	unsigned __int64 v11; // rax
	__int64 v12; // rdi
	__int64 v13; // rax
	int v14; // r10d
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // r12d
	int v18; // r15d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // r14
	unsigned __int64 v22; // rbp
	__int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rcx
	__int64 v26; // rax
	__int64* v27; // rax
	int v28; // r15d
	_QWORD* v29; // rax
	__int64 v30; // r10
	unsigned __int64* v31; // r14
	unsigned __int64 v32; // rbp
	__int64 v33; // rdi
	__int64 v34; // rax
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // rax
	__int64 i; // rax
	__int64 j; // rax
	_QWORD* v42; // rax
	__int64 v43; // r8
	__int64 v44; // rdx
	int v45; // r10d
	__int64(__fastcall * *v46)(); // [rsp+20h] [rbp-68h] BYREF
	int v47; // [rsp+28h] [rbp-60h]
	_QWORD* v48; // [rsp+30h] [rbp-58h]
	int v49; // [rsp+38h] [rbp-50h]
	__int64 v50; // [rsp+40h] [rbp-48h] BYREF
	__int64 v51; // [rsp+48h] [rbp-40h]

	v1 = a1;
	result = sub_14052E9B0(a1);
	v3 = result;
	if (result)
	{
		v4 = (_DWORD*)(v1[3] + 16i64);
		if ((unsigned __int64)v4 >= v1[2] || v4 == dword_140A12138 || *(int*)(v1[3] + 24i64) <= 0)
			v5 = 0;
		else
			v5 = sub_140056D60(v1, 2u);
		v6 = *(_QWORD*)(v3 + 1600);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		v9 = v8;
		if (v8)
		{
			do
			{
				if (v5 >= *(_DWORD*)(v9 + 32))
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v7 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			} while (v9);
			do
			{
				if (*(_DWORD*)(v8 + 32) < v5)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v6 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			} while (v8);
		}
		v10 = v1[4];
		v48 = v1;
		v46 = off_140B569F0;
		v11 = *(_QWORD*)(v10 + 112);
		v49 = 1;
		if (*(_QWORD*)(v10 + 120) >= v11)
			sub_14005E2C0((__int64)v1);
		v12 = v1[2];
		v13 = sub_14005C1B0((__int64)v1, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		v1[2] += 16i64;
		v14 = sub_1400578C0((__int64)v1);
		v47 = v14;
		if (v6 != v7)
		{
			do
			{
				if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
					sub_14005E2C0((__int64)v1);
				v15 = v1[2];
				v16 = sub_14005C1B0((__int64)v1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				v1[2] += 16i64;
				v17 = sub_1400578C0((__int64)v1);
				v18 = **(_DWORD**)(v6 + 40);
				v19 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
				v20 = v1[2];
				*(_QWORD*)v20 = *v19;
				*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
				v1[2] += 16i64;
				v21 = (unsigned __int64*)sub_14018F0E0(&v50, L"id")[1];
				if (v21)
				{
					v22 = -1i64;
					do
						++v22;
					while (*((_BYTE*)v21 + v22));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v23 = v1[2];
					v24 = sub_140062650((__int64)v1, v21, v22);
					*(_DWORD*)(v23 + 8) = 4;
					*(_QWORD*)v23 = v24;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v25 = v51;
				v1[2] += 16i64;
				if (v25)
					sub_14018B900(v25, 0);
				v26 = v1[2];
				*(_DWORD*)(v26 + 8) = 3;
				*(double*)v26 = (double)v18;
				v1[2] += 16i64;
				v27 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v27, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				v28 = *(_DWORD*)(*(_QWORD*)(v6 + 40) + 4i64);
				v29 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v17);
				*(_QWORD*)v30 = *v29;
				*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
				v1[2] += 16i64;
				v31 = (unsigned __int64*)sub_14018F0E0(&v50, L"hexGroupId")[1];
				if (v31)
				{
					v32 = -1i64;
					do
						++v32;
					while (*((_BYTE*)v31 + v32));
					if (*(_QWORD*)(v1[4] + 120i64) >= *(_QWORD*)(v1[4] + 112i64))
						sub_14005E2C0((__int64)v1);
					v33 = v1[2];
					v34 = sub_140062650((__int64)v1, v31, v32);
					*(_DWORD*)(v33 + 8) = 4;
					*(_QWORD*)v33 = v34;
				}
				else
				{
					*(_DWORD*)(v1[2] + 8i64) = 0;
				}
				v35 = v51;
				v1[2] += 16i64;
				if (v35)
					sub_14018B900(v35, 0);
				v36 = v1[2];
				*(_DWORD*)(v36 + 8) = 3;
				*(double*)v36 = (double)v28;
				v1[2] += 16i64;
				v37 = (__int64*)sub_1400580E0((__int64)v1, -3);
				sub_14005EA50((__int64)v1, v37, (int*)(v1[2] - 32i64), (unsigned int*)(v1[2] - 16i64));
				v1[2] -= 48i64;
				sub_1400FB1D0((__int64)&v46);
				sub_1400579E0((__int64)v1, v38, v17);
				v39 = *(_QWORD*)(v6 + 24);
				if (v39)
				{
					v6 = *(_QWORD*)(v6 + 24);
					for (i = *(_QWORD*)(v39 + 16); i; i = *(_QWORD*)(i + 16))
						v6 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v6 + 8); v6 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v6 = j;
					if (*(_QWORD*)(v6 + 24) != j)
						v6 = j;
				}
			} while (v6 != v7);
			v1 = v48;
			v14 = v47;
		}
		v42 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v14);
		v43 = v1[2];
		*(_QWORD*)v43 = *v42;
		v44 = *((unsigned int*)v42 + 2);
		*(_DWORD*)(v43 + 8) = v44;
		v1[2] += 16i64;
		sub_1400579E0((__int64)v1, v44, v45);
		return 1i64;
	}
	return result;
}
// 140530A1E: conditional instruction was optimized away because rax.8!=0
// 140530C21: variable 'v30' is possibly undefined
// 140530CFC: variable 'v38' is possibly undefined
// 140530DB1: variable 'v45' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B13320: using guessed type wchar_t aHexgroupid_1[11];
// 140B13338: using guessed type wchar_t aId_20[3];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

