//----- (000000014005C6B0) ----------------------------------------------------
__int64 __fastcall sub_14005C6B0(__int64 a1, unsigned int a2)
{
	unsigned int v2; // edi
	unsigned int v4; // ebx
	signed int v5; // r9d
	_QWORD* v6; // rcx
	int v7; // r10d
	unsigned int i; // r9d
	_QWORD* v9; // rax
	signed int v11; // r10d
	_QWORD* v12; // rcx
	double v13; // [rsp+8h] [rbp+8h]
	double v14; // [rsp+8h] [rbp+8h]
	double v15; // [rsp+8h] [rbp+8h]

	v2 = *(_DWORD*)(a1 + 56);
	v4 = a2;
	v5 = a2 + 1;
	while (1)
	{
		if (v5 - 1 >= v2)
		{
			if ((double)v5 == 0.0)
			{
				v6 = *(_QWORD**)(a1 + 32);
			}
			else
			{
				v13 = (double)v5;
				v6 = (_QWORD*)(*(_QWORD*)(a1 + 32)
					+ 40 * ((unsigned int)(LODWORD(v13) + HIDWORD(v13)) % (((1i64 << *(_BYTE*)(a1 + 11)) - 1) | 1)));
			}
			while (*((_DWORD*)v6 + 6) != 3 || (double)v5 != *((double*)v6 + 2))
			{
				v6 = (_QWORD*)v6[4];
				if (!v6)
				{
					v6 = &unk_140A12138;
					break;
				}
			}
		}
		else
		{
			v6 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64 * (v5 - 1));
		}
		if (!*((_DWORD*)v6 + 2))
			break;
		v4 = v5;
		v5 *= 2;
		if ((unsigned int)v5 > 0x7FFFFFFD)
		{
			v7 = 1;
			for (i = 0; ; ++i)
			{
				if (i >= v2)
				{
					if ((double)v7 == 0.0)
					{
						v9 = *(_QWORD**)(a1 + 32);
					}
					else
					{
						v14 = (double)v7;
						v9 = (_QWORD*)(*(_QWORD*)(a1 + 32)
							+ 40
							* ((unsigned int)(LODWORD(v14) + HIDWORD(v14)) % (((1i64 << *(_BYTE*)(a1 + 11)) - 1) | 1)));
					}
					while (*((_DWORD*)v9 + 6) != 3 || (double)v7 != *((double*)v9 + 2))
					{
						v9 = (_QWORD*)v9[4];
						if (!v9)
						{
							v9 = &unk_140A12138;
							break;
						}
					}
				}
				else
				{
					v9 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64 * (int)i);
				}
				if (!*((_DWORD*)v9 + 2))
					break;
				++v7;
			}
			return (unsigned int)(v7 - 1);
		}
	}
	while (v5 - v4 > 1)
	{
		v11 = (v4 + v5) >> 1;
		if (v11 - 1 >= v2)
		{
			if ((double)v11 == 0.0)
			{
				v12 = *(_QWORD**)(a1 + 32);
			}
			else
			{
				v15 = (double)v11;
				v12 = (_QWORD*)(*(_QWORD*)(a1 + 32)
					+ 40 * ((unsigned int)(LODWORD(v15) + HIDWORD(v15)) % (((1i64 << *(_BYTE*)(a1 + 11)) - 1) | 1)));
			}
			while (*((_DWORD*)v12 + 6) != 3 || (double)v11 != *((double*)v12 + 2))
			{
				v12 = (_QWORD*)v12[4];
				if (!v12)
				{
					v12 = &unk_140A12138;
					break;
				}
			}
		}
		else
		{
			v12 = (_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64 * (v11 - 1));
		}
		if (*((_DWORD*)v12 + 2))
			v4 = (v4 + v5) >> 1;
		else
			v5 = (v4 + v5) >> 1;
	}
	return v4;
}

