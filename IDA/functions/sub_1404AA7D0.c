#include "../winhttp.h"

//----- (00000001404AA7D0) ----------------------------------------------------
_BOOL8 __fastcall sub_1404AA7D0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, _QWORD* a6)
{
	__int64 v7; // r10
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdx
	int v11; // ebx
	int v12; // r10d
	__int64* v13; // rax
	__int64* v14; // r9
	__int64 v15; // rcx
	unsigned int v16; // edx
	__int64 v17; // rdx
	__int64 v18; // rcx
	__int64 v19; // rax
	_QWORD* v20; // rcx
	__int64 v22; // [rsp+10h] [rbp+8h]
	__int64 v23; // [rsp+10h] [rbp+8h]

	v7 = *(_QWORD*)(qword_140C659B8 + 16);
	v8 = v7;
	v9 = *(_QWORD*)(v7 + 8);
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < a2)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v8 = v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v8 == v7 || (v22 = v8, a2 < *(_DWORD*)(v8 + 32)))
		v22 = *(_QWORD*)(qword_140C659B8 + 16);
	if (v22 == v7)
		v10 = 0i64;
	else
		v10 = *(_QWORD*)(v22 + 40);
	v11 = 0;
	v12 = 0;
	if (v10)
	{
		v13 = *(__int64**)(v10 + 8);
		v14 = *(__int64**)(v10 + 16);
		v15 = 0i64;
		if (v13 != v14)
		{
			do
			{
				v16 = *(_DWORD*)(*v13 + 8);
				if (v16 <= a4 && (!v15 || v16 > *(_DWORD*)(v15 + 8)))
					v15 = *v13;
				++v13;
			} while (v13 != v14);
			if (v15)
				v12 = 1;
		}
	}
	v17 = *(_QWORD*)(qword_140C659B8 + 48);
	v18 = v17;
	v19 = *(_QWORD*)(v17 + 8);
	while (v19)
	{
		if (*(_DWORD*)(v19 + 32) < a3)
		{
			v19 = *(_QWORD*)(v19 + 24);
		}
		else
		{
			v18 = v19;
			v19 = *(_QWORD*)(v19 + 16);
		}
	}
	if (v18 == v17 || (v23 = v18, a3 < *(_DWORD*)(v18 + 32)))
		v23 = *(_QWORD*)(qword_140C659B8 + 48);
	if (v23 != v17)
	{
		v20 = *(_QWORD**)(v23 + 40);
		if (v20)
		{
			if (*v20)
			{
				v11 = 1;
				if (a6)
					*a6 = *v20;
			}
		}
	}
	return v12 || v11;
}
// 140C659B8: using guessed type __int64 qword_140C659B8;

