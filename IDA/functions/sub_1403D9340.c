//----- (00000001403D9340) ----------------------------------------------------
__int64 __fastcall sub_1403D9340(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	int v3; // ebx
	__int64 v4; // r8
	unsigned __int64 v5; // r9
	__int64 v6; // r11
	__int64 v7; // rcx
	int* v8; // rax
	unsigned int v9; // edx
	unsigned int v10; // ecx
	__int64 v12[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v13[2]; // [rsp+30h] [rbp-28h] BYREF
	int v14; // [rsp+40h] [rbp-18h]
	__int64 v15; // [rsp+60h] [rbp+8h] BYREF
	int* v16; // [rsp+68h] [rbp+10h] BYREF

	v15 = a1;
	v2 = qword_140C65898;
	if (*(_DWORD*)(a2 + 128) != 20)
		return 1i64;
	v3 = *(_DWORD*)(a2 + 8);
	if ((v3 & 0xC0000000) != 0)
		return 1i64;
	v4 = *(_QWORD*)(a2 + 416);
	v5 = *(_QWORD*)(a2 + 424);
	v12[0] = v4;
	v12[1] = v5;
	if (!(_DWORD)v4 || !v5)
		return 2147500037i64;
	v6 = *(_QWORD*)(qword_140C65898 + 28512);
	v7 = *(_QWORD*)(v6 + 8);
	v8 = (int*)v6;
	while (v7)
	{
		v9 = *(_DWORD*)(v7 + 32);
		if (v9 < (unsigned int)v4 || v9 <= (unsigned int)v4 && *(_QWORD*)(v7 + 40) < v5)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == (int*)v6 || (v10 = v8[8], (unsigned int)v4 < v10) || (unsigned int)v4 <= v10 && v5 < *((_QWORD*)v8 + 5))
	{
		v13[0] = v4;
		v13[1] = v5;
		v14 = 0;
		v15 = (__int64)v8;
		sub_1403DF7E0(qword_140C65898 + 28504, &v16, &v15, v13);
		v8 = v16;
	}
	v8[12] = v3;
	sub_1405FE1C0(*(_QWORD*)(v2 + 32144), (__int64)v12);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

