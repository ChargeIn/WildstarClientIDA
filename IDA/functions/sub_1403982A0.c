//----- (00000001403982A0) ----------------------------------------------------
__int64 __fastcall sub_1403982A0(__int64 a1, int a2)
{
	__int64 v3; // rcx
	int v4; // ebx
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned int v8; // ecx
	__int64 result; // rax

	v3 = *(_QWORD*)(a1 + 120);
	v4 = 0;
	if (v3 && sub_14047BE40(v3))
	{
		v4 = 1;
	}
	else if (sub_14039E1A0(a1))
	{
		v4 = 2;
	}
	else
	{
		v6 = *(_QWORD*)(a1 + 120);
		if (v6)
		{
			v7 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(v6 + 192));
			if (v7)
			{
				if (*(_DWORD*)(v7 + 128) == 7)
					v4 = 3;
			}
		}
	}
	v8 = 1227;
	if (a2)
		v8 = 415;
	result = sub_140200220(v8);
	if (result)
		return *(unsigned int*)(result + 4i64 * v4 + 4);
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;

