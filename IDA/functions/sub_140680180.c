#include "../winhttp.h"

//----- (0000000140680180) ----------------------------------------------------
__int64 __fastcall sub_140680180(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD** v3; // r12
	__int64 v4; // r14
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	int* v10; // r14
	unsigned int i; // r15d
	__int64 v12; // rcx
	unsigned __int64 v13; // rax
	__int64 v14; // rdi
	__int64 v15; // rax
	int v16; // edi
	__int64 v17; // rcx
	int* v18; // rdx
	__int64 v19; // rax
	_QWORD* v20; // rax
	__int64 v21; // rdx
	unsigned __int16* v22; // r10
	int v23; // r13d
	_QWORD* v24; // rax
	__int64 v25; // rdx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	_DWORD* v28; // rcx
	__int64* v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rax
	__int64 v32; // rdx
	_QWORD* v33; // rbx
	__int64* v34; // rax
	__int64 v35; // r9
	int v36; // r8d
	__int64 v37; // rdx
	__int64(__fastcall * *v38)(); // [rsp+20h] [rbp-E0h] BYREF
	int v39; // [rsp+28h] [rbp-D8h]
	_QWORD* v40; // [rsp+30h] [rbp-D0h]
	int v41; // [rsp+38h] [rbp-C8h]
	__int64(__fastcall * *v42)(); // [rsp+40h] [rbp-C0h] BYREF
	int v43; // [rsp+48h] [rbp-B8h]
	_QWORD* v44; // [rsp+50h] [rbp-B0h]
	int v45; // [rsp+58h] [rbp-A8h]
	__int64 v46; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v47; // [rsp+68h] [rbp-98h]
	__int64 v48; // [rsp+80h] [rbp-80h] BYREF
	char v49[8]; // [rsp+88h] [rbp-78h] BYREF
	_WORD* v50; // [rsp+90h] [rbp-70h]
	_WORD* v51; // [rsp+98h] [rbp-68h]
	__int64 v52; // [rsp+140h] [rbp+40h]
	__int64 v53; // [rsp+198h] [rbp+98h] BYREF

	v2 = sub_14067B760(a1);
	v3 = (_QWORD**)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 1
		&& *(_DWORD*)(*v3[6] + 12i64) == 26
		&& ((unsigned int(__fastcall*)(_QWORD**))(*v3)[5])(v3))
	{
		v4 = sub_140222F40(*(_DWORD*)(*v3[6] + 20i64));
		v53 = v4;
		if (v4)
		{
			v6 = a1[4];
			v7 = *(_QWORD*)(v6 + 112);
			v38 = off_140B569F0;
			v40 = a1;
			v41 = 1;
			if (*(_QWORD*)(v6 + 120) >= v7)
				sub_14005E2C0((__int64)a1);
			v8 = a1[2];
			v9 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			a1[2] += 16i64;
			v39 = sub_1400578C0((__int64)a1);
			v10 = (int*)(v4 + 4);
			for (i = 0; i < 8; ++i)
			{
				v12 = a1[4];
				v42 = off_140B569F0;
				v44 = a1;
				v13 = *(_QWORD*)(v12 + 112);
				v45 = 1;
				if (*(_QWORD*)(v12 + 120) >= v13)
					sub_14005E2C0((__int64)a1);
				v14 = a1[2];
				v15 = sub_14005C1B0((__int64)a1, 0, 0);
				*(_DWORD*)(v14 + 8) = 5;
				*(_QWORD*)v14 = v15;
				a1[2] += 16i64;
				v16 = sub_1400578C0((__int64)a1);
				v43 = v16;
				sub_1404DDE90(&v48);
				v18 = (int*)sub_14034BDD0(v17, v10[8]);
				if (v18)
				{
					v19 = 0i64;
					if (*(_WORD*)v18)
					{
						do
							++v19;
						while (*((_WORD*)v18 + v19));
					}
					sub_14001C480((__int64)v49, v18, (int*)((char*)v18 + 2 * v19));
				}
				else if (v50 != v51)
				{
					*v50 = 0;
					v51 = v50;
				}
				sub_1400B7660(&v48);
				v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v21 = a1[2];
				*(_QWORD*)v21 = *v20;
				*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
				a1[2] += 16i64;
				sub_1400F0870((__int64)a1, v21, L"strDescription", v22);
				a1[2] -= 16i64;
				v23 = ((__int64(__fastcall*)(_QWORD**, _QWORD))(*v3)[10])(v3, i);
				v24 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v16);
				v25 = a1[2];
				*(_QWORD*)v25 = *v24;
				*(_DWORD*)(v25 + 8) = *((_DWORD*)v24 + 2);
				a1[2] += 16i64;
				v26 = (unsigned __int64*)sub_14018F0E0(&v46, L"bIsComplete")[1];
				if (v26)
				{
					v27 = -1i64;
					do
						++v27;
					while (*((_BYTE*)v26 + v27));
					sub_140058710((__int64)a1, v26, v27);
				}
				else
				{
					*(_DWORD*)(a1[2] + 8i64) = 0;
					a1[2] += 16i64;
				}
				if (v47)
					sub_14018B900(v47, 0);
				v28 = (_DWORD*)a1[2];
				v28[2] = 1;
				*v28 = v23 != 0;
				a1[2] += 16i64;
				v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
				sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
				a1[2] -= 48i64;
				if (*v10)
				{
					v31 = sub_1405A8A40(v30, *v10);
					if (v31)
					{
						if ((unsigned int)sub_140663030(a1, v31))
						{
							sub_1400FB540((__int64)&v42);
							a1[2] -= 16i64;
						}
					}
				}
				sub_1400FB1D0((__int64)&v38);
				if (v52)
					sub_14018B900(v52, 0);
				sub_1400B7390(&v48);
				sub_1400579E0((__int64)a1, v32, v16);
				++v10;
			}
			v33 = v40;
			LODWORD(v53) = *(_DWORD*)(v53 + 68);
			if ((unsigned int)sub_14066DB90(v40, (int*)&v53))
			{
				sub_1400FB540((__int64)&v38);
				v33[2] -= 16i64;
			}
			v34 = sub_14005C3C0(*(_QWORD*)(v33[4] + 160i64), v39);
			v35 = v33[2];
			v36 = v39;
			v37 = *v34;
			*(_QWORD*)v35 = *v34;
			*(_DWORD*)(v35 + 8) = *((_DWORD*)v34 + 2);
			v33[2] += 16i64;
			sub_1400579E0((__int64)v33, v37, v36);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140680333: variable 'v17' is possibly undefined
// 1406803B7: variable 'v22' is possibly undefined
// 140680490: variable 'v30' is possibly undefined
// 1406804EA: variable 'v32' is possibly undefined
// 140B319C0: using guessed type wchar_t aStrdescription_17[15];
// 140B319E0: using guessed type wchar_t aBiscomplete_0[12];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65970: using guessed type __int64 qword_140C65970;
// 140680180: using guessed type char var_F8[8];

