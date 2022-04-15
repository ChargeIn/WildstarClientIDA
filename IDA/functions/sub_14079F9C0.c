#include "../winhttp.h"

//----- (000000014079F9C0) ----------------------------------------------------
void* __fastcall sub_14079F9C0(__int64 a1)
{
	__int64 v1; // rcx
	int* i; // rax
	__int64 v3; // rcx
	int* v4; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rcx
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v12; // [rsp+30h] [rbp+10h] BYREF
	int* v13; // [rsp+38h] [rbp+18h] BYREF
	int* v14; // [rsp+40h] [rbp+20h] BYREF

	v12 = a1;
	qword_140C7F798 = (__int64)sub_14018B280(40i64, 0);
	qword_140C7F7A0 = 0i64;
	*(_BYTE*)qword_140C7F798 = 0;
	*(_QWORD*)(qword_140C7F798 + 8) = 0i64;
	*(_QWORD*)(qword_140C7F798 + 16) = qword_140C7F798;
	*(_QWORD*)(qword_140C7F798 + 24) = qword_140C7F798;
	v1 = *(_QWORD*)(qword_140C7F798 + 8);
	for (i = (int*)qword_140C7F798; v1; v1 = *(_QWORD*)(v1 + 16))
		i = (int*)v1;
	if (i == (int*)qword_140C7F798 || i[8])
	{
		v12 = 0i64;
		v13 = i;
		sub_140032B30((__int64)&unk_140C7F790, &v14, (__int64*)&v13, &v12);
		i = v14;
	}
	i[9] = 99855;
	v3 = *(_QWORD*)(qword_140C7F798 + 8);
	v4 = (int*)qword_140C7F798;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < 3u)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)qword_140C7F798 || (unsigned int)v4[8] > 3)
	{
		v12 = 3i64;
		v13 = v4;
		sub_140032B30((__int64)&unk_140C7F790, &v14, (__int64*)&v13, &v12);
		v4 = v14;
	}
	v4[9] = 99857;
	v5 = *(_QWORD*)(qword_140C7F798 + 8);
	v6 = (int*)qword_140C7F798;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < 0xCu)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == (int*)qword_140C7F798 || (unsigned int)v6[8] > 0xC)
	{
		v12 = 12i64;
		v13 = v6;
		sub_140032B30((__int64)&unk_140C7F790, &v14, (__int64*)&v13, &v12);
		v6 = v14;
	}
	v6[9] = 99858;
	v7 = *(_QWORD*)(qword_140C7F798 + 8);
	v8 = (int*)qword_140C7F798;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < 0x14u)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == (int*)qword_140C7F798 || (unsigned int)v8[8] > 0x14)
	{
		v12 = 20i64;
		v13 = v8;
		sub_140032B30((__int64)&unk_140C7F790, &v14, (__int64*)&v13, &v12);
		v8 = v14;
	}
	v8[9] = 100597;
	v9 = *(_QWORD*)(qword_140C7F798 + 8);
	v10 = (int*)qword_140C7F798;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < 0x19u)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = (int*)v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == (int*)qword_140C7F798 || (unsigned int)v10[8] > 0x19)
	{
		v12 = 25i64;
		v13 = v10;
		sub_140032B30((__int64)&unk_140C7F790, &v14, (__int64*)&v13, &v12);
		v10 = v14;
	}
	v10[9] = 100621;
	return &unk_140C7F790;
}
// 140C7F798: using guessed type __int64 qword_140C7F798;
// 140C7F7A0: using guessed type __int64 qword_140C7F7A0;

