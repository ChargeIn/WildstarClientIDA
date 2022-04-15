//----- (0000000140062E00) ----------------------------------------------------
__int64 __fastcall sub_140062E00(__int64 a1)
{
	_QWORD* v1; // rdx
	int v2; // esi
	__int64 v5; // rdx
	__int64 result; // rax
	int v7; // ecx
	__int64 v8; // rdi
	__int64 v9; // rcx
	_QWORD* v10; // rcx
	__int64 v11; // rdx
	__int64 v12; // rcx
	int v13; // edx
	__int64 v14; // [rsp+30h] [rbp+8h] BYREF

	v1 = *(_QWORD**)(a1 + 64);
	v2 = *(_DWORD*)a1;
	if ((*v1)--)
	{
		v5 = *(_QWORD*)(a1 + 64);
		result = *(_QWORD*)(v5 + 8) + 1i64;
		v7 = **(unsigned __int8**)(v5 + 8);
		*(_QWORD*)(v5 + 8) = result;
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 64);
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64*))(v8 + 16))(
			*(_QWORD*)(v8 + 32),
			*(_QWORD*)(v8 + 24),
			&v14);
		if (result && (v9 = v14) != 0)
		{
			*(_QWORD*)(v8 + 8) = result++;
			*(_QWORD*)v8 = v9 - 1;
			v7 = *(unsigned __int8*)(result - 1);
			*(_QWORD*)(v8 + 8) = result;
		}
		else
		{
			v7 = -1;
		}
	}
	*(_DWORD*)a1 = v7;
	if ((v7 == 10 || v7 == 13) && v7 != v2)
	{
		v10 = *(_QWORD**)(a1 + 64);
		v11 = (*v10)--;
		v12 = *(_QWORD*)(a1 + 64);
		if (v11)
		{
			result = *(_QWORD*)(v12 + 8) + 1i64;
			v13 = **(unsigned __int8**)(v12 + 8);
			*(_QWORD*)(v12 + 8) = result;
		}
		else
		{
			result = sub_1400628A0(v12);
			v13 = result;
		}
		*(_DWORD*)a1 = v13;
	}
	if ((int)++ * (_DWORD*)(a1 + 4) >= 2147483645)
		sub_140062CF0(a1, aChunkHasTooMan, *(_DWORD*)(a1 + 16));
	return result;
}

