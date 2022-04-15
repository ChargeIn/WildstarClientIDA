#include "../winhttp.h"

//----- (0000000140498A40) ----------------------------------------------------
__int64 __fastcall sub_140498A40(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // r9
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v12; // [rsp+8h] [rbp+8h]
	__int64 v13; // [rsp+8h] [rbp+8h]

	v4 = *(_QWORD*)(a1 + 16);
	v5 = *(_QWORD*)(v4 + 8);
	v6 = v4;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == v4 || (v12 = v6, a3 < *(_DWORD*)(v6 + 32)))
		v12 = *(_QWORD*)(a1 + 16);
	if (v12 == v4)
		return 0i64;
	v7 = *(_QWORD*)(v12 + 40);
	if (!v7)
		return 0i64;
	v8 = *(_QWORD*)(v7 + 8);
	v9 = v8;
	v10 = *(_QWORD*)(v8 + 8);
	while (v10)
	{
		if (*(_DWORD*)(v10 + 32) < a2)
		{
			v10 = *(_QWORD*)(v10 + 24);
		}
		else
		{
			v9 = v10;
			v10 = *(_QWORD*)(v10 + 16);
		}
	}
	if (v9 == v8 || (v13 = v9, a2 < *(_DWORD*)(v9 + 32)))
		v13 = v8;
	if (v13 == v8)
		return 0i64;
	else
		return *(_QWORD*)(v13 + 40);
}

