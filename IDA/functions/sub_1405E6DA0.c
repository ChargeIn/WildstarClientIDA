//----- (00000001405E6DA0) ----------------------------------------------------
__int64 __fastcall sub_1405E6DA0(__int64 a1, __int64* a2)
{
	__int64 result; // rax
	__int64 i; // rdi
	__int64 v6; // rax
	int v7; // ecx
	int* v8; // rax
	int v9; // ebp
	__int64 v10; // rbx
	int* v11; // rax
	int* v12; // r14

	result = *(unsigned int*)(a1 + 16);
	for (i = 0i64; (unsigned int)i < (unsigned int)result; i = (unsigned int)(i + 1))
	{
		v6 = *(_QWORD*)(a1 + 8 * i + 24);
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 4);
			if (v7 == 4)
			{
				v8 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v6 + 12), 0i64);
				if (v8)
				{
					if (v8[115])
						sub_140003460(a2, v8 + 115);
				}
			}
			else if (v7 == 33)
			{
				v9 = *(_DWORD*)(v6 + 12);
				v10 = a2[1];
				v11 = sub_14018DB00(*a2, v10 + 1, 4i64);
				v12 = v11;
				v11[v10] = v9;
				if ((int*)*a2 != v11)
				{
					sub_1407DB590(v11, (int*)*a2, 4 * a2[1]);
					if (*a2)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
					*a2 = (__int64)v12;
				}
				a2[1] = v10 + 1;
			}
		}
		result = *(unsigned int*)(a1 + 16);
	}
	return result;
}
// 1405E6DD2: conditional instruction was optimized away because eax.4!=0
// 1405E6DF1: conditional instruction was optimized away because rax.8!=0
// 1405E6E2C: conditional instruction was optimized away because rax.8!=0
// 140C658F0: using guessed type __int64 qword_140C658F0;

