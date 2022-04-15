//----- (0000000140496030) ----------------------------------------------------
__int64 __fastcall sub_140496030(__int64* a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v5; // r12
	int* v6; // r14
	int* v7; // rcx
	__int64 v8; // rax
	unsigned __int64 v9; // rbp
	int* v10; // rbx
	__int64 v11; // rcx
	__int64 v12; // rax
	__int64 result; // rax

	v2 = a1[1];
	v5 = v2 + 1;
	v6 = sub_14018DB00(*a1, v2 + 1, 24i64);
	v7 = &v6[6 * v2];
	if (v7)
	{
		*(_QWORD*)v7 = off_140B68F20;
		*((_QWORD*)v7 + 1) = *(_QWORD*)(a2 + 8);
		v8 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v7 = off_140B67218;
		*((_QWORD*)v7 + 2) = v8;
	}
	if ((int*)*a1 != v6)
	{
		v9 = 0i64;
		if (a1[1])
		{
			v10 = v6;
			do
			{
				if (v10)
				{
					v11 = *a1 + (char*)v10 - (char*)v6;
					*(_QWORD*)v10 = off_140B68F20;
					*((_QWORD*)v10 + 1) = *(_QWORD*)(v11 + 8);
					v12 = *(_QWORD*)(v11 + 16);
					*(_QWORD*)v10 = off_140B67218;
					*((_QWORD*)v10 + 2) = v12;
				}
				(**(void(__fastcall***)(__int64, _QWORD))(*a1 + (char*)v10 - (char*)v6))(
					*a1 + (char*)v10 - (char*)v6,
					0i64);
				++v9;
				v10 += 6;
			} while (v9 < a1[1]);
			v5 = v2 + 1;
		}
		if (*a1)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a1 - 16) + 8i64))(*a1 - 16);
		*a1 = (__int64)v6;
	}
	result = v2;
	a1[1] = v5;
	return result;
}
// 140B67218: using guessed type __int64 (__fastcall *off_140B67218[14])();
// 140B68F20: using guessed type __int64 (__fastcall *off_140B68F20[7])();

