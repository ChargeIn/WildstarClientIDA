//----- (00000001403A8080) ----------------------------------------------------
__int64 sub_1403A8080()
{
	unsigned int v0; // r13d
	__int64 v1; // r14
	int* v2; // rsi
	__int64 v3; // rbp
	int* v4; // rbx
	__int64 v5; // r12
	int* v6; // rax
	int* v7; // rdi
	int v8; // ebp
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rdx
	int* v12; // rdi
	__int64 result; // rax
	int* v14; // rsi
	__int64 i; // rcx
	__int64 v16; // [rsp+70h] [rbp+8h]

	v0 = 0;
	v1 = 4i64;
	v2 = (int*)(qword_140C65898 + 25464);
	v3 = 0i64;
	v4 = 0i64;
	v5 = 4i64;
	v16 = qword_140C65898;
	do
	{
		v6 = sub_14018DB00((__int64)v4, v3 + 1, 4i64);
		v7 = v6;
		v6[v3] = *v2;
		if (v4 != v6)
		{
			sub_1407DB590(v6, v4, 4 * v3);
			if (v4)
				(*(void(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
			v4 = v7;
		}
		++v3;
		++v2;
		--v5;
	} while (v5);
	v8 = 3;
	do
	{
		v9 = (*(__int64(__fastcall**)(__int64*))(qword_140C77890 + 24))(&qword_140C77890);
		v10 = v0++;
		v11 = (unsigned int)(int)((double)v9 * 2.328306436538696e-10 * ((double)v8 + 1.0));
		v12 = &v4[v11];
		result = (unsigned int)*v12;
		*(_DWORD*)(v16 + 4 * v10 + 25464) = result;
		if ((unsigned int)v11 < v8)
		{
			result = (unsigned int)(v11 + 1);
			v14 = &v4[result];
			for (i = (unsigned int)(v8 - v11); i; --i)
				*v12++ = *v14++;
		}
		--v8;
		--v1;
	} while (v1);
	if (v4)
		return (*(__int64(__fastcall**)(int*))(*((_QWORD*)v4 - 2) + 8i64))(v4 - 4);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C77890: using guessed type __int64 qword_140C77890;

