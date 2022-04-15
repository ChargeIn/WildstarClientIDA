//----- (00000001408624E0) ----------------------------------------------------
__int64 __fastcall sub_1408624E0(__int64 a1, unsigned int a2, _QWORD* a3, _DWORD* a4)
{
	_DWORD* v4; // rax
	_DWORD* v5; // r10
	_QWORD* v6; // r14
	_DWORD* v10; // rax
	__int64 v11; // rdx
	__int64 result; // rax
	unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

	v4 = *(_DWORD**)(a1 + 16);
	v5 = *(_DWORD**)(a1 + 24);
	v6 = (_QWORD*)(a1 + 16);
	if (v4 != v5)
	{
		do
		{
			if (*v4 == a2)
				break;
			v4 += 8;
		} while (v4 != v5);
		if (v4 != v5)
		{
			v10 = v4 + 2;
			if (v10)
				goto LABEL_8;
		}
	}
	v11 = *(unsigned int*)(a1 + 8);
	v13 = -1;
	sub_14085CF00((__int64*)(a1 + 48), v11, a2, &v13);
	if (v13 == -1 || (v10 = sub_1408621C0(v6, a2, v13)) == 0i64)
	{
		result = 0i64;
		*a3 = 0i64;
		*a4 = 0;
	}
	else
	{
	LABEL_8:
		*a4 = v10[2];
		result = *(_QWORD*)v10;
		*a3 = result;
	}
	return result;
}

