#include "../winhttp.h"

//----- (00000001400CB7D0) ----------------------------------------------------
__int64 __fastcall sub_1400CB7D0(__int64 a1, __int64 a2)
{
	__int64 v2; // r11
	__int64 v4; // r10
	__int16* v5; // rcx
	__int16* v6; // r9
	__int64 v7; // r8
	int v8; // eax
	int v9; // ecx

	v2 = *(_QWORD*)(a1 + 16);
	if (v2)
	{
		if (*(_QWORD*)(v2 + 16))
		{
			while (1)
			{
				v4 = *(_QWORD*)(v2 + 16);
				v5 = &word_140B7B704;
				v6 = (__int16*)&unk_1409D2D5C;
				if (*(_QWORD*)(v4 + 536))
					v5 = *(__int16**)(v4 + 536);
				if (v5)
					v6 = v5;
				v7 = 0i64;
				if (*v6 == 79)
					break;
			LABEL_11:
				v2 = *(_QWORD*)(v2 + 16);
				if (!*(_QWORD*)(v4 + 16))
					goto LABEL_12;
			}
			LOWORD(v8) = *v6;
			while ((_WORD)v8)
			{
				v8 = (unsigned __int16)v6[v7 + 1];
				v9 = aOverheadwindow[++v7];
				if (v8 != v9)
					goto LABEL_11;
			}
		}
	LABEL_12:
		sub_1400CB3D0(v2, (_DWORD*)a2);
		return a2;
	}
	else
	{
		*(_QWORD*)a2 = 0i64;
		*(_QWORD*)(a2 + 8) = 0i64;
		return a2;
	}
}
// 140A15458: using guessed type wchar_t aOverheadwindow[15];
// 140B7B704: using guessed type __int16 word_140B7B704;

