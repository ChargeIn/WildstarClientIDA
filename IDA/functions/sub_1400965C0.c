//----- (00000001400965C0) ----------------------------------------------------
__int64 __fastcall sub_1400965C0(__int64 a1, _QWORD* a2, __int64 a3)
{
	int v7; // ebx
	__int64 v8; // rax
	unsigned __int8 v9; // si
	_DWORD* v10; // rdi
	__int64 v11; // rdx
	__int64 v12; // rdx

	if (!a3)
		return 2147500037i64;
	v7 = sub_140336A40(a1, a2, (_QWORD*)a3);
	if (v7 >= 0)
	{
		v7 = sub_14006BE30(a1, (_BYTE*)(a3 + 8), 8ui64);
		if (v7 >= 0)
		{
			v8 = sub_1403374E0(a2, 32i64 * *(unsigned __int8*)(a3 + 8));
			*(_QWORD*)(a3 + 16) = v8;
			if (!v8)
				return 2147500037i64;
			v9 = 0;
			if (*(_BYTE*)(a3 + 8))
			{
				while (1)
				{
					v10 = (_DWORD*)(*(_QWORD*)(a3 + 16) + 32i64 * v9);
					if (!v10)
						break;
					v7 = sub_14006C090(a1, v10, 2ui64);
					if (v7 >= 0)
					{
						v7 = sub_1400A8A30(a1, v11, v10 + 1);
						if (v7 >= 0)
						{
							v7 = sub_1400A8A30(a1, v12, v10 + 4);
							if (v7 >= 0)
								v7 = sub_14006C1C0(a1, v10 + 7);
						}
					}
					if (v7 >= 0 && ++v9 < *(_BYTE*)(a3 + 8))
						continue;
					return (unsigned int)v7;
				}
				return (unsigned int)-2147467259;
			}
		}
	}
	return (unsigned int)v7;
}
// 14009667C: variable 'v11' is possibly undefined
// 14009668E: variable 'v12' is possibly undefined

