//----- (00000001408554C0) ----------------------------------------------------
char __fastcall sub_1408554C0(_WORD* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rax
	__int64 v6; // r8
	__int64* v7; // rbx
	__int64* v8; // rdi
	unsigned int v9; // ecx
	__int64 v10; // rcx
	bool v11; // dl

	LOWORD(v4) = a1[12];
	if ((_WORD)v4)
	{
		v6 = (unsigned __int16)v4;
		v7 = *(__int64**)a1;
		v8 = (__int64*)*((_QWORD*)a1 + 1);
		v4 = ((__int64)v8 - *(_QWORD*)a1) >> 3;
		if ((unsigned int)v4 > (unsigned int)v6)
		{
			v9 = 0;
			if (v7 != v8)
			{
				while (v9 < (unsigned int)v6)
				{
					LOBYTE(v4) = *(_BYTE*)(*v7 + 383);
					if (((v4 & 0x40) == 0 || (v4 & 0x20) != 0) && (*(_BYTE*)(*v7 + 382) & 1) == 0 && (v4 & 0x10) == 0)
						++v9;
					if (++v7 == v8)
						return v4;
				}
				for (; v7 != v8; ++v7)
				{
					v10 = *v7;
					if ((*(_BYTE*)(*v7 + 382) & 1) == 0)
					{
						v11 = a1 == (_WORD*)&unk_140C10F30;
						if (*((_BYTE*)a1 + 27))
							LOBYTE(v4) = sub_14085E370(v10, v11, v6, a4);
						else
							LOBYTE(v4) = sub_14085F2E0(v10, v11, v6, a4);
					}
				}
			}
		}
	}
	return v4;
}
// 14085558A: variable 'v6' is possibly undefined
// 14085558A: variable 'a4' is possibly undefined

