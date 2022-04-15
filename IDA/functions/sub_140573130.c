//----- (0000000140573130) ----------------------------------------------------
__int64 __fastcall sub_140573130(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	_QWORD* v5; // rsi
	_QWORD* v7; // rax
	_QWORD* v8; // rbx
	unsigned int** v9; // rdi
	__int64 v10; // r8
	unsigned int v11; // edx
	__int64 v12; // rax
	__int64 v13; // rcx
	__int64* v14; // rax
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v20; // [rsp+40h] [rbp+8h] BYREF
	__int64 v21; // [rsp+50h] [rbp+18h] BYREF

	v4 = (_QWORD*)sub_140491BD0(qword_140C65968, ***(_DWORD***)(a1 + 72));
	v5 = v4;
	if (!v4 || *(_DWORD*)(*v4 + 20i64) != *(_DWORD*)(a2 + 14080))
		return 0i64;
	v7 = (_QWORD*)v4[2];
	v8 = (_QWORD*)v7[2];
	if (v8 == v7)
		return 1i64;
	while (1)
	{
		v9 = (unsigned int**)v8[5];
		if ((unsigned int)sub_1403D7C30((__int64)v9, a2, 1) && ((*v9)[13] & 0x40) == 0)
		{
			v10 = *(_QWORD*)(a1 + 16);
			v11 = **v9;
			v12 = *(_QWORD*)(v10 + 8);
			v13 = v10;
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v11)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v13 = v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v13 == v10 || v11 < *(_DWORD*)(v13 + 32))
			{
				v21 = *(_QWORD*)(a1 + 16);
				v14 = &v21;
			}
			else
			{
				v20 = v13;
				v14 = &v20;
			}
			v15 = *v14;
			if (v15 == v10)
				break;
			v16 = *(_QWORD*)(v15 + 40);
			if (!v16 || !(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v16 + 56i64))(v16))
				break;
		}
		v17 = v8[3];
		if (v17)
		{
			v8 = (_QWORD*)v8[3];
			for (i = *(_QWORD**)(v17 + 16); i; i = (_QWORD*)i[2])
				v8 = i;
		}
		else
		{
			for (j = v8[1]; v8 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
				v8 = (_QWORD*)j;
			if (v8[3] != j)
				v8 = (_QWORD*)j;
		}
		if (v8 == (_QWORD*)v5[2])
			return 1i64;
	}
	return 0i64;
}
// 140C65968: using guessed type __int64 qword_140C65968;

