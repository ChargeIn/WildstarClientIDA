//----- (0000000140869670) ----------------------------------------------------
void __fastcall sub_140869670(__int64 a1, _DWORD* a2, __int64 a3, _DWORD* a4, int a5)
{
	_QWORD* i; // rbx
	__int64 v10; // rax

	for (i = *(_QWORD**)(a1 + 168); i != *(_QWORD**)(a1 + 176); ++i)
	{
		v10 = (unsigned int)*a4;
		if ((unsigned int)v10 < *a2)
		{
			*(_DWORD*)(a3 + 12 * v10) = *(_DWORD*)(*i + 24i64);
			*(_DWORD*)(a3 + 12i64 * (unsigned int)*a4 + 4) = *(_DWORD*)(*(_QWORD*)(*i + 64i64) + 24i64);
			*(_DWORD*)(a3 + 12i64 * (unsigned int)*a4 + 8) = a5;
		}
		if (++ * a4 == *a2)
			break;
		(*(void(__fastcall**)(_QWORD, _DWORD*, __int64, _DWORD*, int))(*(_QWORD*)*i + 104i64))(*i, a2, a3, a4, a5 + 1);
		if (*a4 == *a2)
			break;
	}
}

