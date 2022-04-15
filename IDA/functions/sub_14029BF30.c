//----- (000000014029BF30) ----------------------------------------------------
__int64 __fastcall sub_14029BF30(__int64 a1)
{
	_QWORD* Value; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	int v5; // eax
	_DWORD* v7; // rax
	int v8; // edx
	int v9; // r8d
	int v10; // edx

	if (qword_140C63758 && (Value = TlsGetValue(*(_DWORD*)(qword_140C63758 + 4))) != 0i64 && (v3 = Value[1]) != 0)
		v4 = *(_QWORD*)(v3 + 96);
	else
		v4 = 0i64;
	v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v4 + 40i64))(v4, 0i64);
	if (v5 < 0)
		return sub_14029C120(a1, v5);
	v7 = (_DWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 64) + 32i64))(*(_QWORD*)(a1 + 64));
	if (*v7 != 4671064 || v7[1] != 3)
		return sub_14029C120(a1, -2147467259);
	v8 = v7[4];
	if (v8 == 1 && v7[5] == 1)
	{
		*(_DWORD*)(a1 + 24) = 0;
	}
	else
	{
		v9 = v7[5];
		if (v9 == 1)
		{
			*(_DWORD*)(a1 + 24) = 1;
		}
		else
		{
			if (v7[2] != v7[3] || v8 != 1 || v9 != 6)
				return sub_14029C120(a1, -2147467259);
			*(_DWORD*)(a1 + 24) = 2;
		}
	}
	*(_DWORD*)(a1 + 28) = v7[2];
	*(_DWORD*)(a1 + 32) = v7[3];
	*(_DWORD*)(a1 + 36) = v7[4];
	*(_DWORD*)(a1 + 40) = v7[6];
	v10 = v7[8];
	if (!v10)
	{
		*(_DWORD*)(a1 + 44) = v7[7];
		return sub_14029C120(a1, 0);
	}
	if (v10 == 1)
	{
		*(_DWORD*)(a1 + 44) = 0;
		return sub_14029C120(a1, 0);
	}
	return sub_14029C120(a1, -2147467259);
}
// 140C63758: using guessed type __int64 qword_140C63758;

