//----- (0000000140453EE0) ----------------------------------------------------
__int64 __fastcall sub_140453EE0(_DWORD* a1)
{
	__int64 v2; // rax
	unsigned int v3; // edx
	__int64 v4; // rcx
	__int64 v6; // rax
	int v8; // ecx

	v2 = sub_1403D90D0(qword_140C65898, a1[21]);
	v3 = a1[20];
	if (v3)
	{
		if (v2)
		{
			v4 = 0i64;
			if (*(_QWORD*)(qword_140C65898 + 120) == v2 || *(_QWORD*)(qword_140C65898 + 25744) == v2)
				v4 = qword_140C65898;
			if (v4)
			{
				v6 = sub_1405A5B90(v4, v3);
				if (v6)
					goto LABEL_11;
			}
		}
		v6 = sub_1407A0FD0(qword_140C65B70, v3);
		if (v6)
		{
		LABEL_11:
			if ((*(_BYTE*)(*(_QWORD*)(v6 + 112) + 268i64) & 0x10) != 0)
				return 0i64;
		}
	}
	v8 = a1[9];
	if (v8 == -1 || dword_140C636A8 - a1[8] - v8 > 0)
		return 0i64;
	else
		return (unsigned int)(v8 - (dword_140C636A8 - a1[8]));
}
// 140453F44: variable 'v3' is possibly undefined
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

