//----- (000000014073C670) ----------------------------------------------------
__int64 __fastcall sub_14073C670(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbp
	__int64 v4; // rax
	int* v6; // rdx
	unsigned int v7; // edi
	__int64 v8; // rsi
	unsigned int* v9; // rax
	__int64 v10; // rdx
	__int64 v11; // r8
	int v12; // ecx
	__int64 v13; // rax
	__int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v15; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = v2;
	if (v2)
	{
		v6 = *(int**)(v2 + 16);
		v7 = 0;
		v14[1] = 0i64;
		v8 = 0i64;
		v14[0] = 0i64;
		if (v6)
		{
			sub_140003460(v14, v6);
			v8 = v14[0];
		}
		v9 = *(unsigned int**)(v3 + 24);
		if (v9)
			v7 = *v9;
		if ((*(_DWORD*)(qword_140C65B98 + 268) == 16 || *(_DWORD*)(qword_140C65B98 + 340))
			&& (v10 = *(_QWORD*)(qword_140C65898 + 27728)) != 0
			&& *(_QWORD*)(v10 + 96)
			&& (v11 = *(_QWORD*)(*(_QWORD*)(v10 + 88) + 8i64 * *(_QWORD*)(v10 + 104))) != 0
			&& *(_DWORD*)(v11 + 16) == *(_DWORD*)(v10 + 16)
			&& *(_QWORD*)(v11 + 24) == *(_QWORD*)(v10 + 24))
		{
			v15 = 16;
			v12 = sub_1405C48E0(qword_140C65B98, &v15, v7, v14, 1);
		}
		else
		{
			v12 = 7;
		}
		v13 = a1[2];
		*(_DWORD*)(v13 + 8) = 3;
		*(double*)v13 = (double)v12;
		a1[2] += 16i64;
		if (v8)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
		return 1i64;
	}
	else
	{
		v4 = a1[2];
		*(_QWORD*)v4 = 0x4022000000000000i64;
		*(_DWORD*)(v4 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;

