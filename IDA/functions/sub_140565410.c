//----- (0000000140565410) ----------------------------------------------------
void __fastcall sub_140565410(__int64 a1, __int64 a2)
{
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	_QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
	char v7[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v8; // [rsp+50h] [rbp+8h]

	if (a2)
	{
		v2 = *(_DWORD*)(a2 + 16);
		v3 = *(_QWORD*)(qword_140C65B70 + 1888);
		v4 = v3;
		v5 = *(_QWORD*)(v3 + 8);
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < v2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v4 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		}
		if (v4 == v3 || (v8 = v4, v2 < *(_DWORD*)(v4 + 32)))
			v8 = *(_QWORD*)(qword_140C65B70 + 1888);
		if (v8 == v3)
		{
			LODWORD(v6[0]) = *(_DWORD*)(a2 + 16);
			v6[1] = a2;
			sub_140055F80(qword_140C65B70 + 1880, (__int64)v7, v6);
		}
	}
}
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140565410: using guessed type char var_18[24];

