//----- (0000000140880E70) ----------------------------------------------------
__int64 __fastcall sub_140880E70(__int64 a1)
{
	__int64 v1; // rbx
	int v2; // edx
	__int64 v3; // rcx
	__int64 result; // rax
	int v5; // [rsp+20h] [rbp-18h] BYREF
	__int64 v6; // [rsp+24h] [rbp-14h]
	bool v7; // [rsp+40h] [rbp+8h] BYREF

	v1 = a1;
	if ((*(_BYTE*)(a1 + 126) & 4) != 0)
	{
		if ((*(_BYTE*)(a1 + 32) & 2) != 0)
		{
			v2 = *(_DWORD*)(a1 + 104);
			v3 = *(_QWORD*)(a1 + 88);
			goto LABEL_13;
		}
		return 1i64;
	}
	if (*(_QWORD*)(a1 + 88))
	{
	LABEL_10:
		result = sub_1408809F0(a1);
		if ((_DWORD)result != 1)
			return result;
		if ((*(_BYTE*)(v1 + 32) & 2) != 0)
		{
			v3 = *(_QWORD*)(v1 + 88);
			v2 = *(_DWORD*)(v1 + 104);
		LABEL_13:
			result = sub_1408790B0(v3, v2);
			if ((_DWORD)result == 46)
				return 63i64;
			if ((_DWORD)result == 45)
				return 1i64;
			return result;
		}
		return 1i64;
	}
	v5 = 0;
	v6 = 2048i64;
	result = sub_140880730(a1, (__int64)&v5, 0);
	if ((_DWORD)result == 1)
	{
		result = sub_140880920(v1, &v7);
		if ((_DWORD)result == 1)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v1 + 88) + 88i64))(*(_QWORD*)(v1 + 88));
			if ((_DWORD)result == 1 && !v7)
			{
				a1 = v1;
				goto LABEL_10;
			}
		}
	}
	return result;
}

