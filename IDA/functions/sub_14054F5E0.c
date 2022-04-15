//----- (000000014054F5E0) ----------------------------------------------------
__int64* __fastcall sub_14054F5E0(__int64 a1, __int64* a2)
{
	int* v4; // rdx
	__int64 v5; // rsi
	__int64 v6; // r15
	__int64 v7; // rax
	int v8; // ebp
	__int64 v9; // r8
	__int64 v10; // rdi
	int* v11; // rax
	int* v12; // r14

	a2[1] = 0i64;
	*a2 = 0i64;
	v4 = (int*)(*(_QWORD*)(a1 + 8) + 232i64);
	if (*v4)
		sub_140003460(a2, v4);
	v5 = 248i64;
	v6 = 3i64;
	do
	{
		v7 = *(_QWORD*)(a1 + 8);
		v8 = *(_DWORD*)(v5 + v7 - 12);
		if (v8)
		{
			v9 = *(unsigned int*)(v5 + v7);
			if (!(_DWORD)v9
				|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, _QWORD, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0
					+ 24i64))(
						qword_140C659A0,
						*(_QWORD*)(qword_140C65898 + 120),
						v9,
						0i64,
						0i64,
						0))
			{
				v10 = a2[1];
				v11 = sub_14018DB00(*a2, v10 + 1, 4i64);
				v12 = v11;
				v11[v10] = v8;
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
		v5 += 4i64;
		--v6;
	} while (v6);
	return a2;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659A0: using guessed type __int64 qword_140C659A0;

