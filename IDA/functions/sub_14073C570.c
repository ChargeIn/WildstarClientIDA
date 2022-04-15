//----- (000000014073C570) ----------------------------------------------------
__int64 __fastcall sub_14073C570(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rax
	int* v6; // rdx
	__int64 v7; // rdi
	unsigned int* v8; // rax
	unsigned int v9; // r8d
	int v10; // eax
	__int64 v11; // rcx
	__int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF
	unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 0xFFFFFFFF);
	v3 = v2;
	if (v2)
	{
		v6 = *(int**)(v2 + 16);
		v7 = 0i64;
		v12[1] = 0i64;
		v12[0] = 0i64;
		if (v6)
		{
			sub_140003460(v12, v6);
			v7 = v12[0];
		}
		v8 = *(unsigned int**)(v3 + 24);
		if (v8)
			v9 = *v8;
		else
			v9 = 0;
		v13 = 16;
		v10 = sub_1405C48E0(qword_140C65B98, &v13, v9, v12, 0);
		v11 = a1[2];
		*(double*)v11 = (double)v10;
		*(_DWORD*)(v11 + 8) = 3;
		a1[2] += 16i64;
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
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
// 140C65B98: using guessed type __int64 qword_140C65B98;

