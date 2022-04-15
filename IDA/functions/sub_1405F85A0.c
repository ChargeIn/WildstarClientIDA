//----- (00000001405F85A0) ----------------------------------------------------
__int64 __fastcall sub_1405F85A0(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 result; // rax
	__int64 v7; // rdx
	_QWORD* v8; // rdx
	__int64 v9; // [rsp+8h] [rbp+8h]

	v3 = *(_QWORD*)(qword_140C65980 + 16);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v9 = v4, a2 < *(_DWORD*)(v4 + 32)))
		v9 = *(_QWORD*)(qword_140C65980 + 16);
	result = v9;
	if (v9 != v3)
	{
		v7 = *(_QWORD*)(v9 + 40);
		if (v7)
		{
			if (a3)
			{
				v8 = (_QWORD*)(v7 + 32);
				if (!*(_QWORD*)(a3 + 8))
				{
					*(_QWORD*)(a3 + 8) = v8;
					*(_QWORD*)(a3 + 16) = *v8;
					*v8 = a3;
					result = *(_QWORD*)(a3 + 16);
					if (result)
						*(_QWORD*)(result + 8) = a3 + 16;
				}
			}
		}
	}
	return result;
}
// 140C65980: using guessed type __int64 qword_140C65980;

