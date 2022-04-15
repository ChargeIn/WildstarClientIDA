#include "../winhttp.h"

//----- (00000001403CDAA0) ----------------------------------------------------
_QWORD* __fastcall sub_1403CDAA0(__int64 a1, unsigned int a2, __int64 a3, __int64* a4)
{
	_QWORD* v4; // r10
	_QWORD* v6; // rax
	_QWORD* v7; // r9
	_QWORD* result; // rax
	unsigned __int64 v9; // rcx
	unsigned __int64 v10; // rbx
	unsigned int v11; // esi
	unsigned __int64 v12; // rcx
	_DWORD* v13; // rax
	int* v14; // rax
	int* v15; // rbp
	_QWORD* v16; // [rsp+20h] [rbp-28h]
	unsigned __int64 i; // [rsp+20h] [rbp-28h]
	_QWORD* v18; // [rsp+28h] [rbp-20h]

	v4 = *(_QWORD**)(a3 + 8);
	v6 = (_QWORD*)v4[1];
	v7 = v4;
	while (v6)
	{
		if (*((_DWORD*)v6 + 8) < a2)
		{
			v6 = (_QWORD*)v6[3];
		}
		else
		{
			v7 = v6;
			v6 = (_QWORD*)v6[2];
		}
	}
	if (v7 == v4 || (v16 = v7, a2 < *((_DWORD*)v7 + 8)))
		v16 = *(_QWORD**)(a3 + 8);
	result = v16;
	if (v16 != v4)
	{
		result = (_QWORD*)v16[5];
		v9 = 0i64;
		v18 = result;
		for (i = 0i64; v9 < v18[1]; i = v9)
		{
			v10 = a4[1];
			v11 = *(_DWORD*)(*result + 4 * v9);
			v12 = 0i64;
			if (v10)
			{
				v13 = (_DWORD*)*a4;
				while (*v13 != v11)
				{
					++v12;
					++v13;
					if (v12 >= v10)
						goto LABEL_15;
				}
			}
			else
			{
			LABEL_15:
				v14 = sub_14018DB00(*a4, v10 + 1, 4i64);
				v15 = v14;
				v14[v10] = v11;
				if ((int*)*a4 != v14)
				{
					sub_1407DB590(v14, (int*)*a4, 4 * a4[1]);
					if (*a4)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a4 - 16) + 8i64))(*a4 - 16);
					*a4 = (__int64)v15;
				}
				a4[1] = v10 + 1;
			}
			sub_1403CDAA0(a1, v11, a3, a4);
			result = v18;
			v9 = i + 1;
		}
	}
	return result;
}

