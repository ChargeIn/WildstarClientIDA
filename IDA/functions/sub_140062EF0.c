//----- (0000000140062EF0) ----------------------------------------------------
__int64 __fastcall sub_140062EF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	_QWORD* v4; // rax
	__int64 v5; // rsi
	__int64 v6; // rbp
	__int64 v9; // rax
	_QWORD* v10; // rcx
	__int64 v12; // rcx
	__int64 result; // rax
	int v14; // edx
	__int64 v15; // rdi
	__int64 v16; // rcx
	__int64 v17; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_QWORD**)(a2 + 72);
	*(_QWORD*)(a2 + 64) = a3;
	*(_QWORD*)(a2 + 80) = a4;
	*(_BYTE*)(a2 + 88) = 46;
	*(_QWORD*)(a2 + 56) = a1;
	*(_DWORD*)(a2 + 32) = 287;
	*(_QWORD*)(a2 + 48) = 0i64;
	*(_DWORD*)(a2 + 4) = 1;
	*(_DWORD*)(a2 + 8) = 1;
	v5 = *(_QWORD*)(a1 + 32);
	v6 = v4[2];
	v9 = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int64))(v5 + 16))(*(_QWORD*)(v5 + 24), *v4, v6, 32i64);
	if (!v9)
		sub_140061040(a1, 4);
	*(_QWORD*)(v5 + 120) += 32 - v6;
	**(_QWORD**)(a2 + 72) = v9;
	*(_QWORD*)(*(_QWORD*)(a2 + 72) + 16i64) = 32i64;
	v10 = *(_QWORD**)(a2 + 64);
	if ((*v10)--)
	{
		v12 = *(_QWORD*)(a2 + 64);
		result = *(_QWORD*)(v12 + 8) + 1i64;
		v14 = **(unsigned __int8**)(v12 + 8);
		*(_QWORD*)(v12 + 8) = result;
	}
	else
	{
		v15 = *(_QWORD*)(a2 + 64);
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v15 + 16))(
			*(_QWORD*)(v15 + 32),
			*(_QWORD*)(v15 + 24),
			&v17);
		if (result && (v16 = v17) != 0)
		{
			*(_QWORD*)(v15 + 8) = result++;
			*(_QWORD*)v15 = v16 - 1;
			v14 = *(unsigned __int8*)(result - 1);
			*(_QWORD*)(v15 + 8) = result;
		}
		else
		{
			v14 = -1;
		}
	}
	*(_DWORD*)a2 = v14;
	return result;
}

