#include "../winhttp.h"

//----- (0000000140867B10) ----------------------------------------------------
__int64 __fastcall sub_140867B10(__int64 a1, __int64 a2, unsigned int a3, int a4, char a5, unsigned __int16* a6)
{
	char v6; // bp
	unsigned int v8; // esi
	__int64 v9; // rcx
	__int64 v10; // rax
	unsigned int v11; // edi
	_BYTE* v12; // rcx

	v6 = a4;
	v8 = 2;
	if (!*(_DWORD*)a1)
	{
		*(_QWORD*)(a1 + 8) = a2;
		*(_WORD*)(a1 + 34) = a3;
		*(_BYTE*)(a1 + 45) = a5;
		*(_DWORD*)(a1 + 40) = a4;
		v9 = *((_QWORD*)a6 + 1);
		if (v9)
		{
			*(_QWORD*)(a1 + 16) = v9;
			v10 = *a6;
			*(_WORD*)(a1 + 32) = v10;
			*(_QWORD*)(a1 + 24) = a2 + 24 * v10;
			return 1;
		}
		*(_QWORD*)(a1 + 24) = a2;
		v11 = 0;
		*(_WORD*)(a1 + 32) = 0;
		v12 = (_BYTE*)sub_1408819F0(dword_140C10F20, a3);
		*(_QWORD*)(a1 + 16) = v12;
		if (v12)
		{
			if (*(_WORD*)(a1 + 34))
			{
				do
				{
					*v12 = 0;
					++v11;
					++v12;
				} while (v11 < *(unsigned __int16*)(a1 + 34));
			}
			if ((v6 & 1) != 0)
				sub_1408679A0(a1);
			return 1;
		}
	}
	return v8;
}
// 140C10F20: using guessed type int dword_140C10F20;

