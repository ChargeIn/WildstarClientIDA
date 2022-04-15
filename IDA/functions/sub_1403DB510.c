//----- (00000001403DB510) ----------------------------------------------------
__int64 __fastcall sub_1403DB510(__int64 a1, __int64 a2)
{
	int v4; // esi
	int v5; // eax
	unsigned int v6; // r8d
	__int64 v7; // rcx
	__int64 v8; // rdx
	__int64 v10[2]; // [rsp+40h] [rbp-78h] BYREF
	unsigned __int16 v11[40]; // [rsp+50h] [rbp-68h] BYREF

	if (*(_DWORD*)a2)
	{
		v4 = 0;
		v10[1] = 0i64;
		v10[0] = 0i64;
		if ((unsigned int)sub_1403F82F0(qword_140C65898, 5, (__int64*)(a2 + 8), v11, 0x21u, v10, 0i64))
		{
			v5 = *(_DWORD*)(a2 + 28);
			v6 = *(_DWORD*)a2;
			v7 = *(_QWORD*)(a1 + 29504);
			if (v5 == 2)
			{
				sub_140428840(v7, v11, v6);
			}
			else
			{
				LOBYTE(v4) = v5 == 0;
				sub_140428500(v7, v11, v6, v4);
			}
		}
	}
	v8 = *(_QWORD*)(qword_140C65898 + 120);
	if (v8 && *(_DWORD*)(a2 + 8) == *(_DWORD*)(v8 + 416) && *(_QWORD*)(a2 + 16) == *(_QWORD*)(v8 + 424))
		sub_1405FF370(*(_QWORD*)(a1 + 32144), *(_DWORD*)a2);
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 1403DB510: using guessed type unsigned __int16 var_68[40];

