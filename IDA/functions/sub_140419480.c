//----- (0000000140419480) ----------------------------------------------------
__int64 __fastcall sub_140419480(_QWORD* a1)
{
	__int64 v1; // rsi
	int* v2; // r14
	__int64 v4; // rcx
	unsigned __int64 v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	int v8; // eax
	bool v9; // zf
	int v10; // ebx
	unsigned int v11; // ebp
	unsigned int v12; // r15d
	_DWORD* v13; // rax
	_DWORD* v14; // rbx
	unsigned int v15; // ecx
	int v16; // eax
	__int64 v17; // rdi
	__int64 v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	unsigned __int16* v21; // r10
	_QWORD* v22; // rax
	__int64 v23; // r10
	__int64 v24; // rdx
	int v25; // r11d
	__int64 v26; // rcx
	_QWORD* v27; // rax
	__int64 v28; // rdx
	unsigned __int16* v29; // r10
	__int64 v30; // rdx
	__int64* v31; // rax
	__int64 v32; // r8
	__int64 v33; // rdx
	__int64(__fastcall * *v34)(); // [rsp+20h] [rbp-38h] BYREF
	int v35; // [rsp+28h] [rbp-30h]
	__int64 v36; // [rsp+30h] [rbp-28h]
	int v37; // [rsp+38h] [rbp-20h]

	v1 = (__int64)a1;
	v2 = sub_140417BF0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
	v4 = *(_QWORD*)(v1 + 32);
	v34 = off_140B569F0;
	v5 = *(_QWORD*)(v4 + 112);
	v36 = v1;
	v37 = 1;
	if (*(_QWORD*)(v4 + 120) >= v5)
		sub_14005E2C0(v1);
	v6 = *(_QWORD*)(v1 + 16);
	v7 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(v1 + 16) += 16i64;
	v8 = sub_1400578C0(v1);
	v9 = v2[99] == 0;
	v10 = v8;
	v35 = v8;
	if (!v9)
	{
		v11 = 0;
		v12 = sub_1401F3190();
		if (v12)
		{
			while (!qword_140C63848)
			{
				if (!dword_140C65254 && (int)sub_1401F2F80() >= 0)
				{
					v13 = (_DWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63C28 + 32i64))(
						qword_140C63C28,
						v11);
					goto LABEL_12;
				}
			LABEL_17:
				if (++v11 >= v12)
				{
					v1 = v36;
					v10 = v35;
					goto LABEL_19;
				}
			}
			v13 = (_DWORD*)qword_140C63848(off_140A69950, v11, qword_140C63858);
		LABEL_12:
			v14 = v13;
			if (v13)
			{
				v15 = (unsigned __int8)(*v13 - 1);
				v16 = v2[99];
				if (_bittest(&v16, v15))
				{
					if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
						sub_14005E2C0(v1);
					v17 = *(_QWORD*)(v1 + 16);
					v18 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v17 + 8) = 5;
					*(_QWORD*)v17 = v18;
					*(_QWORD*)(v1 + 16) += 16i64;
					LODWORD(v17) = sub_1400578C0(v1);
					v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					v20 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v20 = *v19;
					*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v20, L"strName", v21);
					*(_QWORD*)(v1 + 16) -= 16i64;
					v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					*(_QWORD*)v23 = *v22;
					*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v24, L"idClassReq", v25);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_14034BDD0(v26, v14[22]);
					v27 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
					v28 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v28 = *v27;
					*(_DWORD*)(v28 + 8) = *((_DWORD*)v27 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F0870(v1, v28, L"strDescription", v29);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1400FB1D0((__int64)&v34);
					sub_1400579E0(v1, v30, v17);
				}
			}
			goto LABEL_17;
		}
	}
LABEL_19:
	v31 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
	v32 = *(_QWORD*)(v1 + 16);
	v33 = *v31;
	*(_QWORD*)v32 = *v31;
	*(_DWORD*)(v32 + 8) = *((_DWORD*)v31 + 2);
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v33, v10);
	return 1i64;
}
// 140419657: variable 'v21' is possibly undefined
// 140419687: variable 'v23' is possibly undefined
// 140419699: variable 'v24' is possibly undefined
// 140419699: variable 'v25' is possibly undefined
// 1404196A6: variable 'v26' is possibly undefined
// 1404196E2: variable 'v29' is possibly undefined
// 1404196FE: variable 'v30' is possibly undefined
// 140A69950: using guessed type wchar_t *off_140A69950[2];
// 140AF9EE8: using guessed type wchar_t aStrname_13[8];
// 140AFA118: using guessed type wchar_t aStrdescription_0[15];
// 140AFA138: using guessed type wchar_t aIdclassreq[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63C28: using guessed type __int64 qword_140C63C28;
// 140C65254: using guessed type int dword_140C65254;

