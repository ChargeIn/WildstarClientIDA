//----- (00000001405DA180) ----------------------------------------------------
__int64 __fastcall sub_1405DA180(__int64 a1, __int64 a2, __int64* a3)
{
	__int64 result; // rax
	unsigned int v5; // ebx
	__int64 v6; // rsi
	int v7; // eax
	__int64 v8; // rdx
	__int64 v9; // rax
	int v10; // ecx
	__int64 v11; // rax

	result = sub_1405D6880(a1, a2, a3);
	v5 = result;
	if ((int)result >= 0)
	{
		v6 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
		if (v6)
		{
			if ((v7 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80)),
				v8 = qword_140C65898,
				*(_DWORD*)(v6 + 204) = v7,
				v9 = *(_QWORD*)(v8 + 120),
				v10 = *(_DWORD*)(a1 + 92),
				v9)
				&& *(_DWORD*)(v9 + 8) == v10
				|| (v11 = *(_QWORD*)(v8 + 25744)) != 0 && *(_DWORD*)(v11 + 8) == v10)
			{
				if (*(_DWORD*)(v6 + 3408))
					*(_DWORD*)(qword_140C65898 + 26544) = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
			}
		}
		return v5;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

