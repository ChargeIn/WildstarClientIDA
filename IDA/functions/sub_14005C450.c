#include "../winhttp.h"

//----- (000000014005C450) ----------------------------------------------------
_QWORD* __fastcall sub_14005C450(__int64 a1, int* a2)
{
	int v2; // edi
	_QWORD* result; // rax
	__int64 v5; // r11
	int v6; // edx
	int v7; // edx
	int v8; // ecx
	bool v9; // zf

	v2 = a2[2];
	if (!v2)
		return &unk_140A12138;
	if (v2 == 3)
	{
		if ((double)(int)*(double*)a2 == *(double*)a2)
			return sub_14005C3C0(a1, (int)*(double*)a2);
		goto LABEL_12;
	}
	if (v2 != 4)
	{
	LABEL_12:
		v5 = sub_14005B880(a1, a2);
		while (1)
		{
			v6 = *(_DWORD*)(v5 + 24);
			if (v6 == v2)
			{
				if (!v6)
					return (_QWORD*)v5;
				v7 = v6 - 1;
				if (!v7)
				{
					v8 = 0;
					v9 = *(_DWORD*)(v5 + 16) == *a2;
				LABEL_21:
					LOBYTE(v8) = v9;
					if (v8)
						return (_QWORD*)v5;
					goto LABEL_22;
				}
				if (v7 != 2)
				{
					v8 = 0;
					v9 = *(_QWORD*)(v5 + 16) == *(_QWORD*)a2;
					goto LABEL_21;
				}
				if (*(double*)a2 == *(double*)(v5 + 16))
					return (_QWORD*)v5;
			}
		LABEL_22:
			v5 = *(_QWORD*)(v5 + 32);
			if (!v5)
				return &unk_140A12138;
		}
	}
	result = (_QWORD*)(*(_QWORD*)(a1 + 32)
		+ 40
		* (*(int*)(*(_QWORD*)a2 + 12i64) & (unsigned __int64)(int)((1i64 << *(_BYTE*)(a1 + 11)) - 1)));
	while (*((_DWORD*)result + 6) != 4 || result[2] != *(_QWORD*)a2)
	{
		result = (_QWORD*)result[4];
		if (!result)
			return &unk_140A12138;
	}
	return result;
}

