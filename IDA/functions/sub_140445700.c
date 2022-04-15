//----- (0000000140445700) ----------------------------------------------------
__int64 __fastcall sub_140445700(__int64* a1, _DWORD* a2)
{
	__int64 v2; // rbp
	int* v5; // r15
	int* v6; // rcx
	__int64* v7; // rcx
	unsigned __int64 v8; // rsi
	int* v9; // rbx
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 result; // rax

	v2 = a1[1];
	v5 = sub_14018DB00(*a1, v2 + 1, 24i64);
	v6 = &v5[6 * v2];
	if (v6)
	{
		v7 = (__int64*)(v6 + 2);
		*((_DWORD*)v7 - 2) = *a2;
		sub_1403B4F00(v7, (__int64)(a2 + 2));
	}
	if ((int*)*a1 != v5)
	{
		v8 = 0i64;
		if (a1[1])
		{
			v9 = v5;
			do
			{
				if (v9)
				{
					v10 = *a1 + (char*)v9 - (char*)v5 + 8;
					*v9 = *(_DWORD*)(*a1 + (char*)v9 - (char*)v5);
					sub_1403B4F00((__int64*)v9 + 1, v10);
				}
				v11 = *(_QWORD*)(*a1 + (char*)v9 - (char*)v5 + 8);
				if (v11)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
				++v8;
				v9 += 6;
			} while (v8 < a1[1]);
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v5;
	}
	result = v2;
	a1[1] = v2 + 1;
	return result;
}

