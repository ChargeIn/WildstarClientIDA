//----- (00000001404E6B30) ----------------------------------------------------
__int64 __fastcall sub_1404E6B30(__int64 a1)
{
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // r12
	int v9; // r10d
	unsigned __int64 v10; // r15
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	int v16; // ebx
	__int64 v17; // rcx
	int v18; // r13d
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int64* v21; // r14
	unsigned __int64 v22; // rsi
	__int64 v23; // rbx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64* v26; // rax
	int v27; // ebx
	_QWORD* v28; // rax
	__int64 v29; // r10
	unsigned __int64* v30; // r14
	unsigned __int64 v31; // rsi
	__int64 v32; // rbx
	__int64 v33; // rax
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rdx
	_QWORD* v37; // rax
	__int64 v38; // r8
	__int64 v39; // rdx
	int v40; // r10d
	__int64 v41; // [rsp+20h] [rbp-39h] BYREF
	unsigned __int64 v42; // [rsp+28h] [rbp-31h]
	__int64(__fastcall * *v43)(); // [rsp+30h] [rbp-29h] BYREF
	int v44; // [rsp+38h] [rbp-21h]
	__int64 v45; // [rsp+40h] [rbp-19h]
	int v46; // [rsp+48h] [rbp-11h]
	__int64(__fastcall * *v47)(); // [rsp+50h] [rbp-9h] BYREF
	int v48; // [rsp+58h] [rbp-1h]
	__int64 v49; // [rsp+60h] [rbp+7h]
	int v50; // [rsp+68h] [rbp+Fh]
	__int64 v51; // [rsp+70h] [rbp+17h] BYREF
	__int64 v52; // [rsp+78h] [rbp+1Fh]
	int v53; // [rsp+C8h] [rbp+6Fh]
	int v54; // [rsp+C8h] [rbp+6Fh]

	if (!qword_140C65898)
		return 0i64;
	v42 = 0i64;
	v41 = 0i64;
	sub_1403ABAB0(qword_140C65898 + 7160, &v41);
	v3 = *(_QWORD*)(a1 + 32);
	v4 = *(_QWORD*)(v3 + 112);
	v45 = a1;
	v43 = off_140B569F0;
	v46 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(a1);
	v5 = *(_QWORD*)(a1 + 16);
	v6 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a1 + 16) += 16i64;
	v7 = sub_1400578C0(a1);
	v8 = v41;
	v9 = v7;
	v44 = v7;
	v10 = 0i64;
	if (v42)
	{
		do
		{
			v11 = *(_QWORD*)(a1 + 32);
			v47 = off_140B569F0;
			v49 = a1;
			v12 = *(_QWORD*)(v11 + 112);
			v50 = 1;
			if (*(_QWORD*)(v11 + 120) >= v12)
				sub_14005E2C0(a1);
			v13 = *(_QWORD*)(a1 + 16);
			v14 = sub_14005C1B0(a1, 0, 0);
			*(_DWORD*)(v13 + 8) = 5;
			*(_QWORD*)v13 = v14;
			*(_QWORD*)(a1 + 16) += 16i64;
			v15 = sub_1400578C0(a1);
			v16 = *(_DWORD*)(v8 + 8 * v10);
			v17 = *(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64);
			v18 = v15;
			v48 = v15;
			v53 = v16;
			v19 = sub_14005C3C0(v17, v15);
			v20 = *(_QWORD*)(a1 + 16);
			*(_QWORD*)v20 = *v19;
			*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v21 = (unsigned __int64*)sub_14018F0E0(&v51, L"eRewardProperty")[1];
			if (v21)
			{
				v22 = -1i64;
				do
					++v22;
				while (*((_BYTE*)v21 + v22));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v23 = *(_QWORD*)(a1 + 16);
				v24 = sub_140062650(a1, v21, v22);
				*(_DWORD*)(v23 + 8) = 4;
				*(_QWORD*)v23 = v24;
				*(_QWORD*)(a1 + 16) += 16i64;
				v16 = v53;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v52)
				sub_14018B900(v52, 0);
			v25 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v25 + 8) = 3;
			*(double*)v25 = (double)v16;
			*(_QWORD*)(a1 + 16) += 16i64;
			v26 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			v27 = *(_DWORD*)(v8 + 8 * v10 + 4);
			v54 = v27;
			v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v18);
			*(_QWORD*)v29 = *v28;
			*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
			*(_QWORD*)(a1 + 16) += 16i64;
			v30 = (unsigned __int64*)sub_14018F0E0(&v51, L"nObjectId")[1];
			if (v30)
			{
				v31 = -1i64;
				do
					++v31;
				while (*((_BYTE*)v30 + v31));
				if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
					sub_14005E2C0(a1);
				v32 = *(_QWORD*)(a1 + 16);
				v33 = sub_140062650(a1, v30, v31);
				*(_DWORD*)(v32 + 8) = 4;
				*(_QWORD*)v32 = v33;
				*(_QWORD*)(a1 + 16) += 16i64;
				v27 = v54;
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
				*(_QWORD*)(a1 + 16) += 16i64;
			}
			if (v52)
				sub_14018B900(v52, 0);
			v34 = *(_QWORD*)(a1 + 16);
			*(_DWORD*)(v34 + 8) = 3;
			*(double*)v34 = (double)v27;
			*(_QWORD*)(a1 + 16) += 16i64;
			v35 = (__int64*)sub_1400580E0(a1, -3);
			sub_14005EA50(a1, v35, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
			*(_QWORD*)(a1 + 16) -= 48i64;
			sub_1403ABC00(qword_140C65898 + 7160, *(_DWORD*)(v8 + 8 * v10), *(_DWORD*)(v8 + 8 * v10 + 4), (__int64)&v47);
			sub_1400FB1D0((__int64)&v43);
			sub_1400579E0(a1, v36, v18);
			++v10;
		} while (v10 < v42);
		a1 = v45;
		v9 = v44;
	}
	v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v9);
	v38 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v38 = *v37;
	v39 = *((unsigned int*)v37 + 2);
	*(_DWORD*)(v38 + 8) = v39;
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v39, v40);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	return 1i64;
}
// 1404E6D84: variable 'v29' is possibly undefined
// 1404E6E8D: variable 'v36' is possibly undefined
// 1404E6EE5: variable 'v40' is possibly undefined
// 140B0BD98: using guessed type wchar_t aErewardpropert_0[16];
// 140B0BDB8: using guessed type wchar_t aNobjectid_0[10];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

