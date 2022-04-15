#include "../winhttp.h"

//----- (0000000140891B60) ----------------------------------------------------
__int64 __fastcall sub_140891B60(__int64 a1, unsigned int a2, int a3, _DWORD* a4, char a5, unsigned int* a6)
{
	_DWORD* v8; // r9
	unsigned int v10; // edx
	unsigned int v11; // r10d
	__int64 v12; // rax
	unsigned int v13; // edx
	int v14; // r8d
	unsigned int v15; // r11d
	BOOL v16; // r10d
	int v18; // edx
	unsigned int* v19; // r8
	unsigned int v20; // r9d
	unsigned int i; // eax
	int v22; // edx
	unsigned int v23; // ecx

	v8 = *(_DWORD**)(a1 + 224);
	v10 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - v8[1];
	v11 = 2;
	if (a2 <= v10)
	{
		switch (a3)
		{
		case 0:
			*a4 = 0;
			*a6 = a2;
			return 1;
		case 1:
			v12 = sub_140890D60(a1);
			v13 = *(_DWORD*)(v12 + 12);
			v14 = *(_DWORD*)(v12 + 8);
			if (a5)
				++a2;
			v15 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
			*a6 = v13;
			if (v14)
			{
				if (v13 <= a2)
				{
					do
						v13 += v14;
					while (v13 <= a2);
					*a6 = v13;
				}
			}
			else
			{
				*a6 = a2 + 1;
			}
			v16 = *a6 > v15;
			*a4 = 0;
			return (unsigned int)(v16 + 1);
		case 2:
			v22 = *(_DWORD*)(sub_140890D60(a1) + 4);
			if (a5)
				++a2;
			v19 = a6;
			v20 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
			*a6 = 0;
			if (!v22)
				goto LABEL_18;
			for (i = 0; i <= a2; i += v22)
				;
			goto LABEL_19;
		case 3:
			v18 = *(_DWORD*)sub_140890D60(a1);
			if (a5)
				++a2;
			v19 = a6;
			v20 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 12i64) - *(_DWORD*)(*(_QWORD*)(a1 + 224) + 4i64);
			*a6 = 0;
			if (v18)
			{
				for (i = 0; i <= a2; i += v18)
					;
			}
			else
			{
			LABEL_18:
				i = a2 + 1;
			}
		LABEL_19:
			*v19 = i;
			*a4 = 0;
			return (unsigned int)(i > v20) + 1;
		case 4:
			v23 = sub_140891DA0(a1, a2, a4, a5);
			goto LABEL_32;
		case 5:
			return sub_140891E30(a1, a2, a4, a6);
		case 6:
			if (a2 || a5)
				return v11;
			v23 = 0;
			*a4 = *v8;
		LABEL_32:
			*a6 = v23;
			break;
		case 7:
			*a6 = v10;
			*a4 = *(_DWORD*)(*(_QWORD*)(a1 + 232) - 16i64);
			break;
		default:
			return v11;
		}
		return 1;
	}
	return v11;
}

