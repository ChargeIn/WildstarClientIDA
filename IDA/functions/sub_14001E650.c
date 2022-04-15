#include "../winhttp.h"

//----- (000000014001E650) ----------------------------------------------------
int** __fastcall sub_14001E650(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // r8
	__int64 v6; // rdx
	signed int v9; // ecx
	int** result; // rax
	int* v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rsi
	int v14; // eax
	int* v15; // rcx
	int v16; // eax
	int* v17; // rax
	int* v18; // rdi
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // r9
	__int64 i; // rax
	__int64 v23; // rax
	signed int v24; // eax
	int v25; // ecx
	int v26; // eax
	char v27[24]; // [rsp+30h] [rbp-18h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (*(_QWORD*)(a1 + 16))
		{
			v9 = *(_DWORD*)(v4 + 32);
			if (*a4 < v9 || v9 >= *a4 && a4[1] < *(_DWORD*)(v4 + 36))
			{
				sub_14001F550(a1, a2, v4, v4, (__int64)a4);
				return a2;
			}
		}
		goto LABEL_7;
	}
	if (v4 == v6)
	{
		v12 = (unsigned int)*a4;
		v13 = *(_QWORD*)(v6 + 24);
		v14 = *(_DWORD*)(v13 + 32);
		if (v14 < (int)v12 || (int)v12 >= v14 && *(_DWORD*)(v13 + 36) < a4[1])
		{
			if (v13 == v6
				|| (v16 = *(_DWORD*)(v13 + 32), (int)v12 < v16)
				|| v16 >= (int)v12 && a4[1] < *(_DWORD*)(v13 + 36))
			{
				v18 = sub_14018B280(72i64, 0);
				if (v18 != (int*)-32i64)
				{
					*((_QWORD*)v18 + 4) = *(_QWORD*)a4;
					sub_14001E1E0((__int64)(v18 + 10), (__int64)(a4 + 2));
				}
				*(_QWORD*)(v13 + 16) = v18;
				v20 = *(_QWORD*)(a1 + 8);
				if (v13 == v20)
				{
					*(_QWORD*)(v20 + 8) = v18;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v18;
				}
				else if (v13 == *(_QWORD*)(v20 + 16))
				{
					*(_QWORD*)(v20 + 16) = v18;
				}
			}
			else
			{
				v17 = sub_14001F440(v12, a4);
				*(_QWORD*)(v13 + 24) = v17;
				v18 = v17;
				v19 = *(_QWORD*)(a1 + 8);
				if (v13 == *(_QWORD*)(v19 + 24))
					*(_QWORD*)(v19 + 24) = v18;
			}
			*((_QWORD*)v18 + 1) = v13;
			*((_QWORD*)v18 + 2) = 0i64;
			*((_QWORD*)v18 + 3) = 0i64;
			sub_1400081C0((__int64)v18, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v18;
			return a2;
		}
		else
		{
			v15 = *(int**)sub_14001F650(a1, (__int64)v27, a4);
			result = a2;
			*a2 = v15;
		}
	}
	else
	{
		if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
		{
			v21 = *(_QWORD*)(v4 + 16);
			if (v21)
			{
				for (i = *(_QWORD*)(v21 + 24); i; i = *(_QWORD*)(i + 24))
					v21 = i;
			}
			else
			{
				v21 = *(_QWORD*)(v4 + 8);
				if (v4 == *(_QWORD*)(v21 + 16))
				{
					do
					{
						v23 = v21;
						v21 = *(_QWORD*)(v21 + 8);
					} while (v23 == *(_QWORD*)(v21 + 16));
				}
			}
		}
		else
		{
			v21 = *(_QWORD*)(v4 + 24);
		}
		v24 = *(_DWORD*)(v21 + 32);
		v25 = *a4;
		if (v24 >= *a4 && (v25 < v24 || *(_DWORD*)(v21 + 36) >= a4[1])
			|| (v26 = *(_DWORD*)(v4 + 32), v25 >= v26) && (v26 < v25 || a4[1] >= *(_DWORD*)(v4 + 36)))
		{
		LABEL_7:
			v11 = *(int**)sub_14001F650(a1, (__int64)v27, a4);
			result = a2;
			*a2 = v11;
			return result;
		}
		if (*(_QWORD*)(v21 + 24))
			sub_14001F550(a1, a2, v4, v4, (__int64)a4);
		else
			sub_14001F550(a1, a2, 0i64, v21, (__int64)a4);
		return a2;
	}
	return result;
}

