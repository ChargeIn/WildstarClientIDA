//----- (00000001405071C0) ----------------------------------------------------
__int64 __fastcall sub_1405071C0(_QWORD* a1)
{
	char* v2; // rbx
	unsigned __int64 v3; // rcx
	_DWORD* v4; // r8
	unsigned int v5; // edi
	bool v6; // r13
	_DWORD* v7; // r15
	_DWORD* v8; // rdx
	int v9; // eax
	BOOL v10; // eax
	_DWORD* v11; // rax
	__int64 v12; // rdx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	int v15; // eax
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // r15
	int v19; // r12d
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned int* v22; // rax
	__int64 v23; // rdx
	unsigned __int64* v24; // r14
	unsigned __int64 v25; // r14
	int v26; // eax
	__int64 v27; // rax
	double v28; // xmm0_8
	unsigned __int64 v29; // rax
	bool v30; // zf
	char v31; // al
	__int64 v32; // rax
	char v34[8]; // [rsp+30h] [rbp-39h] BYREF
	int v35; // [rsp+38h] [rbp-31h]
	__int64 v36; // [rsp+40h] [rbp-29h]
	char v37[8]; // [rsp+48h] [rbp-21h] BYREF
	int v38; // [rsp+50h] [rbp-19h]
	__int64 v39; // [rsp+58h] [rbp-11h]
	__int64(__fastcall * *v40)(); // [rsp+60h] [rbp-9h] BYREF
	int v41; // [rsp+68h] [rbp-1h]
	__int64 v42; // [rsp+70h] [rbp+7h]
	__int64(__fastcall * **v43)(); // [rsp+78h] [rbp+Fh]
	__int64(__fastcall * *v44)(); // [rsp+80h] [rbp+17h] BYREF
	int v45; // [rsp+88h] [rbp+1Fh]
	_QWORD* v46; // [rsp+90h] [rbp+27h]
	int v47; // [rsp+98h] [rbp+2Fh]
	unsigned __int64 v48; // [rsp+D8h] [rbp+6Fh] BYREF

	v2 = (char*)sub_140506EA0(a1);
	if (v2)
	{
		v3 = a1[2];
		v4 = (_DWORD*)a1[3];
		v5 = 0;
		v6 = 0;
		v7 = dword_140A12138;
		if ((int)((__int64)(v3 - (_QWORD)v4) >> 4) >= 3)
		{
			v8 = dword_140A12138;
			if ((unsigned __int64)(v4 + 8) < v3)
				v8 = v4 + 8;
			v9 = v8[2];
			v10 = v9 && (v9 != 1 || *v8);
			v6 = v10;
		}
		v11 = v4 + 4;
		if ((unsigned __int64)(v4 + 4) >= v3 || v11 == dword_140A12138 || v4[6] != 5)
		{
			v25 = 0i64;
			if ((unsigned __int64)v11 < v3)
				v7 = v4 + 4;
			v26 = v7[2];
			if (v26 == 3 || v26 == 4 && sub_14005AC80((char*)(*(_QWORD*)v7 + 32i64), &v48))
			{
				v28 = sub_140056C40(a1, 2u);
				v29 = 0i64;
				if (v28 >= 9.223372036854776e18)
				{
					v28 = v28 - 9.223372036854776e18;
					if (v28 < 9.223372036854776e18)
						v29 = 0x8000000000000000ui64;
				}
				v25 = v29 + (unsigned int)(int)v28;
			}
			else
			{
				v27 = sub_140056AB0(a1, 2u);
				if (v27)
				{
					v25 = *(_QWORD*)v27;
					sub_140505BB0(
						(__int64)v2,
						*(_DWORD*)(v27 + 8),
						*(_DWORD*)(v27 + 12),
						*(_DWORD*)(v27 + 16),
						*(_DWORD*)(v27 + 20),
						0);
				}
			}
			if (v25 > *((_QWORD*)v2 + 136))
				v25 = *((_QWORD*)v2 + 136);
			v30 = v25 == *((_QWORD*)v2 + 135);
			v31 = 0;
			*((_QWORD*)v2 + 135) = v25;
			if (!v30)
				v31 = 1;
			if (v31)
			{
				v32 = *((_QWORD*)v2 + 137);
				v2[1076] = 0;
				*((_DWORD*)v2 + 268) = 0;
				*((_QWORD*)v2 + 138) = v32;
			}
			if (v6)
			{
				*((_QWORD*)v2 + 137) = v25;
				*((_QWORD*)v2 + 138) = v25;
			}
			(*(void(__fastcall**)(char*))(*(_QWORD*)v2 + 568i64))(v2);
		}
		else
		{
			v47 = 1;
			v45 = -2;
			v44 = off_140B569F0;
			v12 = (__int64)a1;
			v46 = a1;
			if ((unsigned __int64)v11 < v3 && v11 != dword_140A12138 && v4[6] == 5)
			{
				sub_1400579E0((__int64)a1, (__int64)a1, -2);
				v13 = (__int64)v46;
				v14 = v46[2];
				if (v46[3] + 16i64 < v14)
					v7 = (_DWORD*)(v46[3] + 16i64);
				*(_QWORD*)v14 = *(_QWORD*)v7;
				*(_DWORD*)(v14 + 8) = v7[2];
				*(_QWORD*)(v13 + 16) += 16i64;
				v15 = sub_1400578C0((__int64)v46);
				v12 = (__int64)v46;
				v45 = v15;
			}
			v42 = v12;
			v41 = -2;
			v43 = &v44;
			v40 = off_140B56A08;
			*(_DWORD*)(*(_QWORD*)(v12 + 16) + 8i64) = 0;
			*(_QWORD*)(v12 + 16) += 16i64;
			((void(__fastcall*)(__int64(__fastcall***)(), __int64))v40[2])(&v40, 0xFFFFFFFFi64);
			v46[2] -= 16i64;
			while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v43)[1])(v43)
				&& (unsigned int)sub_1400FCBA0((__int64)&v40))
			{
				sub_1400FBB00((__int64)&v40, (__int64)v37);
				sub_1400FB8D0((__int64)&v40, (__int64)v34);
				if (v36)
					sub_1400579E0(v36, v17, v35);
				v18 = v39;
				v19 = v38;
				v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v39 + 32) + 160i64), v38);
				v21 = *(_QWORD*)(v18 + 16);
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				*(_QWORD*)(v18 + 16) += 16i64;
				v22 = (unsigned int*)sub_140056AB0(a1, 0xFFFFFFFF);
				v24 = (unsigned __int64*)v22;
				if (v22)
				{
					if (v5 < 2)
					{
						sub_140505BB0((__int64)v2, v22[2], v22[3], v22[4], v22[5], v5);
						sub_140505D60(v2, *v24, v6, 0, v5++);
					}
				}
				a1[2] -= 16i64;
				sub_1400579E0(v18, v23, v19);
			}
			v40 = off_140B56A08;
			if (v42)
				sub_1400579E0(v42, v16, v41);
			v44 = off_140B56A08;
			if (v46)
				sub_1400579E0((__int64)v46, v16, v45);
		}
	}
	return 0i64;
}
// 14050737D: variable 'v17' is possibly undefined
// 140507412: variable 'v23' is possibly undefined
// 140507434: variable 'v16' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 1405071C0: using guessed type char var_78[8];
// 1405071C0: using guessed type char var_90[8];

