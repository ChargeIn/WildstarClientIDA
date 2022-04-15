//----- (000000014052F4E0) ----------------------------------------------------
__int64 __fastcall sub_14052F4E0(_QWORD* a1)
{
	_QWORD* v1; // rdi
	__int64 result; // rax
	_DWORD* v3; // rcx
	_DWORD* v4; // rax
	unsigned int v5; // eax
	__int64 v6; // rax
	__int64(__fastcall * **v7)(_QWORD); // r14
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	__int64 v10; // rbx
	__int64 v11; // rax
	int v12; // ebx
	__int64 v13; // rcx
	unsigned __int64 v14; // r15
	unsigned __int64 v15; // rbp
	__int64 v16; // rax
	__int64 v17; // rsi
	int v18; // ebx
	unsigned int v19; // eax
	__int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	int v24; // ebx
	__int64 v25; // rdx
	_QWORD* v26; // rax
	__int64 v27; // r8
	__int64 v28; // rdx
	__int64(__fastcall * *v29)(); // [rsp+30h] [rbp-68h] BYREF
	int v30; // [rsp+38h] [rbp-60h]
	_QWORD* v31; // [rsp+40h] [rbp-58h]
	int v32; // [rsp+48h] [rbp-50h]
	__int64(__fastcall * *v33)(); // [rsp+50h] [rbp-48h] BYREF
	int v34; // [rsp+58h] [rbp-40h]
	_QWORD* v35; // [rsp+60h] [rbp-38h]
	int v36; // [rsp+68h] [rbp-30h]

	v1 = a1;
	result = sub_14052E9B0(a1);
	if (result)
	{
		v4 = (_DWORD*)(v1[3] + 16i64);
		if ((unsigned __int64)v4 >= v1[2] || (v3 = dword_140A12138, v4 == dword_140A12138) || *(int*)(v1[3] + 24i64) <= 0)
			v5 = -1;
		else
			v5 = sub_140056D60(v1, 2u);
		if (qword_140C658F8
			&& (v6 = sub_140448420((__int64)v3, v5), (v7 = (__int64(__fastcall***)(_QWORD))v6) != 0i64)
			&& !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v6 + 32i64))(v6))
		{
			v8 = v1[4];
			v9 = *(_QWORD*)(v8 + 112);
			v29 = off_140B569F0;
			v31 = v1;
			v32 = 1;
			if (*(_QWORD*)(v8 + 120) >= v9)
				sub_14005E2C0((__int64)v1);
			v10 = v1[2];
			v11 = sub_14005C1B0((__int64)v1, 0, 0);
			*(_DWORD*)(v10 + 8) = 5;
			*(_QWORD*)v10 = v11;
			v1[2] += 16i64;
			v12 = sub_1400578C0((__int64)v1);
			v30 = v12;
			v14 = sub_140449850();
			v15 = 0i64;
			if (v14)
			{
				do
				{
					if (qword_140C658F8)
					{
						v16 = sub_1404483B0(v13, v15);
						v17 = v16;
						if (v16)
						{
							if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 64i64))(v16) & 2) == 0)
							{
								v18 = (**v7)(v7);
								if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v17 + 32i64))(v17) == v18)
								{
									v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 72i64))(v17);
									if (!v19
										|| (*(unsigned int(__fastcall**)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, __int64(__fastcall**)()))(*(_QWORD*)qword_140C659A0 + 24i64))(
											qword_140C659A0,
											*(_QWORD*)(qword_140C65898 + 120),
											v19,
											0i64,
											0i64,
											0,
											v29))
									{
										v20 = v1[4];
										v33 = off_140B569F0;
										v35 = v1;
										v21 = *(_QWORD*)(v20 + 112);
										v36 = 1;
										if (*(_QWORD*)(v20 + 120) >= v21)
											sub_14005E2C0((__int64)v1);
										v22 = v1[2];
										v23 = sub_14005C1B0((__int64)v1, 0, 0);
										*(_DWORD*)(v22 + 8) = 5;
										*(_QWORD*)v22 = v23;
										v1[2] += 16i64;
										v24 = sub_1400578C0((__int64)v1);
										v34 = v24;
										if ((int)sub_14052ED60(v17, (__int64)&v33) >= 0)
											sub_1400FB1D0((__int64)&v29);
										sub_1400579E0((__int64)v1, v25, v24);
									}
								}
							}
						}
					}
					++v15;
				} while (v15 < v14);
				v1 = v31;
				v12 = v30;
			}
			v26 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v12);
			v27 = v1[2];
			*(_QWORD*)v27 = *v26;
			v28 = *((unsigned int*)v26 + 2);
			*(_DWORD*)(v27 + 8) = v28;
			v1[2] += 16i64;
			sub_1400579E0((__int64)v1, v28, v12);
			return 1i64;
		}
		else
		{
			return 0i64;
		}
	}
	return result;
}
// 14052F546: variable 'v3' is possibly undefined
// 14052F620: variable 'v13' is possibly undefined
// 14052F713: variable 'v25' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140C659A0: using guessed type __int64 qword_140C659A0;

