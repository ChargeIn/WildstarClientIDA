//----- (000000014076C380) ----------------------------------------------------
__int64 __fastcall sub_14076C380(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // eax
	_QWORD* v5; // rax
	__int64 v6; // rdx
	int v7; // r10d
	_DWORD* v9; // rax
	int v10; // r14d
	__int64 v11; // rcx
	unsigned __int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rax
	unsigned int v15; // r15d
	_BOOL8 v16; // r12
	__int64 v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64* v20; // rax
	__int64 v21; // rax
	_QWORD* v22; // rbx
	unsigned int v23; // ecx
	__int64 v24; // rax
	unsigned int v25; // esi
	__int64 v26; // rcx
	unsigned int v27; // ebp
	__int64 v28; // rax
	__int64 v29; // r9
	_DWORD* v30; // rcx
	__int64 v31; // rdx
	int v32; // r8d
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-58h] BYREF
	int v34; // [rsp+28h] [rbp-50h]
	_QWORD* v35; // [rsp+30h] [rbp-48h]
	int v36; // [rsp+38h] [rbp-40h]
	double v37; // [rsp+88h] [rbp+10h] BYREF
	__int64 v38; // [rsp+90h] [rbp+18h] BYREF

	if ((unsigned int)sub_1405BFA40(qword_140C65B98))
	{
		v9 = (_DWORD*)a1[3];
		if ((unsigned __int64)v9 >= a1[2] || v9 == dword_140A12138 || (int)v9[2] <= 0)
			v10 = 16;
		else
			v10 = sub_140056D60(a1, 1u);
		v11 = a1[4];
		v35 = a1;
		v33 = off_140B569F0;
		v12 = *(_QWORD*)(v11 + 112);
		v36 = 1;
		if (*(_QWORD*)(v11 + 120) >= v12)
			sub_14005E2C0((__int64)a1);
		v13 = a1[2];
		v14 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v14;
		a1[2] += 16i64;
		v34 = sub_1400578C0((__int64)a1);
		v15 = 0;
		v16 = v10 == 16;
		do
		{
			v17 = *(_QWORD*)(qword_140C65B98 + 72);
			if (v16)
				v10 = v15;
			v18 = *(_QWORD*)(v17 + 8);
			v19 = *(_QWORD*)(qword_140C65B98 + 72);
			while (v18)
			{
				if (*(_DWORD*)(v18 + 32) < v10)
				{
					v18 = *(_QWORD*)(v18 + 24);
				}
				else
				{
					v19 = v18;
					v18 = *(_QWORD*)(v18 + 16);
				}
			}
			if (v19 == v17 || v10 < *(_DWORD*)(v19 + 32))
			{
				v38 = *(_QWORD*)(qword_140C65B98 + 72);
				v20 = &v38;
			}
			else
			{
				v37 = *(double*)&v19;
				v20 = (__int64*)&v37;
			}
			v21 = *v20;
			if (v21 != *(_QWORD*)(qword_140C65B98 + 72))
			{
				v22 = (_QWORD*)(v21 + 40);
				if (v21 != -40 && !*(_DWORD*)(v21 + 60))
				{
					v23 = *(_DWORD*)(v21 + 56);
					if (v23)
					{
						v24 = sub_140214E00(v23);
						if ((unsigned int)sub_14073A490(a1, v24))
						{
							sub_1400FB470((__int64)&v33);
							a1 = v35;
							v35[2] -= 16i64;
						}
					}
					v25 = 0;
					if (v22[1])
					{
						v26 = 0i64;
						do
						{
							v27 = *(_DWORD*)(*v22 + 4 * v26);
							if (qword_140C63840)
							{
								v28 = qword_140C63840(off_140A6B550, v27, qword_140C63858);
							}
							else if (dword_140C65558)
							{
								v28 = 0i64;
							}
							else if ((int)sub_140214FE0() >= 0)
							{
								v28 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C641F0 + 24i64))(
									qword_140C641F0,
									v27);
							}
							else
							{
								v28 = 0i64;
							}
							if ((unsigned int)sub_14073A540(a1, v28, 0))
							{
								sub_1400FB470((__int64)&v33);
								a1 = v35;
								v35[2] -= 16i64;
							}
							v26 = ++v25;
						} while ((unsigned __int64)v25 < v22[1]);
					}
				}
			}
			if (!v16)
				break;
			++v15;
		} while (v15 < 0x10);
		v29 = *(_QWORD*)(a1[4] + 160i64);
		if ((unsigned int)(v34 - 1) >= *(_DWORD*)(v29 + 56))
		{
			v37 = (double)v34;
			if ((double)v34 == 0.0)
				v30 = *(_DWORD**)(v29 + 32);
			else
				v30 = (_DWORD*)(*(_QWORD*)(v29 + 32)
					+ 40 * ((unsigned int)(LODWORD(v37) + HIDWORD(v37)) % (((1i64 << *(_BYTE*)(v29 + 11)) - 1) | 1)));
			while (v30[6] != 3 || (double)v34 != *((double*)v30 + 2))
			{
				v30 = (_DWORD*)*((_QWORD*)v30 + 4);
				if (!v30)
				{
					v30 = dword_140A12138;
					break;
				}
			}
		}
		else
		{
			v30 = (_DWORD*)(*(_QWORD*)(v29 + 24) + 16i64 * (v34 - 1));
		}
		v31 = a1[2];
		v32 = v34;
		*(_QWORD*)v31 = *(_QWORD*)v30;
		*(_DWORD*)(v31 + 8) = v30[2];
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v31, v32);
		return 1i64;
	}
	else
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v2 = a1[2];
		v3 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v2 + 8) = 5;
		*(_QWORD*)v2 = v3;
		a1[2] += 16i64;
		v4 = sub_1400578C0((__int64)a1);
		v5 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v4);
		v6 = a1[2];
		*(_QWORD*)v6 = *v5;
		*(_DWORD*)(v6 + 8) = *((_DWORD*)v5 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v6, v7);
		return 1i64;
	}
}
// 14076C408: variable 'v7' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6B550: using guessed type wchar_t *off_140A6B550[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C641F0: using guessed type __int64 qword_140C641F0;
// 140C65558: using guessed type int dword_140C65558;
// 140C65B98: using guessed type __int64 qword_140C65B98;

