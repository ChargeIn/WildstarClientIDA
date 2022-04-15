//----- (000000014079F6F0) ----------------------------------------------------
void* __fastcall sub_14079F6F0(__int64 a1)
{
	__int64 v1; // rcx
	int* v2; // rax
	__int64 v3; // rcx
	int* v4; // rax
	__int64 v5; // rcx
	int* v6; // rax
	__int64 v7; // rcx
	int* v8; // rax
	__int64 v9; // rcx
	int* v10; // rax
	__int64 v11; // rcx
	int* v12; // rax
	__int64 v14; // [rsp+30h] [rbp+10h] BYREF
	int* v15; // [rsp+38h] [rbp+18h] BYREF
	int* v16; // [rsp+40h] [rbp+20h] BYREF

	v14 = a1;
	qword_140C7F778 = (__int64)sub_14018B280(40i64, 0);
	qword_140C7F780 = 0i64;
	*(_BYTE*)qword_140C7F778 = 0;
	*(_QWORD*)(qword_140C7F778 + 8) = 0i64;
	*(_QWORD*)(qword_140C7F778 + 16) = qword_140C7F778;
	*(_QWORD*)(qword_140C7F778 + 24) = qword_140C7F778;
	v1 = *(_QWORD*)(qword_140C7F778 + 8);
	v2 = (int*)qword_140C7F778;
	while (v1)
	{
		if (*(_DWORD*)(v1 + 32) < 0x1Cu)
		{
			v1 = *(_QWORD*)(v1 + 24);
		}
		else
		{
			v2 = (int*)v1;
			v1 = *(_QWORD*)(v1 + 16);
		}
	}
	if (v2 == (int*)qword_140C7F778 || (unsigned int)v2[8] > 0x1C)
	{
		v14 = 28i64;
		v15 = v2;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v2 = v16;
	}
	v2[9] = 99855;
	v3 = *(_QWORD*)(qword_140C7F778 + 8);
	v4 = (int*)qword_140C7F778;
	while (v3)
	{
		if (*(_DWORD*)(v3 + 32) < 0x1Bu)
		{
			v3 = *(_QWORD*)(v3 + 24);
		}
		else
		{
			v4 = (int*)v3;
			v3 = *(_QWORD*)(v3 + 16);
		}
	}
	if (v4 == (int*)qword_140C7F778 || (unsigned int)v4[8] > 0x1B)
	{
		v14 = 27i64;
		v15 = v4;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v4 = v16;
	}
	v4[9] = 99908;
	v5 = *(_QWORD*)(qword_140C7F778 + 8);
	v6 = (int*)qword_140C7F778;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < 3u)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = (int*)v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 == (int*)qword_140C7F778 || (unsigned int)v6[8] > 3)
	{
		v14 = 3i64;
		v15 = v6;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v6 = v16;
	}
	v6[9] = 99857;
	v7 = *(_QWORD*)(qword_140C7F778 + 8);
	v8 = (int*)qword_140C7F778;
	while (v7)
	{
		if (*(_DWORD*)(v7 + 32) < 0xCu)
		{
			v7 = *(_QWORD*)(v7 + 24);
		}
		else
		{
			v8 = (int*)v7;
			v7 = *(_QWORD*)(v7 + 16);
		}
	}
	if (v8 == (int*)qword_140C7F778 || (unsigned int)v8[8] > 0xC)
	{
		v14 = 12i64;
		v15 = v8;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v8 = v16;
	}
	v8[9] = 99858;
	v9 = *(_QWORD*)(qword_140C7F778 + 8);
	v10 = (int*)qword_140C7F778;
	while (v9)
	{
		if (*(_DWORD*)(v9 + 32) < 0x14u)
		{
			v9 = *(_QWORD*)(v9 + 24);
		}
		else
		{
			v10 = (int*)v9;
			v9 = *(_QWORD*)(v9 + 16);
		}
	}
	if (v10 == (int*)qword_140C7F778 || (unsigned int)v10[8] > 0x14)
	{
		v14 = 20i64;
		v15 = v10;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v10 = v16;
	}
	v10[9] = 100597;
	v11 = *(_QWORD*)(qword_140C7F778 + 8);
	v12 = (int*)qword_140C7F778;
	while (v11)
	{
		if (*(_DWORD*)(v11 + 32) < 0x1Eu)
		{
			v11 = *(_QWORD*)(v11 + 24);
		}
		else
		{
			v12 = (int*)v11;
			v11 = *(_QWORD*)(v11 + 16);
		}
	}
	if (v12 == (int*)qword_140C7F778 || (unsigned int)v12[8] > 0x1E)
	{
		v14 = 30i64;
		v15 = v12;
		sub_140032B30((__int64)&unk_140C7F770, &v16, (__int64*)&v15, &v14);
		v12 = v16;
	}
	v12[9] = 99856;
	return &unk_140C7F770;
}
// 140C7F778: using guessed type __int64 qword_140C7F778;
// 140C7F780: using guessed type __int64 qword_140C7F780;

