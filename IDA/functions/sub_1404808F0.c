//----- (00000001404808F0) ----------------------------------------------------
__int64 __fastcall sub_1404808F0(__int64 a1, unsigned int a2, int a3)
{
	__int64 v3; // rsi
	__int64 v5; // r9
	__int64 v6; // rcx
	__int64 i; // rax
	_QWORD* v8; // rbx
	__int64 v9; // rax
	_QWORD* v10; // rdi
	__int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v17; // [rsp+30h] [rbp+8h]

	v3 = qword_140C65960;
	v5 = *(_QWORD*)(qword_140C65960 + 16);
	v6 = v5;
	for (i = *(_QWORD*)(v5 + 8); i; i = *(_QWORD*)(i + 16))
		v6 = i;
	if (v6 == v5 || (v17 = v6, *(_DWORD*)(v6 + 32)))
		v17 = *(_QWORD*)(qword_140C65960 + 16);
	if (v17 == v5 || v17 == -40)
		return 0i64;
	v8 = *(_QWORD**)(v17 + 208);
	v9 = v8[1];
	v10 = v8;
	v11 = v9;
	if (v9)
	{
		do
		{
			if (a2 >= *(_DWORD*)(v11 + 32))
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = (_QWORD*)v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		} while (v11);
		do
		{
			if (*(_DWORD*)(v9 + 32) < a2)
			{
				v9 = *(_QWORD*)(v9 + 24);
			}
			else
			{
				v8 = (_QWORD*)v9;
				v9 = *(_QWORD*)(v9 + 16);
			}
		} while (v9);
	}
	if (v8 == v10)
		return 0i64;
	while (1)
	{
		v12 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v3 + 32i64))(v3, v8[5]);
		if (!v12 || v12 == a3)
			break;
		v13 = v8[3];
		if (v13)
		{
			v8 = (_QWORD*)v8[3];
			for (j = *(_QWORD**)(v13 + 16); j; j = (_QWORD*)j[2])
				v8 = j;
		}
		else
		{
			for (k = v8[1]; v8 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
				v8 = (_QWORD*)k;
			if (v8[3] != k)
				v8 = (_QWORD*)k;
		}
		if (v8 == v10)
			return 0i64;
	}
	return v8[5];
}
// 14048099A: conditional instruction was optimized away because rax.8!=0
// 140C65960: using guessed type __int64 qword_140C65960;

