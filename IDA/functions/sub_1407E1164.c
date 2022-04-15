//----- (00000001407E1164) ----------------------------------------------------
__int64 __fastcall sub_1407E1164(_DWORD* a1)
{
	unsigned int v1; // esi
	signed int v3; // edi
	int v4; // eax
	int v5; // eax
	__int64 v6; // rcx
	__int64 result; // rax

	v1 = 0;
	if ((a1[6] & 3) == 2 && (a1[6] & 0x108) != 0)
	{
		v3 = *a1 - a1[4];
		if (v3 > 0)
		{
			v4 = sub_1407EA35C((__int64)a1);
			if ((unsigned int)sub_1407EEF4C(v4, *((_BYTE**)a1 + 2), v3) == v3)
			{
				v5 = a1[6];
				if ((v5 & 0x80u) != 0)
					a1[6] = v5 & 0xFFFFFFFD;
			}
			else
			{
				a1[6] |= 0x20u;
				v1 = -1;
			}
		}
	}
	v6 = *((_QWORD*)a1 + 2);
	a1[2] = 0;
	result = v1;
	*(_QWORD*)a1 = v6;
	return result;
}

