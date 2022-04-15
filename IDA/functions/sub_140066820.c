//----- (0000000140066820) ----------------------------------------------------
__int64 __fastcall sub_140066820(__int64 a1, __int64 a2)
{
	__int64 v2; // rsi
	int v4; // r14d
	__int64 v6; // rcx
	__int64 v7; // r8
	const char* v8; // rax
	__int64 v9; // rax
	unsigned int* v10; // rcx
	int v11; // eax
	int v12; // eax
	char* v13; // rdx
	bool v14; // zf
	__int64 v15; // rax
	int v16; // ebx
	int v17; // eax
	__int64 result; // rax
	const char* v19; // rax
	const char* v20; // rax
	__int64 v21; // [rsp+30h] [rbp-68h] BYREF
	int v22; // [rsp+38h] [rbp-60h]
	int v23[4]; // [rsp+40h] [rbp-58h] BYREF
	__int64 v24; // [rsp+50h] [rbp-48h]
	char v25[24]; // [rsp+58h] [rbp-40h] BYREF

	v2 = *(_QWORD*)(a1 + 48);
	v4 = *(_DWORD*)(v2 + 60);
	if (*(_DWORD*)(a1 + 16) == 285)
	{
		if (*(int*)(a2 + 32) > 2147483645)
		{
			v6 = *(_QWORD*)(v2 + 32);
			v7 = *(unsigned int*)(*(_QWORD*)v2 + 96i64);
			if ((_DWORD)v7)
				v8 = (const char*)sub_14005B130(
					v6,
					(unsigned __int64*)"function at line %d has more than %d %s",
					v7,
					2147483645i64,
					aItemsInAConstr);
			else
				v8 = (const char*)sub_14005B130(
					v6,
					(unsigned __int64*)"main function has more than %d %s",
					2147483645i64,
					aItemsInAConstr);
			sub_140062CF0(*(_QWORD*)(v2 + 24), v8, 0);
		}
		v9 = sub_140065780(a1);
		v10 = *(unsigned int**)(a1 + 48);
		v21 = v9;
		v22 = 4;
		v11 = sub_14006A4A0(v10, (int*)&v21, (__int64)&v21);
		v24 = -1i64;
		v23[0] = 4;
		v23[2] = v11;
	}
	else
	{
		sub_140066710(a1, v23);
	}
	++* (_DWORD*)(a2 + 32);
	if (*(_DWORD*)(a1 + 16) != 61)
	{
		v12 = sub_1407DE7F8(61);
		v13 = aCharD;
		if (!v12)
			v13 = aC_16;
		v19 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)v13, 61i64);
		v20 = (const char*)sub_14005B130(*(_QWORD*)(a1 + 56), (unsigned __int64*)"'%s' expected", v19);
		sub_140062CF0(a1, v20, *(_DWORD*)(a1 + 16));
	}
	v14 = *(_DWORD*)(a1 + 32) == 287;
	*(_DWORD*)(a1 + 8) = *(_DWORD*)(a1 + 4);
	if (v14)
	{
		*(_DWORD*)(a1 + 16) = sub_140063BB0(a1, (__int64*)(a1 + 24));
	}
	else
	{
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(a1 + 32);
		v15 = *(_QWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 32) = 287;
		*(_QWORD*)(a1 + 24) = v15;
	}
	v16 = sub_14006ABD0(v2, (__int64)v23);
	sub_140067E60(a1, v25, 0i64);
	v17 = sub_14006ABD0(v2, (__int64)v25);
	result = sub_14006BBF0(
		v2,
		((*(_DWORD*)(*(_QWORD*)(a2 + 24) + 8i64) | ((v17 | (v16 << 9)) << 8)) << 6) | 9u,
		*(_DWORD*)(*(_QWORD*)(v2 + 24) + 8i64));
	*(_DWORD*)(v2 + 60) = v4;
	return result;
}
// 140067E60: using guessed type __int64 __fastcall sub_140067E60(_QWORD, _QWORD, _QWORD);

