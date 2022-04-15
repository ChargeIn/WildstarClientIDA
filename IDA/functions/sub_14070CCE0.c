//----- (000000014070CCE0) ----------------------------------------------------
__int64 __fastcall sub_14070CCE0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r14
	int v4; // eax
	unsigned int v6; // ebx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // r15d
	__int64 v12; // rax
	int v13; // ebp
	__int64 v14; // rax
	int v15; // esi
	__int64 v16; // rax
	int v17; // r8d
	int* v18; // rax
	int v19[4]; // [rsp+20h] [rbp-38h] BYREF

	v2 = qword_140C65898;
	if (!qword_140C65898)
		return 0i64;
	if (!a2)
		return 0i64;
	v4 = sub_1403B4710(qword_140C65898, a2, a2 + 2);
	if (v4)
	{
		if (v4 != 42)
			return 0i64;
	}
	if ((a2[85] & 0x400) == 0 || !a2[96])
		return 1i64;
	v6 = 0;
	if ((dword_140DC4CB0 & 1) == 0)
	{
		dword_140DC4CC4 = 0;
		dword_140DC4CCC = 0;
		dword_140DC4CD4 = 0;
		dword_140DC4CDC = 0;
		dword_140DC4CB0 |= 1u;
		goto LABEL_11;
	}
	if (!dword_140DC4CBC)
	{
	LABEL_11:
		dword_140DC4CBC = 1;
		v7 = sub_140200220(0x40Cu);
		if (v7)
			dword_140DC4CB8 = *(_DWORD*)(v7 + 4);
		else
			dword_140DC4CB8 = 0;
	}
	v19[0] = dword_140DC4CB8;
	if (!dword_140DC4CC4)
	{
		dword_140DC4CC4 = 1;
		v8 = sub_140200220(0x40Cu);
		if (v8)
			dword_140DC4CC0 = *(_DWORD*)(v8 + 8);
		else
			dword_140DC4CC0 = 0;
	}
	v19[1] = dword_140DC4CC0;
	if (!dword_140DC4CCC)
	{
		dword_140DC4CCC = 1;
		v9 = sub_140200220(0x40Cu);
		if (v9)
			dword_140DC4CC8 = *(_DWORD*)(v9 + 12);
		else
			dword_140DC4CC8 = 0;
	}
	v19[2] = dword_140DC4CC8;
	if (!dword_140DC4CBC)
	{
		dword_140DC4CBC = 1;
		v10 = sub_140200220(0x40Cu);
		if (v10)
			dword_140DC4CB8 = *(_DWORD*)(v10 + 4);
		else
			dword_140DC4CB8 = 0;
	}
	v11 = dword_140DC4CB8;
	if (!dword_140DC4CC4)
	{
		dword_140DC4CC4 = 1;
		v12 = sub_140200220(0x40Cu);
		if (v12)
			dword_140DC4CC0 = *(_DWORD*)(v12 + 8);
		else
			dword_140DC4CC0 = 0;
	}
	v13 = dword_140DC4CC0;
	if (!dword_140DC4CCC)
	{
		dword_140DC4CCC = 1;
		v14 = sub_140200220(0x40Cu);
		if (v14)
			dword_140DC4CC8 = *(_DWORD*)(v14 + 12);
		else
			dword_140DC4CC8 = 0;
	}
	v15 = dword_140DC4CC8;
	v16 = sub_14020C160(a2[103]);
	if (v16)
	{
		v17 = *(_DWORD*)(v16 + 4);
		if (((v11 | v13 | v15) & v17) != 0)
		{
			v18 = v19;
			while ((*v18 & v17) == 0)
			{
				if ((*v18 & *(_DWORD*)(v2 + 6976)) == 0)
				{
					++v6;
					++v18;
					if (v6 < 3)
						continue;
				}
				return 0i64;
			}
		}
	}
	return 1i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4CB0: using guessed type int dword_140DC4CB0;
// 140DC4CB8: using guessed type int dword_140DC4CB8;
// 140DC4CBC: using guessed type int dword_140DC4CBC;
// 140DC4CC0: using guessed type int dword_140DC4CC0;
// 140DC4CC4: using guessed type int dword_140DC4CC4;
// 140DC4CC8: using guessed type int dword_140DC4CC8;
// 140DC4CCC: using guessed type int dword_140DC4CCC;
// 140DC4CD4: using guessed type int dword_140DC4CD4;
// 140DC4CDC: using guessed type int dword_140DC4CDC;

