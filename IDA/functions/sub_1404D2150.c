//----- (00000001404D2150) ----------------------------------------------------
__int64 __fastcall sub_1404D2150(_QWORD* a1, __int64 a2)
{
	unsigned int v4; // ebp
	unsigned __int8 i; // si
	unsigned int v6; // edx
	__int64 v7; // rdi
	int* v8; // rax
	int* v9; // r14
	int* v10; // rdx
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx

	if (!a2)
		return 2147500037i64;
	v4 = 0;
	a1[1] = a2;
	for (i = 0; i < 0xAu; ++i)
	{
		v6 = *(_DWORD*)(a1[1] + 4i64 * i + 40);
		if (!v6)
			break;
		if (v6 < v4)
			return 2147500037i64;
		v7 = a1[3];
		v4 = *(_DWORD*)(a1[1] + 4i64 * i + 40);
		v8 = sub_14018DB00(a1[2], v7 + 1, 4i64);
		v9 = v8;
		v8[v7] = v4;
		v10 = (int*)a1[2];
		if (v10 != v8)
		{
			sub_1407DB590(v8, v10, 4i64 * a1[3]);
			v11 = a1[2];
			if (v11)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
			a1[2] = v9;
		}
		a1[3] = v7 + 1;
	}
	v12 = a1[3];
	if (!v12)
		return 2147500037i64;
	sub_1403FC6F0(a1 + 7, v12);
	return 0i64;
}

