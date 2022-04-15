#include "../winhttp.h"

//----- (000000014049EBF0) ----------------------------------------------------
__int64 __fastcall sub_14049EBF0(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
	unsigned int v4; // edx
	__int64 v5; // rcx
	__int64 v6; // rax
	int v7; // ecx
	unsigned int v8; // r9d
	int v9; // r8d
	unsigned __int64 v11; // rax
	__int64 v12; // rcx
	int v13; // eax
	unsigned int v14; // ecx
	int v15; // r8d

	v4 = 0;
	v5 = 0i64;
	if (!qword_140C7DE20)
		goto LABEL_4;
	while (1)
	{
		v6 = *(_QWORD*)(qword_140C7DE18 + 8 * v5);
		if (*(_DWORD*)(v6 + 16) == 3)
			break;
		if (++v5 >= (unsigned __int64)qword_140C7DE20)
			goto LABEL_4;
	}
	if (v6
		&& (v11 = *(int*)(v6 + 772), v11 < 0xA)
		&& (v12 = *(_QWORD*)(qword_140C7DE18 + 8 * v5) + 8 * (v11 + 4 * v11 + 3)) != 0)
	{
		v13 = *(_DWORD*)(v12 + 8);
		v14 = _bittest(&v13, a4);
		v15 = a3 - 1;
		if (!v15)
			return v14;
		if (v15 == 1)
		{
			LOBYTE(v4) = v14 == 0;
			return v4;
		}
	}
	else
	{
	LABEL_4:
		v7 = *(_DWORD*)(qword_140C65B98 + 400);
		v8 = _bittest(&v7, a4);
		v9 = a3 - 1;
		if (v9)
		{
			if (v9 == 1)
			{
				LOBYTE(v4) = v8 == 0;
				return v4;
			}
		}
		else
		{
			return v8;
		}
	}
	return v4;
}
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

