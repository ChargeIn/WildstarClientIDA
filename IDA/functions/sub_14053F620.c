#include "../winhttp.h"

//----- (000000014053F620) ----------------------------------------------------
void __fastcall sub_14053F620(__int64 a1, _DWORD* a2)
{
	__int64 v2; // rbx
	__int64 v4; // rcx
	__int64 v5; // rcx
	int v6; // edx
	unsigned int v7; // r8d
	__int64 v8; // rcx
	__int64 v9; // r8
	unsigned int v10; // ecx
	unsigned int v11; // eax

	v2 = *(_QWORD*)(a1 + 72);
	if (v2)
	{
		while (*(_DWORD*)(v2 + 64) != a2[3])
		{
			v2 = *(_QWORD*)(v2 + 40);
			if (!v2)
				return;
		}
		v4 = *(_QWORD*)v2;
		if (*(_QWORD*)v2)
		{
			while (*(_DWORD*)(v4 + 100) != a2[1])
			{
				v4 = *(_QWORD*)(v4 + 32);
				if (!v4)
					return;
			}
			*(_DWORD*)(v4 + 188) = a2[2];
			sub_1405D6B80(v4);
			v5 = *(_QWORD*)(v2 + 96);
			v6 = dword_140C636A8;
			v7 = a2[2];
			if (*(_DWORD*)(v2 + 72) + *(_DWORD*)(v5 + 32) - dword_140C636A8 < v7)
				*(_DWORD*)(v2 + 72) = v7;
			if (v5)
			{
				*(_DWORD*)(v2 + 48) = v6;
				*(_DWORD*)(v5 + 32) = v6;
				*(_DWORD*)(*(_QWORD*)(v2 + 96) + 36i64) = *(_DWORD*)(v2 + 72);
				v8 = *(_QWORD*)(v2 + 56);
				v9 = *(_QWORD*)(*(_QWORD*)(v8 + 312) + 112i64);
				if (*(_DWORD*)(v9 + 24) == 10)
				{
					v10 = *(_DWORD*)(v9 + 32) + *(_DWORD*)(v8 + 404) - v6;
					if (v10)
					{
						v11 = *(_DWORD*)(v2 + 72);
						if (v11 != -1 && v10 < v11)
							v10 = *(_DWORD*)(v2 + 72);
						*(_DWORD*)(*(_QWORD*)(v2 + 96) + 36i64) = v10;
					}
				}
			}
		}
	}
}
// 140C636A8: using guessed type int dword_140C636A8;

