//----- (00000001405E0080) ----------------------------------------------------
__int64 __fastcall sub_1405E0080(__int64 a1, __int64 a2)
{
	unsigned __int64 v4; // rsi
	_QWORD* v5; // rbx
	__int64* v6; // rbx
	__int64 v7; // rcx
	__int64 v8; // r14
	__int64 v9; // rcx
	int v10; // ebx
	int v11; // edx
	int v12; // eax
	__int64 v14[3]; // [rsp+30h] [rbp-18h] BYREF

	v4 = (*(__int64(__fastcall**)(__int64))(a1 + 144))(a2);
	v5 = *(_QWORD**)(*(_QWORD*)(a1 + 136) + 8 * (v4 % *(_QWORD*)(a1 + 128)));
	if (v5)
	{
		while (v4 != *v5 || !(*(unsigned int(__fastcall**)(__int64, _QWORD*))(a1 + 152))(a2, v5 + 2))
		{
			v5 = (_QWORD*)v5[1];
			if (!v5)
				return 0i64;
		}
		v6 = v5 + 3;
		if (v6)
		{
			v7 = qword_140C65898;
			v8 = *v6;
			*(_DWORD*)(v8 + 208) = *(_DWORD*)(a2 + 8);
			sub_1400EA3E0(*(_QWORD*)(v7 + 29504), "FriendshipUpdate", byte_1409EAC3C, *(unsigned int*)(v8 + 8));
			v9 = *(unsigned int*)(v8 + 208);
			v10 = 0;
			v11 = 1;
			if (!(_DWORD)v9 || (_DWORD)v9 == 4)
			{
				v11 = 2;
			}
			else if ((_DWORD)v9 == 3)
			{
				v11 = 3;
			}
			v14[1] = (__int64)sub_1405E2A30;
			v14[0] = a1;
			sub_1403F8660(v9, v11, (__int64*)(v8 + 184), v14);
			v12 = *(_DWORD*)(v8 + 208);
			if (!v12 || (LOBYTE(v10) = v12 == 4, v10) || v12 == 1)
				sub_1405E28C0(a1, v8 + 184);
		}
	}
	return 0i64;
}
// 1405E0155: conditional instruction was optimized away because ecx.4 is in (1..2|>=5u)
// 1409EAC3C: using guessed type _BYTE byte_1409EAC3C[32];
// 140C65898: using guessed type __int64 qword_140C65898;

