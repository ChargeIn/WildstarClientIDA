//----- (00000001406369C0) ----------------------------------------------------
__int64 __fastcall sub_1406369C0(__int64 a1, int* a2)
{
	__int64 v2; // rdi
	unsigned __int64 v3; // r9
	unsigned __int64 v5; // r10
	int v6; // ebx
	__int64 v7; // rsi
	unsigned __int64 v8; // rdx
	int v9; // r8d
	__int64 v10; // rcx
	int v11; // eax
	int v12; // eax
	int v13; // r8d
	unsigned __int8 v14; // al
	unsigned __int8 v15; // r8
	__int64 v17; // rcx
	__int64 v18; // rdx

	v2 = qword_140C65C20;
	v3 = 0i64;
	v5 = *(_QWORD*)(qword_140C65C20 + 328);
	if (!v5)
		return 0i64;
	v6 = *a2;
	v7 = *(_QWORD*)(qword_140C65C20 + 320);
	while (1)
	{
		v8 = v3 + ((v5 - v3) >> 1);
		v9 = *(_DWORD*)(v7 + 20 * v8);
		v10 = v7 + 20 * v8;
		if (v6 == v9)
		{
			v12 = a2[1];
			v13 = *(_DWORD*)(v10 + 4);
			if (v12 == v13)
			{
				v14 = *((_BYTE*)a2 + 12);
				v15 = *(_BYTE*)(v10 + 12);
				v11 = v14 == v15 ? a2[2] - *(_DWORD*)(v10 + 8) : v14 - v15;
			}
			else
			{
				v11 = v12 - v13;
			}
		}
		else
		{
			v11 = v6 - v9;
		}
		if (v11 >= 0)
			break;
		v5 = v3 + ((v5 - v3) >> 1);
	LABEL_14:
		if (v3 >= v5)
			return 0i64;
	}
	if (v11 > 0)
	{
		v3 = v8 + 1;
		goto LABEL_14;
	}
	v17 = qword_140C65C20;
	v18 = 20 * v8;
	*(_DWORD*)(v7 + v18 + 16) = a2[4];
	sub_14063A0E0(v17, (int*)(*(_QWORD*)(v2 + 320) + v18));
	return 0i64;
}
// 140C65C20: using guessed type __int64 qword_140C65C20;

