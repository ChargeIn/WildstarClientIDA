//----- (000000014067FE10) ----------------------------------------------------
__int64 __fastcall sub_14067FE10(_QWORD* a1)
{
	__int64 v2; // rax
	_QWORD** v3; // r12
	__int64 v4; // r13
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rdi
	__int64 v9; // rax
	__int64 v10; // rcx
	int* v11; // r15
	unsigned int i; // r14d
	__int16* v13; // rax
	unsigned __int16* v14; // rbp
	__int64 v15; // rdi
	__int64 v16; // rax
	int v17; // edi
	_QWORD* v18; // rax
	__int64 v19; // rdx
	int v20; // ebp
	_QWORD* v21; // rax
	__int64 v22; // rdx
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	_DWORD* v25; // rcx
	__int64* v26; // rax
	__int64 v27; // rdx
	_QWORD* v28; // rbx
	__int64* v29; // rax
	__int64 v30; // r9
	int v31; // r8d
	__int64 v32; // rdx
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-68h] BYREF
	int v34; // [rsp+28h] [rbp-60h]
	_QWORD* v35; // [rsp+30h] [rbp-58h]
	int v36; // [rsp+38h] [rbp-50h]
	__int64 v37; // [rsp+40h] [rbp-48h] BYREF
	__int64 v38; // [rsp+48h] [rbp-40h]
	int v39; // [rsp+98h] [rbp+10h] BYREF

	v2 = sub_14067B760(a1);
	v3 = (_QWORD**)v2;
	if (v2
		&& (*(int(__fastcall**)(__int64))(*(_QWORD*)v2 + 208i64))(v2) >= 2
		&& qword_140C65970
		&& *(_DWORD*)(qword_140C65970 + 8) == 1
		&& *(_DWORD*)(*v3[6] + 12i64) == 25
		&& ((unsigned int(__fastcall*)(_QWORD**))(*v3)[5])(v3))
	{
		v4 = sub_140222B00(*(_DWORD*)(*v3[6] + 20i64));
		if (v4)
		{
			v6 = a1[4];
			v33 = off_140B569F0;
			v7 = *(_QWORD*)(v6 + 112);
			v35 = a1;
			v36 = 1;
			if (*(_QWORD*)(v6 + 120) >= v7)
				sub_14005E2C0((__int64)a1);
			v8 = a1[2];
			v9 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v8 + 8) = 5;
			*(_QWORD*)v8 = v9;
			a1[2] += 16i64;
			v34 = sub_1400578C0((__int64)a1);
			v11 = (int*)(v4 + 4);
			for (i = 0; i < 8; ++i)
			{
				v13 = sub_14034BDD0(v10, *v11);
				v14 = (unsigned __int16*)v13;
				if (v13 && *v13)
				{
					if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
						sub_14005E2C0((__int64)a1);
					v15 = a1[2];
					v16 = sub_14005C1B0((__int64)a1, 0, 0);
					*(_DWORD*)(v15 + 8) = 5;
					*(_QWORD*)v15 = v16;
					a1[2] += 16i64;
					v17 = sub_1400578C0((__int64)a1);
					v18 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
					v19 = a1[2];
					*(_QWORD*)v19 = *v18;
					*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
					a1[2] += 16i64;
					sub_1400F0870((__int64)a1, v19, L"strDescription", v14);
					a1[2] -= 16i64;
					v20 = ((__int64(__fastcall*)(_QWORD**, _QWORD))(*v3)[10])(v3, i);
					v21 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v17);
					v22 = a1[2];
					*(_QWORD*)v22 = *v21;
					*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
					a1[2] += 16i64;
					v23 = (unsigned __int64*)sub_14018F0E0(&v37, L"bIsComplete")[1];
					if (v23)
					{
						v24 = -1i64;
						do
							++v24;
						while (*((_BYTE*)v23 + v24));
						sub_140058710((__int64)a1, v23, v24);
					}
					else
					{
						*(_DWORD*)(a1[2] + 8i64) = 0;
						a1[2] += 16i64;
					}
					if (v38)
						sub_14018B900(v38, 0);
					v25 = (_DWORD*)a1[2];
					v25[2] = 1;
					*v25 = v20 != 0;
					a1[2] += 16i64;
					v26 = (__int64*)sub_1400580E0((__int64)a1, -3);
					sub_14005EA50((__int64)a1, v26, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
					a1[2] -= 48i64;
					sub_1400FB1D0((__int64)&v33);
					sub_1400579E0((__int64)a1, v27, v17);
				}
				++v11;
			}
			v28 = v35;
			v39 = *(_DWORD*)(v4 + 100);
			if ((unsigned int)sub_14066DB90(v35, &v39))
			{
				sub_1400FB540((__int64)&v33);
				v28[2] -= 16i64;
			}
			v29 = sub_14005C3C0(*(_QWORD*)(v28[4] + 160i64), v34);
			v30 = v28[2];
			v31 = v34;
			v32 = *v29;
			*(_QWORD*)v30 = *v29;
			*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
			v28[2] += 16i64;
			sub_1400579E0((__int64)v28, v32, v31);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		return 1i64;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 14067FF45: variable 'v10' is possibly undefined
// 1406800B6: variable 'v27' is possibly undefined
// 140B319F8: using guessed type wchar_t aBiscomplete[12];
// 140B31A38: using guessed type wchar_t aStrdescription_16[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65970: using guessed type __int64 qword_140C65970;

