//----- (0000000140765F30) ----------------------------------------------------
__int64 __fastcall sub_140765F30(__int64* a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // rsi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 64i64);
	v6 = &v5[16 * v2];
	if (v6)
	{
		*(_OWORD*)v6 = *(_OWORD*)a2;
		v6[4] = *(_DWORD*)(a2 + 16);
		v6[5] = *(_DWORD*)(a2 + 20);
		v6[6] = *(_DWORD*)(a2 + 24);
		*((_QWORD*)v6 + 4) = *(_QWORD*)(a2 + 32);
		v6[10] = *(_DWORD*)(a2 + 40);
		v6[11] = *(_DWORD*)(a2 + 44);
		v6[12] = *(_DWORD*)(a2 + 48);
		v6[13] = *(_DWORD*)(a2 + 52);
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5 + 5;
			do
			{
				if (v8 != (int*)20)
				{
					v9 = (__int64)v8 + *a1 - (_QWORD)v5 - 20;
					*(_OWORD*)(v8 - 5) = *(_OWORD*)v9;
					*(v8 - 1) = *(_DWORD*)(v9 + 16);
					*v8 = *(_DWORD*)(v9 + 20);
					v8[1] = *(_DWORD*)(v9 + 24);
					*(_QWORD*)(v8 + 3) = *(_QWORD*)(v9 + 32);
					v8[5] = *(_DWORD*)(v9 + 40);
					v8[6] = *(_DWORD*)(v9 + 44);
					v8[7] = *(_DWORD*)(v9 + 48);
					v8[8] = *(_DWORD*)(v9 + 52);
				}
				++v7;
				v8 += 16;
			} while (v7 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

