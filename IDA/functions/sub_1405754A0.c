//----- (00000001405754A0) ----------------------------------------------------
void __fastcall sub_1405754A0(__int64 a1, __int64 a2, unsigned __int8(__fastcall* a3)(_DWORD*, _DWORD*))
{
	__int64 v5; // r15
	__int64 v6; // rax
	__int64 v7; // rbp
	__int64 v8; // r12
	int* i; // r14
	int v10; // eax
	__int64 v11; // rsi
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rbx
	__int64 v15; // rsi
	_DWORD* v16; // rcx
	__int64 v17; // rsi
	__int64 v18; // rcx
	int v19[4]; // [rsp+30h] [rbp-58h] BYREF

	v5 = (a2 - a1) >> 4;
	if (v5 >= 2)
	{
		v6 = (v5 - 2) / 2;
		v7 = v6;
		v8 = 2 * v6 + 2;
		for (i = (int*)(a1 + 16 * v6); ; i -= 4)
		{
			v10 = i[2];
			v11 = v7;
			v19[0] = *i;
			v12 = i[1];
			v19[2] = v10;
			v13 = i[3];
			v14 = v8;
			v19[1] = v12;
			for (v19[3] = v13; v14 < v5; v14 = 2 * v14 + 2)
			{
				if (a3((_DWORD*)(a1 + 16 * v14), (_DWORD*)(a1 + 16 * v14 - 16)))
					--v14;
				v15 = 2 * v11;
				v16 = (_DWORD*)(a1 + 16 * v14);
				*(_DWORD*)(a1 + 8 * v15) = *v16;
				*(_DWORD*)(a1 + 8 * v15 + 4) = v16[1];
				*(_DWORD*)(a1 + 8 * v15 + 8) = v16[2];
				*(_DWORD*)(a1 + 8 * v15 + 12) = v16[3];
				v11 = v14;
			}
			if (v14 == v5)
			{
				v17 = 2 * v11;
				v18 = a1 + 16 * v14;
				*(_DWORD*)(a1 + 8 * v17) = *(_DWORD*)(v18 - 16);
				*(_DWORD*)(a1 + 8 * v17 + 4) = *(_DWORD*)(v18 - 12);
				*(_DWORD*)(a1 + 8 * v17 + 8) = *(_DWORD*)(v18 - 8);
				*(_DWORD*)(a1 + 8 * v17 + 12) = *(_DWORD*)(v18 - 4);
				v11 = v14 - 1;
			}
			sub_140575720(a1, v11, v7, v19, a3);
			if (!v7)
				break;
			--v7;
			v8 -= 2i64;
		}
	}
}

