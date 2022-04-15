//----- (00000001403ADC30) ----------------------------------------------------
__int64 __fastcall sub_1403ADC30(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
	unsigned __int64 v9; // r8
	unsigned int v10; // edx
	unsigned __int64 v11; // rcx
	_QWORD* v12; // rax

	if (!a4)
		return 15i64;
	if (!(*(unsigned int(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)a4 + 104i64))(a4, a5, 0i64))
		return 17i64;
	v9 = *(_QWORD*)(a1 + 32);
	v10 = 0;
	v11 = 0i64;
	if (!v9)
		return 0i64;
	v12 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64);
	do
	{
		if (*((_DWORD*)v12 - 3) == a2)
		{
			if (*v12 == a3)
				return 13i64;
			++v10;
		}
		++v11;
		v12 += 10;
	} while (v11 < v9);
	if (v10 < 8)
		return 0i64;
	return 21i64;
}

