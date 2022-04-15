//----- (00000001404A0150) ----------------------------------------------------
__int64 __fastcall sub_1404A0150(__int64 a1, int a2, int a3, unsigned int a4)
{
	__int64 v7; // rax
	unsigned int v8; // ecx
	int v9; // ebx

	if (!qword_140C65960)
		return 0i64;
	v7 = sub_1403D2D60(a1, a4);
	if (!v7)
		return a2 == 2;
	v8 = 0;
	v9 = a2 - 1;
	if (v9)
	{
		if (v9 == 1)
		{
			LOBYTE(v8) = a3 != *(_DWORD*)(v7 + 16);
			return v8;
		}
	}
	else
	{
		return a3 == *(_DWORD*)(v7 + 16);
	}
	return v8;
}
// 140C65960: using guessed type __int64 qword_140C65960;

