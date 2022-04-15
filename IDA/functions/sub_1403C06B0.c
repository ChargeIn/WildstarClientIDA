//----- (00000001403C06B0) ----------------------------------------------------
void __fastcall sub_1403C06B0(__int64 a1, unsigned int a2, unsigned int a3)
{
	__int64 v4; // rcx
	__int64 v6; // r8
	__int64 v7; // r9
	__int64 v8; // rax
	__int64 v9; // r8
	char v10[24]; // [rsp+20h] [rbp-18h] BYREF
	unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

	v4 = a1 + 5568;
	v6 = *(_QWORD*)(v4 + 8);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < a2)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v11 = v7, a2 < *(_DWORD*)(v7 + 32)))
		v11 = v6;
	v9 = *(_QWORD*)(a1 + 5576);
	if (v11 != v9)
		goto LABEL_13;
	if (a3)
	{
		v11 = __PAIR64__(a3, a2);
		sub_140032F50(v4, (__int64)v10, &v11);
		return;
	}
	if (v11 != v9)
	{
	LABEL_13:
		if (!a3)
			sub_1403D5FD0(v4, (__int64*)&v11);
	}
}
// 1403C06B0: using guessed type char var_18[24];

