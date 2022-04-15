#include "../winhttp.h"

//----- (00000001401962D0) ----------------------------------------------------
int** __fastcall sub_1401962D0(__int64 a1, int** a2, __int64* a3, int* a4)
{
	__int64 v4; // r8
	__int64 v6; // rcx
	int** result; // rax
	int* v10; // r8
	int* v11; // rcx
	__int64 v12; // rbp
	int v13; // eax
	int* v14; // rax
	int* v15; // rbx
	__int64 v16; // rax
	int* v17; // rax
	int* v18; // r8
	int** v19; // rax
	__int64 v20; // rax
	int* v21; // rcx
	__int64 v22; // r9
	__int64 i; // rax
	__int64 v24; // rax
	char v25[40]; // [rsp+30h] [rbp-28h] BYREF

	v4 = *a3;
	v6 = *(_QWORD*)(a1 + 8);
	if (v4 == *(_QWORD*)(v6 + 16))
	{
		if (*(_QWORD*)(a1 + 16) && *a4 - *(_DWORD*)(v4 + 32) < 0)
		{
			sub_140196620(a1, a2, v4, v4, a4);
			return a2;
		}
		v10 = a4;
		goto LABEL_6;
	}
	if (v4 == v6)
	{
		v12 = *(_QWORD*)(v6 + 24);
		v13 = *(_DWORD*)(v12 + 32);
		if (v13 - *a4 >= 0)
		{
			v21 = *(int**)sub_140196730(a1, (__int64)v25, a4);
			result = a2;
			*a2 = v21;
		}
		else
		{
			if (v12 == v6 || *a4 - v13 < 0)
			{
				v17 = sub_14018B280(64i64, 0);
				v15 = v17;
				if (v17 != (int*)-32i64)
				{
					v17[8] = *a4;
					*((_QWORD*)v17 + 5) = 0i64;
					*((_QWORD*)v17 + 7) = 0i64;
					v18 = v17 + 14;
					*((_QWORD*)v17 + 6) = v17 + 10;
					*((_QWORD*)v17 + 7) = *((_QWORD*)v17 + 5);
					*((_QWORD*)v17 + 5) = v17 + 12;
					v19 = (int**)*((_QWORD*)v17 + 7);
					if (v19)
						*v19 = v18;
				}
				*(_QWORD*)(v12 + 16) = v15;
				v20 = *(_QWORD*)(a1 + 8);
				if (v12 == v20)
				{
					*(_QWORD*)(v20 + 8) = v15;
					*(_QWORD*)(*(_QWORD*)(a1 + 8) + 24i64) = v15;
				}
				else if (v12 == *(_QWORD*)(v20 + 16))
				{
					*(_QWORD*)(v20 + 16) = v15;
				}
			}
			else
			{
				v14 = sub_140196830(v6, a4);
				*(_QWORD*)(v12 + 24) = v14;
				v15 = v14;
				v16 = *(_QWORD*)(a1 + 8);
				if (v12 == *(_QWORD*)(v16 + 24))
					*(_QWORD*)(v16 + 24) = v15;
			}
			*((_QWORD*)v15 + 1) = v12;
			*((_QWORD*)v15 + 2) = 0i64;
			*((_QWORD*)v15 + 3) = 0i64;
			sub_1400081C0((__int64)v15, (_QWORD*)(*(_QWORD*)(a1 + 8) + 8i64));
			++* (_QWORD*)(a1 + 16);
			*a2 = v15;
			return a2;
		}
	}
	else
	{
		if (*(_BYTE*)v4 || *(_QWORD*)(*(_QWORD*)(v4 + 8) + 8i64) != v4)
		{
			v22 = *(_QWORD*)(v4 + 16);
			if (v22)
			{
				for (i = *(_QWORD*)(v22 + 24); i; i = *(_QWORD*)(i + 24))
					v22 = i;
			}
			else
			{
				v22 = *(_QWORD*)(v4 + 8);
				if (v4 == *(_QWORD*)(v22 + 16))
				{
					do
					{
						v24 = v22;
						v22 = *(_QWORD*)(v22 + 8);
					} while (v24 == *(_QWORD*)(v22 + 16));
				}
			}
		}
		else
		{
			v22 = *(_QWORD*)(v4 + 24);
		}
		if (*(_DWORD*)(v22 + 32) - *a4 >= 0 || *a4 - *(_DWORD*)(v4 + 32) >= 0)
		{
			v10 = a4;
		LABEL_6:
			v11 = *(int**)sub_140196730(a1, (__int64)v25, v10);
			result = a2;
			*a2 = v11;
			return result;
		}
		if (*(_QWORD*)(v22 + 24))
			sub_140196620(a1, a2, v4, v4, a4);
		else
			sub_140196620(a1, a2, 0i64, v22, a4);
		return a2;
	}
	return result;
}

