#include "../winhttp.h"

//----- (000000014079FC20) ----------------------------------------------------
__int64 __fastcall sub_14079FC20(int a1, unsigned int a2)
{
	int v2; // ecx
	int v3; // ecx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v10; // [rsp+18h] [rbp+18h]

	v2 = a1 - 1;
	if (!v2)
	{
		v4 = qword_140C7F758;
		v5 = qword_140C7F758;
		v8 = *(_QWORD*)(qword_140C7F758 + 8);
		if (v8)
		{
			do
			{
				if (*(_DWORD*)(v8 + 32) < a2)
				{
					v8 = *(_QWORD*)(v8 + 24);
				}
				else
				{
					v5 = v8;
					v8 = *(_QWORD*)(v8 + 16);
				}
			} while (v8);
			goto LABEL_21;
		}
	LABEL_23:
		v10 = v4;
		goto LABEL_24;
	}
	v3 = v2 - 1;
	if (!v3)
	{
		v4 = qword_140C7F778;
		v5 = qword_140C7F778;
		v7 = *(_QWORD*)(qword_140C7F778 + 8);
		if (v7)
		{
			do
			{
				if (*(_DWORD*)(v7 + 32) < a2)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v5 = v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			} while (v7);
			goto LABEL_21;
		}
		goto LABEL_23;
	}
	if (v3 != 1)
		return 0i64;
	v4 = qword_140C7F798;
	v5 = qword_140C7F798;
	v6 = *(_QWORD*)(qword_140C7F798 + 8);
	if (!v6)
		goto LABEL_23;
	do
	{
		if (*(_DWORD*)(v6 + 32) < a2)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	} while (v6);
LABEL_21:
	if (v5 == v4)
		goto LABEL_23;
	v10 = v5;
	if (a2 < *(_DWORD*)(v5 + 32))
		goto LABEL_23;
LABEL_24:
	if (v10 == v4)
		return 0i64;
	return *(unsigned int*)(v10 + 36);
}
// 140C7F758: using guessed type __int64 qword_140C7F758;
// 140C7F778: using guessed type __int64 qword_140C7F778;
// 140C7F798: using guessed type __int64 qword_140C7F798;

