//----- (00000001407490E0) ----------------------------------------------------
__int64 __fastcall sub_1407490E0(__int64 a1)
{
	__int64 v1; // rdi
	_DWORD* v2; // rcx
	__int64 result; // rax
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rcx
	int v9; // ebp
	__int64 v10; // rdx
	unsigned __int8 v11; // bp
	unsigned __int64 v12; // rcx
	__int64 v13; // rbx
	_DWORD** v14; // r14
	__int64 v15; // rax
	__int64 v16; // rdx
	int v17; // r10d
	int v18; // eax
	_QWORD* v19; // rax
	_DWORD* v20; // rax
	_DWORD* v21; // rax
	__int64(__fastcall * *v22)(); // [rsp+20h] [rbp-28h] BYREF
	int v23; // [rsp+28h] [rbp-20h]
	__int64 v24; // [rsp+30h] [rbp-18h]
	int v25; // [rsp+38h] [rbp-10h]

	v1 = a1;
	if (!*(_QWORD*)(qword_140C65898 + 120))
	{
		v2 = *(_DWORD**)(a1 + 16);
		result = 1i64;
		*v2 = 0;
		v2[2] = 1;
		*(_QWORD*)(v1 + 16) += 16i64;
		return result;
	}
	v4 = 0i64;
	v5 = *(_QWORD*)(qword_140C63650 + 768);
	if (v5)
	{
		v6 = *(_QWORD*)(qword_140C63650 + 760);
		v7 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != v1)
		{
			v4 = (unsigned int)(v4 + 1);
			v7 = (unsigned int)v4;
			if ((unsigned int)v4 >= v5)
				goto LABEL_7;
		}
		v8 = *(_QWORD*)(v6 + 8 * v4);
	}
	else
	{
	LABEL_7:
		v8 = 0i64;
	}
	v9 = sub_1400F26A0(v8 + 384, 1);
	if ((unsigned int)(v9 - 1) > 3)
	{
		v21 = *(_DWORD**)(v1 + 16);
		*v21 = 0;
		v21[2] = 1;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	else
	{
		v10 = *(_QWORD*)(v1 + 32);
		v11 = v9 - 1;
		v12 = *(_QWORD*)(v10 + 112);
		v24 = v1;
		v22 = off_140B569F0;
		v25 = 1;
		if (*(_QWORD*)(v10 + 120) >= v12)
			sub_14005E2C0(v1);
		v13 = *(_QWORD*)(v1 + 16);
		v14 = (_DWORD**)(v1 + 16);
		v15 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v15;
		*(_QWORD*)(v1 + 16) += 16i64;
		v17 = sub_1400578C0(v1);
		v23 = v17;
		if (v11 < 4u && (v18 = sub_1403CE4A0(v11, (__int64)&v22), v1 = v24, v17 = v23, v18))
		{
			v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v24 + 32) + 160i64), v23);
			v16 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v16 = *v19;
			*(_DWORD*)(v16 + 8) = *((_DWORD*)v19 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
		}
		else
		{
			v20 = *v14;
			*v20 = 0;
			v20[2] = 1;
			*v14 += 4;
		}
		if (v1)
		{
			sub_1400579E0(v1, v16, v17);
			return 1i64;
		}
	}
	return 1i64;
}
// 140749268: variable 'v16' is possibly undefined
// 140749268: variable 'v17' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

