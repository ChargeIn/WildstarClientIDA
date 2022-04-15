//----- (00000001402D7AA0) ----------------------------------------------------
__int64* __fastcall sub_1402D7AA0(
	__int64* a1,
	__int64 a2,
	__int64 a3,
	__int64 a4,
	unsigned int* a5,
	__int64 a6,
	__int64 a7)
{
	unsigned int v7; // r13d
	unsigned int v9; // ebp
	unsigned int v10; // esi
	__int64 v11; // r15
	__int64 v12; // r12
	__int64 v13; // rdi
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdi
	_DWORD* v17; // r8
	__int64 v18; // r9
	__int64 v19; // r10
	unsigned int v20; // edx
	_DWORD* v21; // rax

	a1[5] = 0i64;
	a1[6] = 0i64;
	a1[7] = 0i64;
	a1[8] = 0i64;
	a1[9] = 0i64;
	a1[10] = 0i64;
	a1[11] = 0i64;
	a1[12] = 0i64;
	*a1 = a3;
	a1[1] = a4;
	*((_DWORD*)a1 + 44) = 0;
	v7 = *(_DWORD*)(a4 + 24);
	v9 = 0;
	if (v7 > 4)
		v7 = 4;
	if (v7)
	{
		v10 = 0;
		v11 = 0i64;
		do
		{
			v12 = *(_QWORD*)(a1[1] + 32);
			if ((unsigned int)*(unsigned __int16*)(v12 + v11) < *(_DWORD*)(*a1 + 56))
			{
				v13 = *(_QWORD*)(*a1 + 64) + 32i64 * *(unsigned __int16*)(v12 + v11);
				v14 = a7 ? *(_QWORD*)(a7 + 8i64 * v10) : *(_QWORD*)(v13 + 24);
				if ((*(int(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670
					+ 136i64))(
						qword_140C65670,
						v14,
						3i64,
						*(unsigned int*)(v13 + 4),
						0,
						0,
						&a1[v9 + 5]) < 0)
				{
					sub_1400035B0();
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)qword_140C65670 + 128i64))(
						qword_140C65670,
						*(_QWORD*)(qword_140C657F0 + 1288),
						&a1[v9 + 5]);
				}
			}
			if ((unsigned int)*(unsigned __int16*)(v12 + v11 + 2) < *(_DWORD*)(*a1 + 56))
			{
				v15 = *(_QWORD*)(*a1 + 64) + 32i64 * *(unsigned __int16*)(v12 + v11 + 2);
				if (a7)
					v16 = *(_QWORD*)(a7 + 8i64 * (v10 + 1));
				else
					v16 = *(_QWORD*)(v15 + 24);
				if ((*(int(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, _DWORD, __int64*))(*(_QWORD*)qword_140C65670
					+ 136i64))(
						qword_140C65670,
						v16,
						3i64,
						*(unsigned int*)(v15 + 4),
						0,
						0,
						&a1[v9 + 9]) < 0)
				{
					sub_1400035B0();
					(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)qword_140C65670 + 128i64))(
						qword_140C65670,
						*(_QWORD*)(qword_140C657F0 + 1296),
						&a1[v9 + 9]);
				}
			}
			++v9;
			v10 += 2;
			v11 += 296i64;
		} while (v9 < v7);
	}
	v17 = (_DWORD*)a1 + 5;
	*(__int64*)((char*)a1 + 20) = 0i64;
	*(__int64*)((char*)a1 + 28) = 0i64;
	if (v7)
	{
		v18 = 0i64;
		v19 = v7;
		do
		{
			v20 = 0;
			v21 = (_DWORD*)(v18 + *(_QWORD*)(a1[1] + 32) + 4i64);
			while (!*v21)
			{
				++v20;
				++v21;
				if (v20 >= 5)
					goto LABEL_25;
			}
			*v17 = 1;
		LABEL_25:
			++v17;
			v18 += 296i64;
			--v19;
		} while (v19);
	}
	sub_1402D7D40(a1, a5);
	sub_1402D7E30((__int64)a1, a6);
	return a1;
}
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C657F0: using guessed type __int64 qword_140C657F0;

