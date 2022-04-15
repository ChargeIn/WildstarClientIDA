#include "../winhttp.h"

//----- (00000001405693B0) ----------------------------------------------------
__int64 __fastcall sub_1405693B0(__int64 a1, unsigned int a2)
{
	__int64 result; // rax
	_DWORD* v5; // rdx
	__int64 v6; // r9
	__int64 v7; // r8
	int v8; // r8d
	int v9; // eax
	int v10; // edx
	int v11[4]; // [rsp+20h] [rbp-28h] BYREF
	char v12[24]; // [rsp+30h] [rbp-18h] BYREF
	__int64 v13; // [rsp+60h] [rbp+18h]

	result = sub_140236580(a2);
	v5 = (_DWORD*)result;
	if (result)
	{
		result = *(_QWORD*)(a1 + 1464);
		v6 = result;
		v7 = *(_QWORD*)(result + 8);
		while (v7)
		{
			if (*(_DWORD*)(v7 + 32) < a2)
			{
				v7 = *(_QWORD*)(v7 + 24);
			}
			else
			{
				v6 = v7;
				v7 = *(_QWORD*)(v7 + 16);
			}
		}
		if (v6 == result || (v13 = v6, a2 < *(_DWORD*)(v6 + 32)))
			v13 = *(_QWORD*)(a1 + 1464);
		if (v13 == result)
		{
			v8 = v5[47];
			if (v8 || v5[48] || v5[49])
			{
				v9 = v5[48];
				v10 = v5[49];
				v11[1] = v8;
				v11[3] = v10;
				v11[0] = a2;
				v11[2] = v9;
				return sub_1403AF840(a1 + 1456, (__int64)v12, v11);
			}
		}
	}
	return result;
}
// 1405693B0: using guessed type char var_18[24];

