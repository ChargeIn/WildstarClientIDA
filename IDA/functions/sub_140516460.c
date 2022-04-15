//----- (0000000140516460) ----------------------------------------------------
__int64 __fastcall sub_140516460(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rdx
	int v7; // ebx
	unsigned int v8; // ebx
	int v9; // eax
	__int64 v11; // [rsp+20h] [rbp-4E8h]
	__int64 v12; // [rsp+30h] [rbp-4D8h] BYREF
	__int64 v13; // [rsp+38h] [rbp-4D0h]
	int v14; // [rsp+50h] [rbp-4B8h]
	__int64 v15; // [rsp+330h] [rbp-1D8h]
	int v16; // [rsp+4C8h] [rbp-40h]
	int v17; // [rsp+4D0h] [rbp-38h]

	sub_14040FAE0((__int64)&v12);
	v2 = *(_DWORD*)(a1 + 16);
	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v11 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v11 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	if (v11 == v3)
		v6 = 0i64;
	else
		v6 = v11 + 40;
	v7 = 1;
	if ((unsigned int)sub_1404111E0((__int64)&v12, v6, 1))
	{
		if (v16)
		{
			v9 = 7;
			if (v14 > 1)
				v7 = v14;
			if (v7 < 7)
				v9 = v7;
		}
		else if (v17 && v13)
		{
			if (*(int*)(v13 + 344) > 1)
				v7 = *(_DWORD*)(v13 + 344);
			v9 = 7;
			if (v7 < 7)
				v9 = v7;
		}
		else
		{
			v9 = 8;
		}
		v8 = 0;
		if (v9 == 1)
		{
			v8 = 100;
		}
		else if (v9 <= 3)
		{
			v8 = 250;
		}
		else if (v9 <= 7)
		{
			v8 = 1000;
		}
	}
	else
	{
		v8 = 0;
	}
	if (v12)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
		v12 = 0i64;
	}
	if (v15)
		sub_14018B900(v15, 0);
	return v8;
}
// 140516560: conditional instruction was optimized away because eax.4 is in (2..8)
// 140C65898: using guessed type __int64 qword_140C65898;

