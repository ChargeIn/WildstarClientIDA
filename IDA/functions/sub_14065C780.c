//----- (000000014065C780) ----------------------------------------------------
__int64 __fastcall sub_14065C780(__int64 a1)
{
	_QWORD* v1; // rdi
	__int64 v2; // rcx
	__int64 v3; // rbx
	__int64 v4; // rax
	int v5; // r14d
	int* v6; // rax
	__int64 v7; // rax
	_QWORD* v8; // rax
	__int64 v9; // rdx
	unsigned __int64 v10; // rbx
	unsigned __int64 v11; // rbp
	__int64 v12; // rsi
	void(__fastcall * **v13)(_QWORD); // rdx
	_QWORD* v14; // rax
	_QWORD* v15; // rax
	__int64 v16; // r8
	__int64 v18; // [rsp+20h] [rbp-38h] BYREF
	unsigned __int64 v19; // [rsp+28h] [rbp-30h]
	__int64(__fastcall * *v20)(); // [rsp+30h] [rbp-28h] BYREF
	int v21; // [rsp+38h] [rbp-20h]
	_QWORD* v22; // [rsp+40h] [rbp-18h]
	int v23; // [rsp+48h] [rbp-10h]

	v1 = (_QWORD*)a1;
	v22 = (_QWORD*)a1;
	v2 = *(_QWORD*)(a1 + 32);
	v20 = off_140B569F0;
	v23 = 1;
	if (*(_QWORD*)(v2 + 120) >= *(_QWORD*)(v2 + 112))
		sub_14005E2C0((__int64)v1);
	v3 = v1[2];
	v4 = sub_14005C1B0((__int64)v1, 0, 0);
	*(_DWORD*)(v3 + 8) = 5;
	*(_QWORD*)v3 = v4;
	v1[2] += 16i64;
	v5 = sub_1400578C0((__int64)v1);
	v21 = v5;
	v6 = (int*)sub_1406622C0((__int64)v1, 1);
	if (!v6 || (v7 = sub_1403D90D0(qword_140C65898, *v6)) == 0)
	{
		v15 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v16 = v1[2];
		*(_QWORD*)v16 = *v15;
		v9 = *((unsigned int*)v15 + 2);
		*(_DWORD*)(v16 + 8) = v9;
		goto LABEL_16;
	}
	if (v7 != *(_QWORD*)(qword_140C65898 + 120))
	{
		v8 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
		v9 = v1[2];
		*(_QWORD*)v9 = *v8;
		*(_DWORD*)(v9 + 8) = *((_DWORD*)v8 + 2);
	LABEL_16:
		v1[2] += 16i64;
		goto LABEL_17;
	}
	v10 = 0i64;
	v19 = 0i64;
	v18 = 0i64;
	sub_1403D6710(qword_140C65898 + 160, &v18);
	v11 = v19;
	v12 = v18;
	if (v19)
	{
		do
		{
			v13 = *(void(__fastcall****)(_QWORD))(v12 + 8 * v10);
			if (v13 && (unsigned int)sub_140415D60(v1, v13))
			{
				sub_1400FB470((__int64)&v20);
				v1 = v22;
				v22[2] -= 16i64;
			}
			++v10;
		} while (v10 < v11);
		v5 = v21;
	}
	v14 = sub_14005C3C0(*(_QWORD*)(v1[4] + 160i64), v5);
	v9 = v1[2];
	*(_QWORD*)v9 = *v14;
	*(_DWORD*)(v9 + 8) = *((_DWORD*)v14 + 2);
	v1[2] += 16i64;
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v12 - 16) + 8i64))(v12 - 16);
LABEL_17:
	sub_1400579E0((__int64)v1, v9, v5);
	return 1i64;
}
// 14065C934: variable 'v9' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

