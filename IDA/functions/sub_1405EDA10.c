//----- (00000001405EDA10) ----------------------------------------------------
__int64 __fastcall sub_1405EDA10(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rcx
	__int64 v5; // r14
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	bool v11; // zf
	int v12; // r10d
	unsigned int v13; // ebp
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rsi
	__int64 v17; // rbx
	__int64 v18; // rax
	int v19; // ebx
	float v20; // xmm6_4
	_QWORD* v21; // rax
	__int64 v22; // rcx
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	__int64 v25; // rax
	__int64* v26; // rax
	float v27; // xmm6_4
	_QWORD* v28; // rax
	__int64 v29; // r11
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	__int64 v32; // rax
	__int64* v33; // rax
	float v34; // xmm6_4
	_QWORD* v35; // rax
	__int64 v36; // r11
	unsigned __int64* v37; // rdx
	unsigned __int64 v38; // r8
	__int64 v39; // rax
	__int64* v40; // rax
	__int64 v41; // rdx
	_QWORD* v42; // rax
	__int64 v43; // r8
	__int64 v44; // rdx
	int v45; // r10d
	__int64(__fastcall * *v47)(); // [rsp+20h] [rbp-78h] BYREF
	int v48; // [rsp+28h] [rbp-70h]
	__int64 v49; // [rsp+30h] [rbp-68h]
	int v50; // [rsp+38h] [rbp-60h]
	__int64 v51; // [rsp+40h] [rbp-58h] BYREF
	__int64 v52; // [rsp+48h] [rbp-50h]

	v1 = (_DWORD*)a1[3];
	v2 = (__int64)a1;
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v4 = *(_QWORD*)(v3 + 8);
	if (!v4)
		return 0i64;
	v5 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v4 + 8), *(_QWORD*)(qword_140C65898 + 120));
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(v2 + 32);
	v47 = off_140B569F0;
	v7 = *(_QWORD*)(v6 + 112);
	v49 = v2;
	v50 = 1;
	if (*(_QWORD*)(v6 + 120) >= v7)
		sub_14005E2C0(v2);
	v8 = *(_QWORD*)(v2 + 16);
	v9 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	*(_QWORD*)(v2 + 16) += 16i64;
	v10 = sub_1400578C0(v2);
	v11 = *(_QWORD*)(v5 + 48) == 0i64;
	v12 = v10;
	v48 = v10;
	if (!v11)
	{
		v13 = 0;
		if (*(_DWORD*)(v5 + 40))
		{
			do
			{
				v14 = *(_QWORD*)(v5 + 48);
				if (*(_DWORD*)(168i64 * v13 + v14 + 16) == 26)
				{
					v15 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(v14 + 64), *(_QWORD*)(qword_140C65898 + 25744));
					v16 = v15;
					if (v15)
					{
						if (*(_QWORD*)(v15 + 80))
						{
							if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
								sub_14005E2C0(v2);
							v17 = *(_QWORD*)(v2 + 16);
							v18 = sub_14005C1B0(v2, 0, 0);
							*(_DWORD*)(v17 + 8) = 5;
							*(_QWORD*)v17 = v18;
							*(_QWORD*)(v2 + 16) += 16i64;
							v19 = sub_1400578C0(v2);
							v20 = (float)*(int*)(*(_QWORD*)(v16 + 80) + 4i64) * 0.001;
							v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v19);
							v22 = *(_QWORD*)(v2 + 16);
							*(_QWORD*)v22 = *v21;
							*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
							*(_QWORD*)(v2 + 16) += 16i64;
							v23 = (unsigned __int64*)sub_14018F0E0(&v51, L"fMaxTime")[1];
							if (v23)
							{
								v24 = -1i64;
								do
									++v24;
								while (*((_BYTE*)v23 + v24));
								sub_140058710(v2, v23, v24);
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
								*(_QWORD*)(v2 + 16) += 16i64;
							}
							if (v52)
								sub_14018B900(v52, 0);
							v25 = *(_QWORD*)(v2 + 16);
							*(_DWORD*)(v25 + 8) = 3;
							*(double*)v25 = v20;
							*(_QWORD*)(v2 + 16) += 16i64;
							v26 = (__int64*)sub_1400580E0(v2, -3);
							sub_14005EA50(
								v2,
								v26,
								(int*)(*(_QWORD*)(v2 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
							*(_QWORD*)(v2 + 16) -= 48i64;
							v27 = (float)**(int**)(v16 + 80) * 0.001;
							v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v19);
							*(_QWORD*)v29 = *v28;
							*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
							*(_QWORD*)(v2 + 16) += 16i64;
							v30 = (unsigned __int64*)sub_14018F0E0(&v51, L"fInitialDelay")[1];
							if (v30)
							{
								v31 = -1i64;
								do
									++v31;
								while (*((_BYTE*)v30 + v31));
								sub_140058710(v2, v30, v31);
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
								*(_QWORD*)(v2 + 16) += 16i64;
							}
							if (v52)
								sub_14018B900(v52, 0);
							v32 = *(_QWORD*)(v2 + 16);
							*(_DWORD*)(v32 + 8) = 3;
							*(double*)v32 = v27;
							*(_QWORD*)(v2 + 16) += 16i64;
							v33 = (__int64*)sub_1400580E0(v2, -3);
							sub_14005EA50(
								v2,
								v33,
								(int*)(*(_QWORD*)(v2 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
							*(_QWORD*)(v2 + 16) -= 48i64;
							v34 = (float)*(int*)(*(_QWORD*)(v16 + 80) + 8i64) * 0.001;
							v35 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v19);
							*(_QWORD*)v36 = *v35;
							*(_DWORD*)(v36 + 8) = *((_DWORD*)v35 + 2);
							*(_QWORD*)(v2 + 16) += 16i64;
							v37 = (unsigned __int64*)sub_14018F0E0(&v51, L"fPulseTime")[1];
							if (v37)
							{
								v38 = -1i64;
								do
									++v38;
								while (*((_BYTE*)v37 + v38));
								sub_140058710(v2, v37, v38);
							}
							else
							{
								*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
								*(_QWORD*)(v2 + 16) += 16i64;
							}
							if (v52)
								sub_14018B900(v52, 0);
							v39 = *(_QWORD*)(v2 + 16);
							*(_DWORD*)(v39 + 8) = 3;
							*(double*)v39 = v34;
							*(_QWORD*)(v2 + 16) += 16i64;
							v40 = (__int64*)sub_1400580E0(v2, -3);
							sub_14005EA50(
								v2,
								v40,
								(int*)(*(_QWORD*)(v2 + 16) - 32i64),
								(unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
							*(_QWORD*)(v2 + 16) -= 48i64;
							sub_1400FB1D0((__int64)&v47);
							sub_1400579E0(v2, v41, v19);
						}
					}
				}
				++v13;
			} while (v13 < *(_DWORD*)(v5 + 40));
			v2 = v49;
			v12 = v48;
		}
	}
	v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v12);
	v43 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v43 = *v42;
	v44 = *((unsigned int*)v42 + 2);
	*(_DWORD*)(v43 + 8) = v44;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v44, v45);
	return 1i64;
}
// 1405EDCD6: variable 'v29' is possibly undefined
// 1405EDDA8: variable 'v36' is possibly undefined
// 1405EDE58: variable 'v41' is possibly undefined
// 1405EDEC4: variable 'v45' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B23B70: using guessed type wchar_t aFpulsetime_0[11];
// 140B23BB0: using guessed type wchar_t aFmaxtime_0[9];
// 140B23BC8: using guessed type wchar_t aFinitialdelay_0[14];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

