//----- (000000014005BD50) ----------------------------------------------------
void* __fastcall sub_14005BD50(__int64 a1, __int64 a2, int a3, int a4)
{
	char v4; // r14
	char* v5; // r15
	__int64 v6; // rbx
	__int64 v7; // r13
	__int64 v11; // rdx
	int v12; // esi
	__int64 v13; // rbx
	__int64 v14; // r15
	__int64 v15; // r14
	_QWORD* v16; // rax
	__int64 v17; // r14
	__int64 v18; // rsi
	int* v19; // rbx
	_DWORD* v20; // rax
	void* result; // rax
	char* v22; // [rsp+20h] [rbp-48h]
	__int64 v23; // [rsp+78h] [rbp+10h]
	char v24; // [rsp+80h] [rbp+18h]

	v4 = *(_BYTE*)(a2 + 11);
	v5 = *(char**)(a2 + 32);
	v6 = *(int*)(a2 + 56);
	v7 = a3;
	v24 = v4;
	v22 = v5;
	if (a3 > (int)v6)
		sub_14005BB80(a1, a2, a3);
	sub_14005BC20(a1, a2, a4);
	if ((int)v7 < (int)v6)
	{
		*(_DWORD*)(a2 + 56) = v7;
		v11 = v6;
		v23 = v6;
		if (v7 < v6)
		{
			v12 = v7 + 1;
			v13 = 16 * v7;
			v14 = v11 - v7;
			do
			{
				v15 = *(_QWORD*)(a2 + 24);
				if (*(_DWORD*)(v13 + v15 + 8))
				{
					v16 = sub_14005C5D0(a1, a2, v12);
					*v16 = *(_QWORD*)(v13 + v15);
					*((_DWORD*)v16 + 2) = *(_DWORD*)(v13 + v15 + 8);
				}
				++v12;
				v13 += 16i64;
				--v14;
			} while (v14);
			v11 = v23;
			v4 = v24;
			v5 = v22;
		}
		if ((unsigned __int64)((int)v7 + 1) > 0xFFFFFFFFFFFFFFFi64)
			sub_14005ABE0(a1, aMemoryAllocati);
		*(_QWORD*)(a2 + 24) = sub_140064780(a1, *(_QWORD*)(a2 + 24), 16 * v11, 16 * v7);
	}
	v17 = 1i64 << v4;
	v18 = (int)v17 - 1;
	if ((int)v17 - 1 >= 0)
	{
		v19 = (int*)&v5[32 * (int)v17 - 24 + 8 * (int)v17];
		do
		{
			if (*(v19 - 2))
			{
				v20 = sub_14005C450(a2, v19);
				*(_BYTE*)(a2 + 10) = 0;
				if (v20 == dword_140A12138)
				{
					if (!v19[2])
						sub_14005ABE0(a1, aTableIndexIsNi);
					v20 = (_DWORD*)sub_14005C260(a1, a2, v19);
				}
				*(_QWORD*)v20 = *((_QWORD*)v19 - 2);
				v20[2] = *(v19 - 2);
			}
			v19 -= 10;
			--v18;
		} while (v18 >= 0);
	}
	result = &unk_140A12148;
	if (v5 != (char*)&unk_140A12148)
		return (void*)sub_140064780(a1, (__int64)v5, 40 * v17, 0i64);
	return result;
}
// 14005C260: using guessed type __int64 __fastcall sub_14005C260(_QWORD, _QWORD, _QWORD);
// 140A12138: using guessed type _DWORD dword_140A12138[4];

