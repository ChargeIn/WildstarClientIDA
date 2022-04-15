//----- (00000001407D7AB0) ----------------------------------------------------
__int64 __fastcall sub_1407D7AB0(_QWORD* a1, __int64 a2, unsigned int* a3)
{
	__int64 v4; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r10
	__int64 v10; // r8
	unsigned int* v11; // rdx
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rax

	v4 = *((_QWORD*)a3 + 1);
	if ((unsigned __int64)(v4 + a2) < *a1)
		return 2147500037i64;
	v7 = *a3;
	if ((unsigned __int64)(a2 + 24 * v7 + v4) <= a1[1])
	{
		v8 = 0i64;
		if ((_DWORD)v7)
			v8 = v4 + a2;
		v9 = 0i64;
		v10 = v8 + ((24 * v7 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
		*((_QWORD*)a3 + 1) = v8;
		if (!(_DWORD)v7)
			return 0i64;
		while (1)
		{
			v11 = (unsigned int*)(*((_QWORD*)a3 + 1) + a1[2] + 24 * v9);
			v12 = *((_QWORD*)v11 + 1);
			v13 = v12 + v10;
			if ((unsigned __int64)(v12 + v10) < *a1)
				break;
			v14 = *v11;
			if ((unsigned __int64)(v10 + v12 + 4 * v14) > a1[1])
				break;
			v15 = 0i64;
			if ((_DWORD)v14)
				v15 = v13;
			*((_QWORD*)v11 + 1) = v15;
			v16 = *((_QWORD*)v11 + 2);
			v17 = v16 + v10;
			if ((unsigned __int64)(v16 + v10) < *a1 || (unsigned __int64)(v10 + v16 + 8 * v14) > a1[1])
				break;
			v18 = 0i64;
			if ((_DWORD)v14)
				v18 = v17;
			v9 = (unsigned int)(v9 + 1);
			*((_QWORD*)v11 + 2) = v18;
			if ((unsigned int)v9 >= *a3)
				return 0i64;
		}
	}
	return 2147500037i64;
}

