#include "../winhttp.h"

//----- (000000014076B940) ----------------------------------------------------
__int64 __fastcall sub_14076B940(_QWORD* a1)
{
	_QWORD* v1; // rdi
	int v2; // eax
	__int64 v3; // r15
	__int64 v5; // r8
	unsigned __int64 v6; // r9
	_DWORD* v7; // rcx
	_DWORD* v8; // rdx
	unsigned int v9; // esi
	int v10; // eax
	int v11; // r14d
	int v12; // eax
	BOOL v13; // ebp
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	__int64 v18; // rcx
	__int64 v19; // rcx
	unsigned int v20; // r14d
	_BOOL8 v21; // r12
	unsigned int v22; // eax
	unsigned int v23; // ebx
	__int64 v24; // rax
	unsigned int v25; // ebp
	unsigned int v26; // r13d
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // r8
	_DWORD* v30; // rax
	unsigned int v31; // edx
	__int64 v32; // rcx
	__int64 v33; // rdx
	int v34; // r8d
	int v35; // eax
	__int64* v36; // rax
	__int64 v37; // r9
	int v38; // r8d
	__int64 v39; // rdx
	__int64(__fastcall * *v40)(); // [rsp+30h] [rbp-48h] BYREF
	int v41; // [rsp+38h] [rbp-40h]
	_QWORD* v42; // [rsp+40h] [rbp-38h]
	int v43; // [rsp+48h] [rbp-30h]
	int v44; // [rsp+88h] [rbp+10h]

	v1 = a1;
	v2 = sub_140056D60(a1, 1u);
	v3 = v2;
	if (v2 >= 16)
	{
		*(_DWORD*)(v1[2] + 8i64) = 0;
		v1[2] += 16i64;
		return 1i64;
	}
	v5 = v1[3];
	v6 = v1[2];
	v7 = dword_140A12138;
	v8 = dword_140A12138;
	if (v5 + 16 < v6)
		v8 = (_DWORD*)(v5 + 16);
	v9 = 0;
	v10 = v8[2];
	v11 = v10 && (v10 != 1 || *v8);
	v44 = v11;
	if (v5 + 32 < v6)
		v7 = (_DWORD*)(v5 + 32);
	v12 = v7[2];
	v13 = v12 && (v12 != 1 || *v7);
	v14 = v1[4];
	v42 = v1;
	v40 = off_140B569F0;
	v15 = *(_QWORD*)(v14 + 112);
	v43 = 1;
	if (*(_QWORD*)(v14 + 120) >= v15)
		sub_14005E2C0((__int64)v1);
	v16 = v1[2];
	v17 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v16 + 8) = 5;
	*(_QWORD*)v16 = v17;
	v1[2] += 16i64;
	v41 = sub_1400578C0((__int64)v1);
	if ((unsigned int)sub_1405C3790(v18, v3, v11) && (unsigned int)sub_14073A3E0(v1, v3, v11))
	{
		sub_1400FB470((__int64)&v40);
		v1 = v42;
		v42[2] -= 16i64;
	}
	v19 = *(_QWORD*)(qword_140C65898 + 120);
	if (v19)
		v20 = *(_DWORD*)(v19 + 56);
	else
		v20 = 0;
	v21 = v13;
	if ((((_DWORD)v3 - 3) & 0xFFFFFFFC) != 0 || (_DWORD)v3 == 5)
	{
		v25 = 0;
		v26 = sub_1402151F0();
		if (v26)
		{
			do
			{
				v27 = sub_1402152A0(v25);
				v28 = v27;
				if (v27)
				{
					v29 = *(unsigned int*)(v27 + 32);
					if ((!(_DWORD)v29
						|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD, __int64(__fastcall**)()))(*(_QWORD*)qword_140C659A0 + 24i64))(
							qword_140C659A0,
							*(_QWORD*)(qword_140C65898 + 120),
							v29,
							0i64,
							0i64,
							0,
							v40))
						&& (v21 || (unsigned int)sub_1405C3960(qword_140C65B98, *(_DWORD*)v28))
						&& (*(_BYTE*)(v28 + 4) & 1) != 0)
					{
						v30 = (_DWORD*)sub_140214E00(*(_DWORD*)(v28 + 16));
						if (v30)
						{
							v31 = v30[4];
							if ((v31 & 1) != 0 && v30[3] == (_DWORD)v3)
							{
								v32 = (v31 >> 5) & 1;
								if ((_DWORD)v32 == v44 && (v31 & 0x100) == 0 && (v21 || v20 <= v30[7] && v20 >= v30[6]))
								{
									v33 = v28;
									if ((unsigned __int64)(v3 - 10) <= 2)
									{
										v35 = sub_1405C3320(v32, v28);
										v33 = v28;
										v34 = v35;
									}
									else
									{
										v34 = 0;
									}
									if ((unsigned int)sub_14073A540(v1, v33, v34))
									{
										sub_1400FB470((__int64)&v40);
										v1 = v42;
										v42[2] -= 16i64;
									}
								}
							}
						}
					}
				}
				++v25;
			} while (v25 < v26);
		}
		goto LABEL_72;
	}
	if (qword_140C63838)
	{
		v22 = qword_140C63838(off_140A6B518, qword_140C63858);
	}
	else
	{
		if (dword_140C6417C)
		{
			v23 = 0;
			goto LABEL_35;
		}
		if ((int)sub_140214BA0() < 0)
		{
			v23 = 0;
			goto LABEL_35;
		}
		v22 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C652E0 + 40i64))(qword_140C652E0);
	}
	v23 = v22;
LABEL_35:
	if (v23)
	{
		while (!qword_140C63848)
		{
			if (!dword_140C6417C && (int)sub_140214BA0() >= 0)
			{
				v24 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C652E0 + 32i64))(qword_140C652E0, v9);
				goto LABEL_41;
			}
		LABEL_49:
			if (++v9 >= v23)
				goto LABEL_72;
		}
		v24 = qword_140C63848(off_140A6B518, v9, qword_140C63858);
	LABEL_41:
		if (v24
			&& (*(_BYTE*)(v24 + 16) & 1) != 0
			&& *(_DWORD*)(v24 + 12) == (_DWORD)v3
			&& (v13 || v20 <= *(_DWORD*)(v24 + 28) && v20 >= *(_DWORD*)(v24 + 24)))
		{
			if ((unsigned int)sub_14073A490(v1, v24))
			{
				sub_1400FB470((__int64)&v40);
				v1 = v42;
				v42[2] -= 16i64;
			}
		}
		goto LABEL_49;
	}
LABEL_72:
	v36 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v41);
	v37 = v1[2];
	v38 = v41;
	v39 = *v36;
	*(_QWORD*)v37 = *v36;
	*(_DWORD*)(v37 + 8) = *((_DWORD*)v36 + 2);
	v1[2] += 16i64;
	sub_1400579E0((__int64)v1, v39, v38);
	return 1i64;
}
// 14076BA5D: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6B518: using guessed type wchar_t *off_140A6B518[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C6417C: using guessed type int dword_140C6417C;
// 140C652E0: using guessed type __int64 qword_140C652E0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C65B98: using guessed type __int64 qword_140C65B98;

