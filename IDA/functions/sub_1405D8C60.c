//----- (00000001405D8C60) ----------------------------------------------------
__int64 __fastcall sub_1405D8C60(__int64 a1)
{
	__int64 result; // rax
	__int64 v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rax
	float v7; // xmm1_4

	result = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 92));
	v3 = result;
	if (result)
	{
		(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
		if (*(int*)(a1 + 340) <= 0)
		{
			v4 = *(_QWORD*)(a1 + 176);
			if (v4 && (*(_BYTE*)(v4 + 60) & 2) != 0)
			{
				v5 = sub_140200220(0xBFu);
				if (v5)
					*(_DWORD*)(a1 + 340) = *(_DWORD*)(v5 + 4);
				else
					*(_DWORD*)(a1 + 340) = 1000;
			}
			else if (*(_DWORD*)(a1 + 188) == *(_DWORD*)(a1 + 184))
			{
				(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 80) + 8i64))(*(_QWORD*)(a1 + 80));
			}
			else
			{
				v6 = sub_140200220(0xBDu);
				if (v6)
					v7 = *(float*)(v6 + 24);
				else
					v7 = 0.1;
				*(_DWORD*)(a1 + 340) = (int)(float)((float)(*(_DWORD*)(a1 + 188) - *(_DWORD*)(a1 + 184)) * v7);
			}
		}
		return sub_1405B9160(v3, *(float*)(a1 + 336), *(_DWORD*)(a1 + 340));
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

