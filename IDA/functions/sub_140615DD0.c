#include "../winhttp.h"

//----- (0000000140615DD0) ----------------------------------------------------
__int64 __fastcall sub_140615DD0(__int64 a1, unsigned int a2, int a3)
{
	int v3; // r8d
	int v4; // r8d
	int v5; // r8d
	__int64 result; // rax
	int v7; // edx
	__int64 v8; // rax
	__int64 v9; // rbx
	int* v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	int* v15; // rax
	unsigned int v16; // ecx
	__int64 v17; // rax

	if (a3)
	{
		v3 = a3 - 2;
		if (!v3)
		{
		LABEL_7:
			v7 = 47;
			return sub_1400518A0(qword_140C63628, v7, 1, 0);
		}
		v4 = v3 - 4;
		if (v4)
		{
			v5 = v4 - 2;
			if (v5)
			{
				if (v5 == 1)
				{
					result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C658F0 + 24i64))(qword_140C658F0);
					if ((_DWORD)result)
						return result;
					goto LABEL_7;
				}
			LABEL_29:
				v7 = 54;
				return sub_1400518A0(qword_140C63628, v7, 1, 0);
			}
			v8 = sub_1401E8C20(a2);
			v9 = v8;
			if (!v8)
				goto LABEL_29;
			v10 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v8 + 8), 0i64);
			if (v10)
				v11 = v10[81];
			else
				v11 = 0;
			v12 = sub_14020A3A0(v11);
			if (!v12 || (result = *(unsigned int*)(v12 + 12), !(_DWORD)result))
			{
				if (*(_DWORD*)(v9 + 28))
				{
					v7 = 47;
					return sub_1400518A0(qword_140C63628, v7, 1, 0);
				}
				goto LABEL_29;
			}
		}
		else
		{
			v13 = sub_140248AC0(a2);
			if (!v13)
				goto LABEL_29;
			v14 = sub_14020A3A0(*(_DWORD*)(v13 + 16));
			if (!v14)
				goto LABEL_29;
			result = *(unsigned int*)(v14 + 12);
			if (!(_DWORD)result)
				goto LABEL_29;
		}
	}
	else
	{
		v15 = sub_1400B5DF0(qword_140C658F0, a2, 0i64);
		if (v15)
		{
			if (v15[108])
			{
				v7 = 50;
				return sub_1400518A0(qword_140C63628, v7, 1, 0);
			}
			if ((v15[83] & 4) != 0)
			{
				v7 = 51;
				return sub_1400518A0(qword_140C63628, v7, 1, 0);
			}
			v16 = v15[81];
		}
		else
		{
			v16 = 0;
		}
		v17 = sub_14020A3A0(v16);
		if (!v17)
			goto LABEL_29;
		result = *(unsigned int*)(v17 + 12);
		if (!(_DWORD)result)
			goto LABEL_29;
	}
	return result;
}
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C658F0: using guessed type __int64 qword_140C658F0;

