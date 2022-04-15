//----- (00000001406015C0) ----------------------------------------------------
__int64 __fastcall sub_1406015C0(_QWORD* a1, __int64 a2)
{
	unsigned __int64 v2; // r8
	unsigned int v3; // edi
	__int64 result; // rax
	__int64 v6; // rcx
	_DWORD* i; // rdx
	unsigned int v8; // r14d
	__int64 v9; // rsi
	_QWORD* v10; // rbx

	v2 = a1[15];
	v3 = *(_DWORD*)(a2 + 8);
	result = 0i64;
	if (v2)
	{
		v6 = a1[14];
		for (i = (_DWORD*)(v6 + 4); *i != v3; i += 2)
		{
			if (++result >= v2)
				return result;
		}
		v8 = *(_DWORD*)(v6 + 8 * result);
		if (v8)
		{
			v9 = sub_1406017B0((__int64)a1, v8);
			if (v9)
			{
				v10 = (_QWORD*)a1[16];
				if (v10)
				{
					while ((*(unsigned int(__fastcall**)(_QWORD*))(*v10 + 56i64))(v10) != *(_DWORD*)(v9 + 4))
					{
						v10 = (_QWORD*)v10[2];
						if (!v10)
							goto LABEL_13;
					}
					(*(void(__fastcall**)(_QWORD*))(*v10 + 32i64))(v10);
				}
			}
		LABEL_13:
			sub_140601880((__int64)a1, v8, v3);
			return sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "Group_SetMark", byte_1409EA434, v8, v3);
		}
	}
	return result;
}
// 1409EA434: using guessed type _BYTE byte_1409EA434[32];
// 140C65898: using guessed type __int64 qword_140C65898;

