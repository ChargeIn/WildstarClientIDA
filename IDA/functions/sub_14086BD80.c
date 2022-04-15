//----- (000000014086BD80) ----------------------------------------------------
__int64 __fastcall sub_14086BD80(__int64 a1, unsigned int** a2, __int64 a3, __int64 a4)
{
	unsigned int v8; // r10d
	unsigned int* v9; // rbx
	char v10; // di
	__int64* v11; // rax
	unsigned int v12; // edx
	_DWORD* v13; // rax
	_DWORD* v14; // rcx
	__int64 result; // rax
	__int64 v16; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]

	v8 = 1;
	if (!a2)
		return 1i64;
	v9 = *a2;
	if (*a2 == a2[1])
		return 1i64;
	v10 = v17;
	do
	{
		v11 = *(__int64**)(a1 + 312);
		v12 = *v9;
		if (!v11)
			goto LABEL_7;
		while (*((_DWORD*)v11 + 2) != v12)
		{
			v11 = (__int64*)*v11;
			if (!v11)
				goto LABEL_7;
		}
		if (v11 == (__int64*)-12i64)
		{
		LABEL_7:
			v10 &= 0xE0u;
			v16 = 0i64;
			LOBYTE(v17) = v10;
		}
		else
		{
			v16 = *(__int64*)((char*)v11 + 12);
			v17 = *((_DWORD*)v11 + 5);
			v10 = v17;
		}
		if (*(char*)(a1 + 91) < 0
			&& (v10 & 0x10) != 0
			&& a3
			&& (v13 = *(_DWORD**)a3, v14 = *(_DWORD**)(a3 + 8), *(_DWORD**)a3 != v14))
		{
			while (*v13 != v12)
			{
				if (++v13 == v14)
					goto LABEL_14;
			}
		}
		else
		{
		LABEL_14:
			result = sub_14086BCA0(a1, v12, (__int64)&v16, a4);
			v8 = result;
			if ((_DWORD)result != 1)
				return result;
		}
		++v9;
	} while (v9 != a2[1]);
	return v8;
}

