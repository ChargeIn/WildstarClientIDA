//----- (00000001409080E0) ----------------------------------------------------
__int64 __fastcall sub_1409080E0(__int64 a1, _WORD** a2, __int16 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
	unsigned int v6; // edi
	unsigned int v7; // esi
	unsigned int i; // ebx
	__int64 v11; // rcx
	unsigned __int64 v12; // rdx
	_WORD* v13; // rbx
	_WORD* v14; // rbx
	char v15; // r10
	unsigned __int64 v16; // rdx
	unsigned int v17; // edi
	__int64 v18; // r8
	unsigned __int64 v19; // rcx

	v6 = a6;
	v7 = 0;
	if ((a3 & 1) != 0)
	{
		for (i = a5; i <= a6; *(_BYTE*)((v12 >> 3) + a1) |= 1 << (v12 & 7))
		{
			if (i >= 0x100)
				break;
			v11 = i++;
			++v7;
			v12 = *(unsigned __int8*)(v11 + *(_QWORD*)(a4 + 8));
		}
	}
	if ((a3 & 0x800) == 0 && a6 > 0xFFFF)
	{
		v6 = 0xFFFF;
	LABEL_8:
		v13 = *a2;
		if ((a3 & 0x800) != 0)
		{
			if (a5 >= v6)
			{
				if (a5 == v6)
				{
					*v13 = 1;
					v13 += (unsigned int)sub_140919B80(a5, v13 + 1) + 1;
				}
			}
			else
			{
				*v13 = 2;
				v14 = &v13[(unsigned int)sub_140919B80(a5, v13 + 1) + 1];
				v13 = &v14[(unsigned int)sub_140919B80(v6, v14)];
			}
		}
		else if (a5 >= v6)
		{
			if (a5 == v6)
			{
				*v13 = 1;
				v13[1] = a5;
				v13 += 2;
			}
		}
		else
		{
			v13 += 3;
			*(v13 - 3) = 2;
			*(v13 - 2) = a5;
			*(v13 - 1) = v6;
		}
		*a2 = v13;
		return v7;
	}
	if (a6 >= 0x100)
		goto LABEL_8;
	v15 = __ROL1__(1, a5);
	if (a5 <= a6)
	{
		v16 = a5;
		v17 = a6 - a5 + 1;
		v18 = v17;
		v7 += v17;
		do
		{
			v19 = v16++;
			*(_BYTE*)((v19 >> 3) + a1) |= v15;
			v15 = __ROL1__(v15, 1);
			--v18;
		} while (v18);
	}
	return v7;
}

