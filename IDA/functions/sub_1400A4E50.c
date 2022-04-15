//----- (00000001400A4E50) ----------------------------------------------------
__int64 __fastcall sub_1400A4E50(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 v7; // rdx
	int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rdx
	__int64 i; // rbx

	if (!a3)
		return 2147500037i64;
	v8 = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if (v8 >= 0)
	{
		v8 = sub_140086E70(a1, v7, a3 + 8);
		if (v8 >= 0)
		{
			v8 = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x12ui64);
			if (v8 >= 0)
			{
				v8 = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
				if (v8 >= 0)
				{
					v9 = sub_1403374E0(a2, 24i64 * *(unsigned int*)(a3 + 36));
					*(_QWORD*)(a3 + 40) = v9;
					if (!v9)
						return 2147500037i64;
					for (i = 0i64; (unsigned int)i < *(_DWORD*)(a3 + 36); i = (unsigned int)(i + 1))
					{
						v8 = sub_140086E70(a1, v10, *(_QWORD*)(a3 + 40) + 24 * i);
						if (v8 < 0)
							break;
					}
				}
			}
		}
	}
	return (unsigned int)v8;
}
// 1400A4EAD: variable 'v7' is possibly undefined
// 1400A4F2F: variable 'v10' is possibly undefined

