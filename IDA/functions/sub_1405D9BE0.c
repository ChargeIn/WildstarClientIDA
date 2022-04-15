//----- (00000001405D9BE0) ----------------------------------------------------
__int64 __fastcall sub_1405D9BE0(__int64 a1)
{
	__int64 v2; // rax
	int v3; // edx
	__int64 result; // rax
	__int64 v5; // rdi
	__int64 v6; // rcx
	_QWORD* v7; // rax

	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
	v2 = *(_QWORD*)(a1 + 176);
	v3 = *(_DWORD*)(v2 + 64);
	*(_DWORD*)(a1 + 336) = v3;
	result = *(unsigned int*)(v2 + 68);
	*(_DWORD*)(a1 + 340) = result;
	if (v3 < 31)
	{
		result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		v5 = result;
		if (result)
		{
			v6 = *(_QWORD*)(result + 3264);
			if (v6)
			{
				v7 = (_QWORD*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v6 + 64i64))(
					v6,
					(unsigned int)dword_140C39050[*(int*)(a1 + 336)]);
				*(_QWORD*)(a1 + 352) = *v7;
				*(_QWORD*)(a1 + 360) = v7[1];
				result = sub_140466D20(v5, dword_140C39050[*(int*)(a1 + 336)]);
				*(_DWORD*)(a1 + 344) = 1;
			}
		}
	}
	return result;
}
// 140C39050: using guessed type _DWORD dword_140C39050[31];
// 140C65898: using guessed type __int64 qword_140C65898;

