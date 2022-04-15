#include "../winhttp.h"

//----- (0000000140631F70) ----------------------------------------------------
_QWORD* __fastcall sub_140631F70(__int64 a1, _QWORD* a2, int* a3)
{
	__int64 v3; // rbx
	__int64 v6; // rax
	int v7; // edi
	int v8; // ecx
	_WORD* v9; // r10
	unsigned __int16* v10; // r11
	__int64 v11; // r9
	int v12; // r8d
	int v13; // edx
	int v14; // ecx

	v3 = *(_QWORD*)(a1 + 8);
	v6 = *(_QWORD*)(v3 + 8);
	if (v6)
	{
		v7 = *a3;
		while (1)
		{
			v8 = *(_DWORD*)(v6 + 32);
			if (v8 < v7)
				break;
			if (v7 >= v8)
			{
				v9 = *(_WORD**)(v6 + 40);
				v10 = (unsigned __int16*)*((_QWORD*)a3 + 1);
				v11 = 0i64;
				LOWORD(v12) = *v9;
				v13 = (unsigned __int16)*v9 - *v10;
				if (v13)
				{
				LABEL_8:
					if (v13 < 0)
						break;
				}
				else
				{
					while ((_WORD)v12)
					{
						v12 = (unsigned __int16)v9[v11 + 1];
						v14 = v10[++v11];
						v13 = v12 - v14;
						if (v12 != v14)
							goto LABEL_8;
					}
				}
			}
			v3 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		LABEL_11:
			if (!v6)
			{
				*a2 = v3;
				return a2;
			}
		}
		v6 = *(_QWORD*)(v6 + 24);
		goto LABEL_11;
	}
	*a2 = v3;
	return a2;
}

