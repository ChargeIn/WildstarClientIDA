//----- (0000000140480ED0) ----------------------------------------------------
__int64 __fastcall sub_140480ED0(__int64* a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // rsi
	int* v6; // rcx
	unsigned __int64 v7; // r8
	int* v8; // rdx
	__int64 v9; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 88i64);
	v6 = &v5[22 * v2];
	if (v6)
	{
		*v6 = *(_DWORD*)a2;
		v6[1] = *(_DWORD*)(a2 + 4);
		v6[2] = *(_DWORD*)(a2 + 8);
		v6[3] = *(_DWORD*)(a2 + 12);
		v6[4] = *(_DWORD*)(a2 + 16);
		*((_BYTE*)v6 + 20) = *(_BYTE*)(a2 + 20);
		*((_QWORD*)v6 + 3) = *(_QWORD*)(a2 + 24);
		*((_BYTE*)v6 + 32) = *(_BYTE*)(a2 + 32);
		*((_QWORD*)v6 + 5) = *(_QWORD*)(a2 + 40);
		*((_BYTE*)v6 + 48) = *(_BYTE*)(a2 + 48);
		*((_QWORD*)v6 + 7) = *(_QWORD*)(a2 + 56);
		*((_BYTE*)v6 + 64) = *(_BYTE*)(a2 + 64);
		*((_QWORD*)v6 + 9) = *(_QWORD*)(a2 + 72);
		*((_BYTE*)v6 + 80) = *(_BYTE*)(a2 + 80);
	}
	if ((int*)*a1 != v5)
	{
		v7 = 0i64;
		if (a1[1])
		{
			v8 = v5 + 4;
			do
			{
				if (v8 != (int*)16)
				{
					v9 = (__int64)v8 + *a1 - (_QWORD)v5 - 16;
					*(v8 - 4) = *(_DWORD*)v9;
					*(v8 - 3) = *(_DWORD*)(v9 + 4);
					*(v8 - 2) = *(_DWORD*)(v9 + 8);
					*(v8 - 1) = *(_DWORD*)(v9 + 12);
					*v8 = *(_DWORD*)(v9 + 16);
					*((_BYTE*)v8 + 4) = *(_BYTE*)(v9 + 20);
					*((_QWORD*)v8 + 1) = *(_QWORD*)(v9 + 24);
					*((_BYTE*)v8 + 16) = *(_BYTE*)(v9 + 32);
					*((_QWORD*)v8 + 3) = *(_QWORD*)(v9 + 40);
					*((_BYTE*)v8 + 32) = *(_BYTE*)(v9 + 48);
					*((_QWORD*)v8 + 5) = *(_QWORD*)(v9 + 56);
					*((_BYTE*)v8 + 48) = *(_BYTE*)(v9 + 64);
					*((_QWORD*)v8 + 7) = *(_QWORD*)(v9 + 72);
					*((_BYTE*)v8 + 64) = *(_BYTE*)(v9 + 80);
				}
				++v7;
				v8 += 22;
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

