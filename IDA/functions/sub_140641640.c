//----- (0000000140641640) ----------------------------------------------------
__int64 __fastcall sub_140641640(__int64 a1, int* a2)
{
	__int64 v3; // rax
	__int64 v4; // r8
	int v5; // edx
	__int64 v6; // r9
	__int64 v7; // rax

	v3 = sub_1403D90D0(a1, *a2);
	v4 = v3;
	if (v3)
	{
		v5 = a2[1];
		if (*(_DWORD*)(v3 + 484) != v5)
		{
			v6 = qword_140C65898;
			*(_DWORD*)(v3 + 484) = v5;
			*(_DWORD*)(v3 + 6312) = 1;
			v7 = *(_QWORD*)(v6 + 120);
			if (v7 && *(_DWORD*)(v4 + 8) == *(_DWORD*)(v7 + 8))
				*(_DWORD*)(v6 + 28568) = 1;
			if (v5 && HIDWORD(qword_140C7DC60) == *(_DWORD*)(v4 + 8) && (_DWORD)qword_140C7DC60)
				sub_1405548F0((__int64)&qword_140C7DC60);
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C7DC60: using guessed type __int64 qword_140C7DC60;

