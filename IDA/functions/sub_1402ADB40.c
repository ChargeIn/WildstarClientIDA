#include "../winhttp.h"

//----- (00000001402ADB40) ----------------------------------------------------
void __fastcall sub_1402ADB40(__int64* a1)
{
	__int64* v2; // rdi
	__int64 v3; // rsi
	int v4; // eax
	int v5; // eax
	int v6; // eax
	_DWORD* v7; // rbx
	__int64 v8; // rcx

	v2 = a1 + 2;
	v3 = 4i64;
	do
	{
		v4 = *((_DWORD*)v2 - 2);
		if (v4)
		{
			v5 = v4 - 1;
			if (!v5)
				goto LABEL_6;
			v6 = v5 - 1;
			if (v6)
			{
				if (v6 != 1)
					goto LABEL_13;
			LABEL_6:
				if (*v2)
					*(_DWORD*)(*v2 + 184) = 1;
				goto LABEL_13;
			}
			if (*v2)
				*(_DWORD*)(*v2 + 344) = 1;
		}
		else
		{
			v7 = (_DWORD*)qword_140C636A0;
			*(_DWORD*)qword_140C636A0 += 0x10000;
			v8 = *v2;
			if (!*v2)
				v8 = *(_QWORD*)(*a1 + 8584);
			sub_14029E260(v8);
			*v7 -= 0x10000;
		}
	LABEL_13:
		v2 += 3;
		--v3;
	} while (v3);
}
// 140C636A0: using guessed type __int64 qword_140C636A0;

