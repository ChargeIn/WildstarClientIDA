//----- (000000014038C850) ----------------------------------------------------
_OWORD* __fastcall sub_14038C850(__int64* a1, _OWORD* a2, int a3)
{
	__int64 v3; // rax
	__int64 v5; // rsi
	__int64 v7; // rcx
	_OWORD* result; // rax
	__int64 v9; // rcx
	__int64 v10; // rax
	__int128 v11; // xmm0
	int v12[6]; // [rsp+20h] [rbp-18h] BYREF

	v3 = *a1;
	v5 = a3;
	v12[0] = -1;
	(*(void(__fastcall**)(__int64*, int*))(v3 + 32))(a1, v12);
	if ((_DWORD)v5)
	{
		if ((_DWORD)v5 == 1)
		{
			v7 = a1[4];
			if (v7)
			{
				(*(void(__fastcall**)(__int64, _OWORD*))(*(_QWORD*)v7 + 1200i64))(v7, a2);
				return a2;
			}
		}
	}
	else
	{
		v9 = a1[4];
		if (v9)
		{
			(*(void(__fastcall**)(__int64, _OWORD*))(*(_QWORD*)v9 + 1176i64))(v9, a2);
			return a2;
		}
	}
	v10 = (v5 + 8) << 6;
	*a2 = *(_OWORD*)((char*)a1 + v10);
	v11 = *(_OWORD*)((char*)a1 + v10 + 16);
	result = a2;
	a2[1] = v11;
	return result;
}
// 14038C850: using guessed type int var_18[6];

