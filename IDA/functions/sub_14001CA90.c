//----- (000000014001CA90) ----------------------------------------------------
__int64 __fastcall sub_14001CA90(__int64 a1, unsigned int a2)
{
	__int64 v4; // rax
	__int64 v5; // rbx
	unsigned __int64 v7; // rcx
	unsigned int v8; // edi
	__m128i* v9; // rdx
	int v10; // r15d
	int v11; // ecx
	int v12; // eax
	unsigned int v13; // esi
	_DWORD* v14; // rax
	__int64 v15; // rcx

	v4 = sub_1401ED8A0(a2);
	v5 = v4;
	if (!v4)
		return sub_14001C8C0((_DWORD*)a1, (__m128i*) & unk_1409D08F4, 0);
	v7 = *(_QWORD*)(v4 + 8);
	v8 = 0;
	if (v7)
	{
		if (v7 <= qword_140C3FE70)
			v9 = (__m128i*)(v7 + qword_140C3FE68);
		else
			v9 = 0i64;
	}
	else
	{
		v9 = 0i64;
	}
	v10 = sub_14001C8C0((_DWORD*)a1, v9, *(_DWORD*)(v4 + 16));
	if (v10 >= 0)
	{
		if ((*(_BYTE*)(v5 + 16) & 0x40) != 0)
			goto LABEL_13;
		v11 = dword_140C45F00;
		if (*(_DWORD*)qword_140C63750 < dword_140C45F00)
			v11 = *(_DWORD*)qword_140C63750;
		if (*((_BYTE*)&dword_140C45F10 + v11))
		{
		LABEL_13:
			v12 = sub_1401EDC90();
			if (v12)
			{
				v13 = v12 - 1;
				if (v12 != 1)
				{
					do
					{
						if (*(_DWORD*)(sub_1401EDD40((v13 + v8) >> 1) + 4) >= a2)
							v13 = (v13 + v8) >> 1;
						else
							v8 = ((v13 + v8) >> 1) + 1;
					} while (v13 > v8);
				}
				v14 = (_DWORD*)sub_1401EDD40(v8);
				if (v14[1] == a2)
				{
					*(_DWORD*)(a1 + 592) = a2;
					*(_DWORD*)(a1 + 596) = v8;
					v15 = (unsigned int)v14[2];
					*(_DWORD*)(a1 + 600) = v15;
					*(_QWORD*)(a1 + 608) = sub_14034BDD0(v15, v14[3]);
				}
			}
		}
	}
	return (unsigned int)v10;
}
// 140C3FE68: using guessed type __int64 qword_140C3FE68;
// 140C3FE70: using guessed type __int64 qword_140C3FE70;
// 140C45F00: using guessed type int dword_140C45F00;
// 140C45F10: using guessed type int dword_140C45F10;
// 140C63750: using guessed type __int64 qword_140C63750;

