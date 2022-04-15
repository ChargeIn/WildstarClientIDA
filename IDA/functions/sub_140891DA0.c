//----- (0000000140891DA0) ----------------------------------------------------
__int64 __fastcall sub_140891DA0(__int64 a1, int a2, _DWORD* a3, char a4)
{
	_DWORD* v4; // rax
	unsigned int v5; // r11d
	_DWORD* v6; // rdx

	v4 = *(_DWORD**)(a1 + 224);
	v5 = a2 + v4[1];
	if (a4)
		v4 += 4;
	v6 = *(_DWORD**)(a1 + 232);
	if (v4 == v6)
	{
	LABEL_8:
		*a3 = *(v6 - 4);
		return (unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64));
	}
	else
	{
		while (v4[1] < v5 || *a3 && *v4 != *a3)
		{
			v4 += 4;
			if (v4 == v6)
				goto LABEL_8;
		}
		*a3 = *v4;
		return (unsigned int)(v4[1] - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64));
	}
}

