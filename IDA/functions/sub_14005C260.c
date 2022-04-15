#include "../winhttp.h"

//----- (000000014005C260) ----------------------------------------------------
_QWORD* __fastcall sub_14005C260(__int64 a1, __int64 a2, int* a3)
{
	__int64 v6; // rdi
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // r11
	__int64 v10; // rax
	_QWORD* v11; // r11
	__int64 v12; // rcx
	bool v13; // zf
	char v14; // al
	__int64 v15; // rcx

	v6 = sub_14005B880(a2, a3);
	if (*(_DWORD*)(v6 + 8) || (_UNKNOWN*)v6 == &unk_140A12148)
	{
		v7 = *(_QWORD*)(a2 + 32);
		if (*(_QWORD*)(a2 + 40) <= v7)
		{
		LABEL_6:
			*(_QWORD*)(a2 + 40) -= 40i64;
		}
		else
		{
			while (1)
			{
				*(_QWORD*)(a2 + 40) -= 40i64;
				v8 = *(_QWORD*)(a2 + 40);
				if (!*(_DWORD*)(v8 + 24))
					break;
				if (v8 <= v7)
					goto LABEL_6;
			}
			if (v8)
			{
				v10 = sub_14005B880(a2, (int*)(v6 + 16));
				if (v10 == v6)
				{
					v11[4] = *(_QWORD*)(v6 + 32);
					*(_QWORD*)(v6 + 32) = v11;
					v6 = (__int64)v11;
				}
				else
				{
					v12 = v10 + 32;
					if (*(_QWORD*)(v10 + 32) != v6)
					{
						do
						{
							v10 = *(_QWORD*)v12;
							v13 = *(_QWORD*)(*(_QWORD*)v12 + 32i64) == v6;
							v12 = *(_QWORD*)v12 + 32i64;
						} while (!v13);
					}
					*(_QWORD*)(v10 + 32) = v11;
					*v11 = *(_QWORD*)v6;
					v11[1] = *(_QWORD*)(v6 + 8);
					v11[2] = *(_QWORD*)(v6 + 16);
					v11[3] = *(_QWORD*)(v6 + 24);
					v11[4] = *(_QWORD*)(v6 + 32);
					*(_QWORD*)(v6 + 32) = 0i64;
					*(_DWORD*)(v6 + 8) = 0;
				}
				goto LABEL_14;
			}
		}
		sub_14005BF40(a1, a2, (__int64)a3);
		return sub_14005C560(a1, a2, a3);
	}
LABEL_14:
	*(_QWORD*)(v6 + 16) = *(_QWORD*)a3;
	*(_DWORD*)(v6 + 24) = a3[2];
	if (a3[2] >= 4 && (*(_BYTE*)(*(_QWORD*)a3 + 9i64) & 3) != 0)
	{
		v14 = *(_BYTE*)(a2 + 9);
		if ((v14 & 4) != 0)
		{
			v15 = *(_QWORD*)(a1 + 32);
			*(_BYTE*)(a2 + 9) = v14 & 0xFB;
			*(_QWORD*)(a2 + 48) = *(_QWORD*)(v15 + 64);
			*(_QWORD*)(v15 + 64) = a2;
		}
	}
	return (_QWORD*)v6;
}
// 14005C32D: variable 'v11' is possibly undefined

