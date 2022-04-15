//----- (00000001404A8310) ----------------------------------------------------
__int64 __fastcall sub_1404A8310(__int64 a1, unsigned int a2, int a3)
{
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rax
	__int64 v10; // rax
	unsigned int v11; // ecx
	__int64 v12; // [rsp+48h] [rbp+20h]

	if (!a2)
		return 0i64;
	if (a3)
	{
		v6 = *(_QWORD*)(a1 + 1080);
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
	LABEL_18:
		if (v7 == v6 || (v12 = v7, a2 < *(_DWORD*)(v7 + 32)))
			v12 = v6;
		if (v12 == v6)
			return 0i64;
		v11 = *(_DWORD*)(v12 + 36);
		return ((v11
			- ((v11 >> 2) & 0x9249249)
			- ((v11 >> 1) & 0x5B6DB6DB)
			+ ((v11 - ((v11 >> 2) & 0x9249249) - ((v11 >> 1) & 0x5B6DB6DB)) >> 3)) & 0xC71C71C7)
			% 0x3F;
	}
	if (!(unsigned int)sub_1404A7F50())
	{
		v6 = *(_QWORD*)(a1 + 1048);
		v7 = v6;
		v10 = *(_QWORD*)(v6 + 8);
		while (v10)
		{
			if (*(_DWORD*)(v10 + 32) < a2)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v7 = v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
		}
		goto LABEL_18;
	}
	v9 = sub_1404A7EB0(a1, a2);
	if (!v9)
		return 0i64;
	return *(unsigned int*)(*(_QWORD*)v9 + 44i64);
}
// 1404A7F50: using guessed type __int64 sub_1404A7F50(void);

