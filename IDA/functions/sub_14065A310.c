//----- (000000014065A310) ----------------------------------------------------
__int64 __fastcall sub_14065A310(__int64 a1)
{
	__int64 v1; // rsi
	int* v2; // rax
	__int64 v3; // rax
	__int64 v4; // rbp
	__int64 v5; // rcx
	unsigned __int64 v6; // r15
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // rbx
	int v10; // r10d
	__int64 v11; // r14
	__int64 v12; // rdi
	__int64 v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdx
	int v17; // r11d
	__int64 v18; // rcx
	_QWORD* v19; // rax
	__int64 v20; // rcx
	__int64 v21; // rdx
	unsigned __int16* v22; // r11
	__int64 v23; // rdx
	_QWORD* v24; // rax
	__int64 v25; // r8
	__int64 v26; // rdx
	int v27; // r10d
	__int64(__fastcall * *v29)(); // [rsp+20h] [rbp-38h] BYREF
	int v30; // [rsp+28h] [rbp-30h]
	__int64 v31; // [rsp+30h] [rbp-28h]
	int v32; // [rsp+38h] [rbp-20h]

	v1 = a1;
	v2 = (int*)sub_1406622C0(a1, 1);
	if (v2 && (v3 = sub_1403D90D0(qword_140C65898, *v2), (v4 = v3) != 0))
	{
		v5 = *(_QWORD*)(v1 + 32);
		v6 = *(_QWORD*)(v3 + 14024);
		v31 = v1;
		v32 = 1;
		v29 = off_140B569F0;
		if (*(_QWORD*)(v5 + 120) >= *(_QWORD*)(v5 + 112))
			sub_14005E2C0(v1);
		v7 = *(_QWORD*)(v1 + 16);
		v8 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(v1 + 16) += 16i64;
		v9 = 0i64;
		v10 = sub_1400578C0(v1);
		v30 = v10;
		if (v6)
		{
			do
			{
				if (v9 < *(_QWORD*)(v4 + 14024))
				{
					v11 = *(_QWORD*)(v4 + 14016) + 8 * v9;
					if (v11)
					{
						if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
							sub_14005E2C0(v1);
						v12 = *(_QWORD*)(v1 + 16);
						v13 = sub_14005C1B0(v1, 0, 0);
						*(_DWORD*)(v12 + 8) = 5;
						*(_QWORD*)v12 = v13;
						*(_QWORD*)(v1 + 16) += 16i64;
						LODWORD(v12) = sub_1400578C0(v1);
						v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
						v15 = *(_QWORD*)(v1 + 16);
						*(_QWORD*)v15 = *v14;
						*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
						*(_QWORD*)(v1 + 16) += 16i64;
						sub_1400F06F0(v1, v16, L"idGroup", v17);
						*(_QWORD*)(v1 + 16) -= 16i64;
						sub_14034BDD0(v18, *(_DWORD*)(v11 + 4));
						v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
						v20 = *(_QWORD*)(v1 + 16);
						*(_QWORD*)v20 = *v19;
						*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
						*(_QWORD*)(v1 + 16) += 16i64;
						sub_1400F0870(v1, v21, L"strName", v22);
						*(_QWORD*)(v1 + 16) -= 16i64;
						sub_1400FB1D0((__int64)&v29);
						sub_1400579E0(v1, v23, v12);
					}
				}
				++v9;
			} while (v9 < v6);
			v1 = v31;
			v10 = v30;
		}
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
		v25 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v25 = *v24;
		v26 = *((unsigned int*)v24 + 2);
		*(_DWORD*)(v25 + 8) = v26;
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v26, v27);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 14065A46C: variable 'v16' is possibly undefined
// 14065A46C: variable 'v17' is possibly undefined
// 14065A47A: variable 'v18' is possibly undefined
// 14065A4BA: variable 'v21' is possibly undefined
// 14065A4BA: variable 'v22' is possibly undefined
// 14065A4D6: variable 'v23' is possibly undefined
// 14065A52A: variable 'v27' is possibly undefined
// 140B2D440: using guessed type wchar_t aIdgroup[8];
// 140B2D450: using guessed type wchar_t aStrname_46[8];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

